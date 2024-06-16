#include <stdlib.h>
#include <assert.h>
#include "New.h"

void *new(const void *type, ...) {
    const size_t size = *(const size_t *) type;
    void *pointer = calloc(1, size);
    assert(pointer);
    return pointer;
}

void delete(void *_item) {
    free(_item);
}
