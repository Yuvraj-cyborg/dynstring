#include<stdio.h>
#include "dynstr.h"

int main(){
  String str;
  string_init(&str);
  char c = 'a';
  const char* text = "Hello World";
  string_append_char(&str,c);
  printf("%s\n",str.buff);
  string_free(&str);
  string_append_cstr(&str,text);
  printf("%s\n",str.buff);
};

 

