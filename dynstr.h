#ifndef DYNSTR_H
#define DYNSTR_H

#include<stddef.h>

typedef struct string{
  size_t len;
  char* buff;
  size_t capacity;
}String;

void string_init(String* str);

void string_append_char(String* str,char c);

void string_append_cstr(String* str,const char* text);

void string_free(String* str);

#endif
