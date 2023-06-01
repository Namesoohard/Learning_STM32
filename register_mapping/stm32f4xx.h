/*register mapping*/

typedef unsigned int uint32_t;
typedef unsigned short int uint16_t;

#define AHPB1BASE (0x40000000)

typedef struct
{
	uint32_t MODER;
	uint32_t ADDER;
	uint16_t CANH;
	uint16_t CANL;
} GPIO_TypeDef;

#define GPIOA_BASE *(GPIO_TypeDef *)(0x40001000)
#define GPIOB_BASE *(GPIO_TypeDef *)(0x40002000)



