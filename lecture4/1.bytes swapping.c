#include<stdio.h>
#include<stdlib.h>

main()
{
      unsigned short i,j,k;
      printf("Input Hexhadecimal Characters=");
      scanf("%hx",&i);
      j=i>>8;
      k=i<<8;
      i=k+j;
      printf("Reslut of Bytes Swapping=%hx",i);
      system("PAUSE");
}
