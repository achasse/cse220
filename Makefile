#Team members: Aaron Chasse, Jake Borg, Doug Liu
#CSE 220 - Lab 2 Phase 2


#!/bin/bash
# File: Makefile

lister: main.o print.o
	gcc main.o print.o -o lister

main.o: main.c
	gcc -c main.c
print.o: print.c
	gcc -c print.c



