import numpy as np


def merge(subset, min_num_body_parts=4, min_score=0.4):
    """
    Estimates the skeletons.
    :param connections: valid connections
    :param min_num_body_parts: minimum number of body parts for a skeleton
    :param min_score: minimum score value for the skeleton
    :return: list of skeletons. Each skeleton has a list of identifiers of body parts:
        [
            [id1, id2,...,idN, score, parts_num],
            [id1, id2,...,idN, score, parts_num]
            ...
        ]

    position meaning:
        [   [nose       , neck           , right_shoulder , right_elbow      , right_wrist  , left_shoulder
             left_elbow , left_wrist     , right_hip      , right_knee       , right_ankle  , left_hip
             left_knee  , left_ankle     , right_eye      , left_eye         , right_ear    , left_ear
             score, parts_num],
        ]
    """

    # 2 step :
    #---merge----
    # Merge the limbs in the subset
    # score : score
    # parts_num : How many limbs are in the subset 
    ###############################
    
    if len(subset) == 0:
        return subset

    # Convert to list for easier manipulation
    skeletons = subset.tolist()

    # Used GREEDY algorithm to merge the limbs until no more merge is possible
    changed = True
    while changed:
        changed = False
        i = 0
        while i < len(skeletons):
            j = i + 1
            while j < len(skeletons):
                skeleton1 = skeletons[i]
                skeleton2 = skeletons[j]

                # Check if the two skeletons have common body parts
                has_shared = False
                has_conflict = False
                for k in range(len(skeleton1) - 2):
                    if skeleton1[k] > -1 and skeleton2[k] > -1:
                        if skeleton1[k] == skeleton2[k]:
                            has_shared = True
                        else:
                            has_conflict = True
                            break
                
                if has_conflict:
                    j += 1
                    continue

                if has_shared:
                    # Merge the two skeletons
                    for k in range(len(skeleton1) - 2):
                        if skeleton1[k] == -1 and skeleton2[k] != -1:
                            skeleton1[k] = skeleton2[k]
                    skeleton1[-2] += skeleton2[-2]
                    skeleton1[-1] = sum(1 for x in skeleton1[:-2] if x != -1)   # recalculate parts_num

                    # Delete the second skeleton, to avoid duplicates merging and infinite loops
                    del skeletons[j]
                    changed = True
                else:
                    j += 1
            i += 1

    subset = np.array(skeletons)

    # after merge
    #---delete---
    # Delete the non-compliant subset
    # 1. parts_num < 4
    # 2. Average score(score / parts_num) < 0.4 
    ############################################
    
    delete_idx = []
    for i in range(len(subset)): 
        if subset[i][-1] < min_num_body_parts or (subset[i][-2] / subset[i][-1]) < min_score:  # revise here
            delete_idx.append(i)
    subset = np.delete(subset, delete_idx, axis=0)

    print("Output subset: ", subset)

    return subset