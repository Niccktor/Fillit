#!/bin/sh

echo "compiling"
make 
chmod +x fillit

echo $1
echo $#
if [ $# -eq 0 ]; then
	echo "Saisir 1, 2 ou 3."
	read $1
fi
clear
if [ "$1" = "1" -o "$1" = "3" ] ; then
	echo "cat valid_0"
	cat ./test_files/correct/valid_0
	echo "Test valid_0"
	./fillit test_files/correct/valid_0
	read
	clear

	echo "cat valid_1"
	cat ./test_files/correct/valid_1
	echo "Test valid_1"
	./fillit test_files/correct/valid_1
	read
	clear

	echo "cat valid_2"
	cat ./test_files/correct/valid_2
	echo "Test valid_2"
	./fillit test_files/correct/valid_2
	read
	clear

	echo "cat valid_3"
	cat ./test_files/correct/valid_3
	echo "Test valid_3"
	./fillit test_files/correct/valid_3
	read
	clear

	echo "cat valid_4"
	cat ./test_files/correct/valid_4
	echo "Test valid_4"
	./fillit test_files/correct/valid_4
	read
	clear

	echo "cat valid_5"
	cat ./test_files/correct/valid_5
	echo "Test valid_5"
	./fillit test_files/correct/valid_5
	read
	clear

	echo "cat valid_6"
	cat ./test_files/correct/valid_6
	echo "Test valid_6"
	./fillit test_files/correct/valid_6
	read
	clear

	echo "cat valid_7"
	cat ./test_files/correct/valid_7
	echo "Test valid_7"
	./fillit test_files/correct/valid_7
	read
	clear

	echo "cat valid_7"
	cat ./test_files/correct/valid_7
	echo "Test valid_7"
	./fillit test_files/correct/valid_7
fi
clear
if [ "$1" = "2" -o "$1" = "3" ] ; then
	read -p "Test wrong files"
	echo "cat error_0"
	cat ./test_files/error/error_0
	echo "Test error_0"
	./fillit test_files/error/error_0
	read
	clear

	echo "cat error_1"
	cat ./test_files/error/error_1
	echo "Test error_1"
	./fillit test_files/error/error_1
	read
	clear

	echo "cat error_2"
	cat ./test_files/error/error_2
	echo "Test error_2"
	./fillit test_files/error/error_2
	read
	clear

	echo "cat error_3"
	cat ./test_files/error/error_3
	echo "Test error_3"
	./fillit test_files/error/error_3
	read
	clear

	echo "cat error_4"
	cat ./test_files/error/error_4
	echo "Test error_4"
	./fillit test_files/error/error_4
	read
	clear

	echo "cat error_5"
	cat ./test_files/error/error_5
	echo "Test error_5"
	./fillit test_files/error/error_5
	read
	clear
	echo "cat error_6"
	cat ./test_files/error/error_6
	echo "Test error_6"
	./fillit test_files/error/error_6
	read
	clear

	echo "cat error_7"
	cat ./test_files/error/error_7
	echo "Test error_7"
	./fillit test_files/error/error_7
fi
