#include "stalloc.h"

#include <stddef.h>

static char heap[HEAP_SIZE];
static char *allocp = heap;

void *stalloc(size_t n) {
  if (heap + HEAP_SIZE - allocp <= n) return NULL;

  allocp += n;

  return allocp - n; 
}

void stfree(void *ptr) {
  if (ptr == NULL) return;

  if ((char *)ptr >= heap && (char*)ptr < heap + HEAP_SIZE) {
    allocp = ptr;
  }
}
