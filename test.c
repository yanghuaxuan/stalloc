#include "stalloc.h"

#include <stdio.h>
#include <assert.h>

int main(void) {
  int *t1 = stalloc(4);
  *t1 = 1;

  assert(*t1 == 1);

  stfree(t1);

  char *t2 = stalloc(HEAP_SIZE);
  assert(t2 == NULL);
}
