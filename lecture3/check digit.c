#include<stdio.h>
#include<stdlib.h>

main()
{
      int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,firstsum,secondsum,total;
      printf("ENTER THE FIRST 11 DIGITS(UNIVERSAL PRODUCT CODE):\n");
      scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11);
      firstsum=a1+a3+a5+a7+a9+a11;
      secondsum=a2+a4+a6+a8+a10;
      total=firstsum*3+secondsum;
      printf("firstsum=%d secondsum=%d\n\n",firstsum,secondsum);
      printf("CHECK DIGIT=%d",9-((total-1)%10));
      system("PAUSE");
} 
