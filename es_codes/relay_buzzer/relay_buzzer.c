////relay buzzer------Port P1//////
#include<reg51.h>			
void delay()
{
	int j;
	for(j=0;j<20000;j++);
}
void main()
{ 
	char k;
	while(1)
	{				   		 //Port 1 is for Relay
		P1=0x01;			//On Buzzer
		delay();		//causes delay
		for(k=0;k<3;k++)
		{
			P1=P1<<1;	//Increases intensity with every shift operation
			delay();
		}
	}
}