#! /bin/sh

g++ -Wall -Wextra -Werror *.cpp -o test
./test
rm test
