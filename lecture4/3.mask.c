#include<stdio.h>
#include<stdlib.h>

main()
{
      unsigned short i,mask1,mask2;
      printf("Input Hexhadecimal Characters=\n");
      scanf("%hx",&i);
      mask1=0xff8f;
      i=i&mask1;
      mask2=0x0050;
      i=i|mask2;
      printf("Assigned Number=%hx\n",i);
      system("PAUSE");
}
