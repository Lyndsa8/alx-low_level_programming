#!/bin/bash
gcc -wall -pedantic -Werrow -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
