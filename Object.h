#ifndef SET_OBJECT_H
#define SET_OBJECT_H

typedef struct Object {
    unsigned count;
    struct Set *in;
} Object;

bool differs(const void *a, const void *b);

#endif //SET_OBJECT_H
