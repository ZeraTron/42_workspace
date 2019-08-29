#!/bin/sh
[ -d obj ] || mkdir obj
src=$(find $1/*.c | cut -c 6- | sed 's/.\{2\}$//')
gcc -Wall -c $1/$src.c -o obj/$src.o
gcc -Wall -c main.c -o obj/main.o 
gcc -Wall -o runme obj/*.o

