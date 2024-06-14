#include <assert.h>
#include <stdlib.h>
#include "Set.h"
#include "New.h"
#include "Object.h"

void *new(const void *type, ...) {
    const size_t size = *(const size_t *) type;
    void *pointer = calloc(1, size);
    assert(pointer);
    return pointer;
}

void delete(void *_item) {
    free(_item);
}

void *addElement(void *_set, const void *_element) {
    Set *set = _set;
    Object *element = (void *) _element;
    assert(set);
    assert(element);
    if(!element->in) {
        element->in = set;
    } else {
        assert(element->in == set);
    }
    ++element->count, ++set->count;
    return element;
}

void *findElement(const void *_set, const void *_element) {
    Object *element = _element;
    assert(_set);
    assert(element);
    return element->in == _set ? (void *) element : 0;
}

bool containsElement(const void *_set, const void *_element) {
    return findElement(_set, _element) != 0;
}

void *removeElement(void *_set, const void *_element) {
    Set *set = _set;
    Object *element = findElement(set, _element);
    if (element) {
        if (--element->count == 0) {
            element->in = 0;
        }
        --set->count;
    }
    return element;
}

bool differs(const void *a, const void *b) {
    return a != b;
}

unsigned countElements(const void *_set) {
    const Set *set = _set;
    assert(set);
    return set->count;
}