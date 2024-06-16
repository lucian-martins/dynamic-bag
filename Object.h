#ifndef SET_OBJECT_H
#define SET_OBJECT_H

#include <corecrt.h>

typedef struct Object {
    unsigned count;
    struct Set *in;
} Object;

static const size_t sizeOfObject = sizeof(Object);


bool differs(const void *a, const void *b);

#endif //SET_OBJECT_H
