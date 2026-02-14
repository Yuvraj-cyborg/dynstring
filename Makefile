all: 
	clang -Wall -Wextra main.c dynstr.c -o main && ./main
