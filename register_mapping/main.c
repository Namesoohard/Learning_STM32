#include "stm32f4xx.h"
int main(void)
{
	/* xxx  &= ~((0x03) << (2 * 6))    Ŀ��λ��0������λ���ֲ���  */
	
	/* Output High Level*/
	*(unsigned int *)(0x40000000 + 0x14) |= (1<<6);
	
	/* Output Low Level*/
	*(unsigned int *)(0x40000000 + 0x14) &= ~(1<<6);
	
	while(1)
	{
		/**/
	}
}
