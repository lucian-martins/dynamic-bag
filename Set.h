#ifndef SET_SET_H
#define SET_SET_H

typedef struct Set {
    unsigned count;
} Set;

static const size_t sizeOfSet = sizeof(Set);


void *addElement(void *set, const void *element);

void *findElement(const void *set, const void *element);

void *removeElement(void *set, const void *element);

bool containsElement(const void *set, const void *element);

#endif //SET_SET_H
