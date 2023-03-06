#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */



char *_memset(void *ptr, int value, unsigned int num) {
    unsigned char *p = ptr;
    unsigned int i;
    for (i = 0; i < num; i++) {
        *p++ = (unsigned char)value;
    }
    return ptr;
}
