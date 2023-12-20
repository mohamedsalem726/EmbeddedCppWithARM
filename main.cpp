#include "RCC.h"

rcc RCC_object;

RCC_GpioPortName_t UsedPort = RCC_GPIO_PORT_A;
int main()
{
	
	RCC_object.RCC_GPIOPortInit(UsedPort);
	
	while(1);
	
	return 0;
}