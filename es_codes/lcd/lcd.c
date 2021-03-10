								  // CONTROL PORT 2
//DATA PORT 0
#include<reg51.h>  // library for 8051 micro controller
//input  port3
sbit RS	=	P2 ^ 0;		// declares single bit pin P2.0 with RS
sbit E	=	P2 ^ 1;	   // declares single bit pin P2.1 with E
void instwrt(void)
{
	RS=0;		// register select pin set to 0 for sending instructions
	E=1;	    // enable is set when moved from high to low
	E=0;	   
}
void datawrt(void)
{
	RS=1;		 // register select pin set to 1 for sending data
	E=1;
	E=0;
}
void delay(void)
{
	unsigned int i;
	for(i=0;i<=30000;i++)
		{}
}
void main(void)
{
while(1)
{	
	P0=0x38;   //0x38 = 2 lines
	instwrt();
	delay();
	P0=0x0E;   // display on 
	instwrt();
	delay();
	P0=0x01;   // clear display screen 
	instwrt();
	delay();
	P0=0x06;   // increement cursor
	instwrt();
	delay();
	P0=0x83;   // line 1 position 3
	instwrt();
	delay();
	P0='A';		  // sending data
	datawrt();
	delay();
	P0='D';
	datawrt();
	delay();
	P0='V';
	datawrt();
	delay();
	P0='A';
	datawrt();
	delay();
	P0='N';
	datawrt();
	delay();
	P0='C';
	datawrt();
	delay();
        P0='E';
	datawrt();
	delay();
	/*shift();
	delay();*/
	P0=0xC3;			 // line 2 position 3
	instwrt();
	delay();
	P0='T';
	datawrt();
	delay();
	P0='E';
	datawrt();
	delay();
	P0='C';
	datawrt();
	delay();
	P0='H';
	datawrt();
	delay();
	P0='N';
	datawrt();
	delay();
        P0='O';
	datawrt();
	delay();
	P0='L';
	datawrt();
	delay();
        P0='O';
	datawrt();
	delay();
	P0='G';
	datawrt();
	delay();
        P0='Y';
	datawrt();
	delay();
		}
}
