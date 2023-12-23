#ifndef STALLOC
#define STALLOC

#include <stddef.h>

#define HEAP_SIZE 8096

void *stalloc(size_t n);
void stfree(void *ptr);

#endif
