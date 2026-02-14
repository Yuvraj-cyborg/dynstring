#include<stdlib.h>
#include"dynstr.h"

void string_init(String* str) {
  str->len=0;
  str->buff=NULL;
  str->capacity=0;
}

void string_append_char(String* str, char c){
  if (str->capacity==0){
    str->capacity=8;
    str->buff = malloc(str->capacity+1);   
  }
  else if(str->len==str->capacity){
    str->capacity = str->capacity*2;
    str->buff = realloc(str->buff, str->capacity + 1);
   }
  str->buff[str->len] = c;
  str->len++;
  str->buff[str->len] = '\0';
}


void string_append_cstr(String* str,const char* text){
  while(*text!='\0') {
    string_append_char(str,*text);
    text++;
  }
};

void string_free(String* str){
  free(str->buff);
  str->buff = NULL;
  str->len = 0;
  str->capacity = 0;
};
