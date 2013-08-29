#include <cstring>
#include "common.h"

void val_array_set_i(value arg1, int arg2, value inVal)
{
	if (!val_is_array(arg1))
	{
		arg1 = val_field(arg1, val_id("__a"));
	}
	val_array_ptr(arg1)[arg2] = inVal;
}


buffer alloc_buffer_len(int inLen)
{
	char *s=alloc_private(inLen+1);
	memset(s,' ',inLen);
	s[inLen] = 0;
	buffer b = alloc_buffer(s);
	return b;
}


char *buffer_data(buffer inBuffer)
{
	return (char *)val_string(val_field((value)inBuffer, val_id("b")));
}
