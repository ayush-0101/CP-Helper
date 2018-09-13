#!/bin/sh
cd $GEDIT_CURRENT_DOCUMENT_DIR
g++ -Wall -g -std=c++11 -DLOCAL_TEST $GEDIT_CURRENT_DOCUMENT_NAME && gnome-terminal -e "sh -c './a.out; 
	echo Expected output: ; 
	echo ;
	cat Eoutput.txt; 
	echo ;
	echo Your output: ; 
	echo ;
	cat Aoutput.txt; 
	echo ;
	./judge;
	cat time.txt; 
	echo ;
	echo Press enter to quit... && read KEY' "

