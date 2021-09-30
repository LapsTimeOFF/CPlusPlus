@echo off
echo Build ../src/main.cpp in progress...
g++ -std=c++17 -Wall -Wextra -Werror ../src/main.cpp -o ../build/prog
echo Build ../src/main.cpp at ../build/prog finish !