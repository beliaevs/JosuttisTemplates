all: twophase.exe

twophase.exe: twophase.cpp
	g++ -o twophase.exe -std=c++17 -Wall -pedantic -Wextra twophase.cpp