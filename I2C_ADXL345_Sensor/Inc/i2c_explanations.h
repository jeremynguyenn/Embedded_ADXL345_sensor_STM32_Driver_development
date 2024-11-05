
#ifndef I2C_HP_
#define I2C_HP_

#include "stm32f429xx.h"

void i2c1_init(void);
void i2c1_ByteRead(char slave_address, char memory_address, char *ptrToVariableWhereWeSaveData);
void i2c1_BurstRead(char slave_address, char memory_address_read_from, int number_bytes_to_read, char *data);
void i2c1_BurstWrite(char slave_address, char memory_address, int number_bytes_to_write, char *data);

#endif /* I2C_HP_ */
