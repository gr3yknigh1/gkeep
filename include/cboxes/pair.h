#ifndef CBOXES_PAIR_H
#define CBOXES_PAIR_H

#include "cboxes/string.h"
#include "cboxes/type.h"

typedef struct cs_Pair {
    cstr key;
    void *value;
    const cs_Type *type;
} cs_Pair;

cs_Pair *cs_Pair_New(cstr key, void *value, const cs_Type *type);

void *cs_Pair_Copy(void *dest, const void *src, size_t count);
void cs_Pair_Free(void *ptr);

DEFINE_CS_TYPE(CS_TYPE_PAIR);

#endif // CBOXES_PAIR_H
