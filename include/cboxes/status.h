#ifndef STATUS_H_
#define STATUS_H_

typedef enum cs_Status {
    cs_OK,
    cs_INDEX_ERROR,
    cs_OUT_OF_RANGE,
    cs_COLLECTION_IS_EMPTY,
    cs_NULL_REFERENCE_ERROR,
    cs_KEY_ERROR,
} cs_Status;

#endif // STATUS_H_
