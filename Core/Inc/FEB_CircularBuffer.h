#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

typedef struct circBuffer circBuffer;

void buf_init(circBuffer *cb);

void buf_write(circBuffer *cb, const char *item);
void buf_read(circBuffer *cb);

