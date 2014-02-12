#Team members: Aaron Chasse, Jake Borg, Doug Liu

#!/bin/bash
# File: Makefile

hello: helloworld.o
	gcc helloworld.o -o hello

helloworld.o: helloworld.c
	gcc -c helloworld.c



