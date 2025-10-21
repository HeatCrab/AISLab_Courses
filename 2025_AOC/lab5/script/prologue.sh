make clean
rm -rf ./dist
mkdir -p ./dist/aoc2025-lab5/StudentID_lab5
mkdir -p ./dist/aoc2025-lab5/StudentID_lab5/simulation/hardware
mkdir -p ./dist/aoc2025-lab5/StudentID_lab5/simulation/software/src
mkdir -p ./dist/aoc2025-lab5/StudentID_lab5/simulation/software/include
cp -r ./simulation/hardware/* ./dist/aoc2025-lab5/StudentID_lab5/simulation/hardware
cp -r ./simulation/software/src/* ./dist/aoc2025-lab5/StudentID_lab5/simulation/software/src
cp -r ./simulation/software/include/* ./dist/aoc2025-lab5/StudentID_lab5/simulation/software/include
cp -r ./model ./dist/aoc2025-lab5/StudentID_lab5/