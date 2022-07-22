#!bin/bash

#compile

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# create lib

ar cr liballa.a *.o
