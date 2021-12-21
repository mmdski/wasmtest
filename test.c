#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
void copy_float(int size, const float *from, float *to)
{
    for (int i = 0; i < size; i++)
    {
        to[i] = from[i];
    }
}
