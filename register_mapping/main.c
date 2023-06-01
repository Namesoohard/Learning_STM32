#include "stm32f4xx.h"
int main(void)
{
	/* xxx  &= ~((0x03) << (2 * 6))    目标位清0，其他位保持不变  */
	
	/* Output High Level*/
	*(unsigned int *)(0x40000000 + 0x14) |= (1<<6);
	
	/* Output Low Level*/
	*(unsigned int *)(0x40000000 + 0x14) &= ~(1<<6);
	
	while(1)
	{
		/**/
	}
}
