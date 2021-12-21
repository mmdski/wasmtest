#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
float get_ptr_value(float *ptr)
{
    return *ptr;
}

EMSCRIPTEN_KEEPALIVE
float *get_ptr(float *ptr)
{
    return ptr;
}

EMSCRIPTEN_KEEPALIVE
void copy_array(int size, float *from, float *to)
{
    for (int i = 0; i < size; i++)
    {
        to[i] = from[i];
    }
}
