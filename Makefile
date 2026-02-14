all: 
	gcc -Wall -Wextra main.c dynstr.c -o main && ./main
