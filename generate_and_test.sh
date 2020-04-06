#!/bin/bash

if [[ $# -ne 2 ]];
then
	echo "Please execute as : ./generate_and_test.sh <Correct solution file> <Your solution file>, considering base directory as CP_Helper/"
	exit 1
fi

cwd=`pwd`
correct_file="$cwd/$1"
to_test_file="$cwd/$2"

echo "Generating tests..." &&
python3 testgen.py > testfile.txt &&
echo "Compiling correct solution file..." &&
g++ -Wall -g -std=c++11 $correct_file &&
echo "Running correct solution file..." &&
./a.out < testfile.txt > Eoutput.txt &&
echo "Compiling solution file to be tested..." &&
g++ -Wall -g -std=c++11 $to_test_file &&
echo "Running solution file to be tested..." &&
./a.out < testfile.txt > Aoutput.txt &&
echo "Comparing the output files..." &&
echo &&
./judge

# End of script