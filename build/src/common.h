#ifndef HXFCGI_COMMON
#define HXFCGI_COMMON

#include <neko.h>

void val_array_set_i(value arg1, int arg2, value inVal);
buffer alloc_buffer_len(int inLen);
char *buffer_data(buffer inBuffer);

#endif