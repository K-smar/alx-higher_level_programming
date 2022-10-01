#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -c *.c
ar rc liball.a *.o
