#include "RCC.h"

//RCC_TypeDef* RCC_MemoryBase = (RCC_TypeDef*) RCC_BASE;

RCC_TypeDef * RCC_MemoryBase = (RCC_TypeDef*) RCC_BASE;
rcc::rcc()
{
	RCC_Error = RCC_OK; 
}

RCC_ErrorType_t rcc::RCC_GPIOPortInit(RCC_GpioPortName_t GpioPortName)
{
	RCC_ErrorType_t Error_Return = RCC_DEFAULT_ERR;
	switch(GpioPortName)
	{
		case RCC_GPIO_PORT_A:
			RCC_MemoryBase->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
			Error_Return = RCC_OK;
		break;
		case RCC_GPIO_PORT_B:
			RCC_MemoryBase->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;
			Error_Return = RCC_OK;
		break;
		case RCC_GPIO_PORT_C:
			RCC_MemoryBase->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
			Error_Return = RCC_OK;
		break;
		case RCC_GPIO_PORT_D:
			RCC_MemoryBase->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
			Error_Return = RCC_OK;
		break;
		case RCC_GPIO_PORT_E:
			RCC_MemoryBase->AHB1ENR |= RCC_AHB1ENR_GPIOEEN;
			Error_Return = RCC_OK;
		break;
		case RCC_GPIO_PORT_H:
			RCC_MemoryBase->AHB1ENR |= RCC_AHB1ENR_GPIOHEN;
			Error_Return = RCC_OK;
		break;
		default:
			Error_Return = RCC_DEFAULT_ERR;
		break;
	}
	 
	return Error_Return;
}