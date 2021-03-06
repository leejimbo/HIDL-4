#define LOG_TAG     "Sample#Lib"
#include <log/log.h>
#include <string.h>
#include "sample.h"

int writeMessage(uint8_t *data, int32_t size)
{
    int i;
    uint8_t tmp = 0;
    for(i = 0; i < size; i++) {
        tmp += data[i];
        tmp &= 0xff;
    }

    return tmp;
}
