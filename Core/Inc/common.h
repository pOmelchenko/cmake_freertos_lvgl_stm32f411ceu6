#ifndef __INC_COMMON_H__
#define __INC_COMMON_H__

static uint16_t value = 1000;
static uint32_t currentTime;
static uint32_t previousTime;

typedef struct
{
  float temp;
  float humid;
} AHT20_Data_t;

#endif /* __INC_COMMON_H__ */
