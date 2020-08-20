# CMakeList.txt : CMake project for rock_paper_scissors, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("rock_paper_scissors")

# Add source to this project's executable.
add_executable (rock_paper_scissors "rock_paper_scissors.cpp" "rock_paper_scissors.h" "game/game.cpp" "game/game.h")

# TODO: Add tests and install targets if needed.
