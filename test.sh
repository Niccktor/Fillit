#!/bin/sh

echo "compiling"
make 
chmod +x fillit

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

	echo "cat valid_8"
	cat ./test_files/correct/valid_8
	echo "Test valid_8"
	./fillit test_files/correct/valid_8
	read
	clear

	echo "cat valid_9"
	cat ./test_files/correct/valid_9
	echo "Test valid_9"
	./fillit test_files/correct/valid_9
	read
	clear

	echo "cat valid_10"
	cat ./test_files/correct/valid_10
	echo "Test valid_10"
	./fillit test_files/correct/valid_10
	read
	clear

	echo "cat valid_11"
	cat ./test_files/correct/valid_11
	echo "Test valid_11"
	./fillit test_files/correct/valid_11
	read
	clear


	echo "cat valid_12"
	cat ./test_files/correct/valid_12
	echo "Test valid_12"
	./fillit test_files/correct/valid_12
	read
	clear

	echo "cat valid_13"
	cat ./test_files/correct/valid_13
	echo "Test valid_13"
	./fillit test_files/correct/valid_13
	read
	clear

	echo "cat valid_14"
	cat ./test_files/correct/valid_14
	echo "Test valid_14"
	./fillit test_files/correct/valid_14
	read
	clear

	echo "cat valid_15"
	cat ./test_files/correct/valid_15
	echo "Test valid_15"
	./fillit test_files/correct/valid_15
	read
	clear

	echo "cat valid_16"
	cat ./test_files/correct/valid_16
	echo "Test valid_16"
	./fillit test_files/correct/valid_16
	read
	clear

	echo "cat valid_17"
	cat ./test_files/correct/valid_17
	echo "Test valid_17"
	./fillit test_files/correct/valid_17
	read
	clear

	echo "cat valid_18"
	cat ./test_files/correct/valid_18
	echo "Test valid_18"
	./fillit test_files/correct/valid_18
	read
	clear

	echo "cat valid_19"
	cat ./test_files/correct/valid_19
	echo "Test valid_19"
	./fillit test_files/correct/valid_19
	read
	clear

	echo "cat valid_20"
	cat ./test_files/correct/valid_20
	echo "Test valid_20"
	./fillit test_files/correct/valid_20
	read
	clear

	echo "cat valid_21"
	cat ./test_files/correct/valid_21
	echo "Test valid_21"
	./fillit test_files/correct/valid_21
	read
	clear

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
	read
	clear

	echo "cat error_8"
	cat ./test_files/error/error_8
	echo "Test error_8"
	./fillit test_files/error/error_8
	read
	clear


	echo "cat error_9"
	cat ./test_files/error/error_9
	echo "Test error_9"
	./fillit test_files/error/error_9
	read
	clear


	echo "cat error_10"
	cat ./test_files/error/error_10
	echo "Test error_10"
	./fillit test_files/error/error_10
	read
	clear


	echo "cat error_11"
	cat ./test_files/error/error_11
	echo "Test error_11"
	./fillit test_files/error/error_11
	read
	clear

	echo "cat error_12"
	cat ./test_files/error/error_12
	echo "Test error_12"
	./fillit test_files/error/error_12
	read
	clear

	echo "cat error_13"
	cat ./test_files/error/error_13
	echo "Test error_13"
	./fillit test_files/error/error_13
	read
	clear

	echo "cat error_14"
	cat ./test_files/error/error_14
	echo "Test error_14"
	./fillit test_files/error/error_14
	read
	clear

	echo "cat error_15"
	cat ./test_files/error/error_15
	echo "Test error_16"
	./fillit test_files/error/error_16
	read
	clear

	echo "cat error_17"
	cat ./test_files/error/error_17
	echo "Test error_17"
	./fillit test_files/error/error_17
	read
	clear

	echo "cat error_18"
	cat ./test_files/error/error_18
	echo "Test error_18"
	./fillit test_files/error/error_18
	read
	clear


	echo "cat error_19"
	cat ./test_files/error/error_19
	echo "Test error_19"
	./fillit test_files/error/error_19
	read
	clear

	echo "cat error_20"
	cat ./test_files/error/error_20
	echo "Test error_20"
	./fillit test_files/error/error_20
	read
	clear

	echo "cat error_21"
	cat ./test_files/error/error_21
	echo "Test error_21"
	./fillit test_files/error/error_21
	read
	clear

	echo "cat error_22"
	cat ./test_files/error/error_22
	echo "Test error_22"
	./fillit test_files/error/error_22
	read
	clear

	echo "cat error_23"
	cat ./test_files/error/error_23
	echo "Test error_23"
	./fillit test_files/error/error_23
	read
	clear

	echo "cat error_24"
	cat ./test_files/error/error_24
	echo "Test error_24"
	./fillit test_files/error/error_24
	read
	clear

	echo "cat error_25"
	cat ./test_files/error/error_25
	echo "Test error_25"
	./fillit test_files/error/error_25
	read
	clear

fi
