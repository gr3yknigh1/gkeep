#include "cboxes/type.h"

cs_Type *cs_Type_New(size_t size, bool isReference, cs_CopyFunc copy,
                     cs_FreeFunc free) {
    cs_Type *type = malloc(sizeof(cs_Type));
    *type = (cs_Type){
        .size = size,
        .isReference = isReference,
        .copy = copy,
        .free = free,
    };
    return type;
}

cs_Type *cs_Type_NewC(cs_Type *other) {
    return cs_Type_New(other->size, other->isReference, other->copy,
                       other->free);
}

void cs_Type_Free(void *ptr) { free(ptr); }
