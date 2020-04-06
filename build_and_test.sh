#!/bin/bash

if [[ $# -ne 1 ]];
then
	echo "Please execute as : ./build_and_test.sh <file> , considering base directory as CP_Helper/"
	exit 1
fi

cwd=`pwd`
file="$cwd/$1"

echo "Compiling..." &&
g++ -Wall -g -std=c++11 $file && 
echo "Running..." &&
./a.out < testfile.txt > Aoutput.txt 2> debug.txt &&
echo "Testing..." && 
	echo &&
	echo "Expected output:" && 
	echo &&
	cat Eoutput.txt &&
	echo &&
	echo &&
	echo "Your output:" &&
	echo &&
	cat Aoutput.txt &&
	echo &&
	echo &&
	./judge

# End of script