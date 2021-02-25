#include<stdio.h>
#include<stdlib.h>

typedef struct a{
       int r,i;
       }A;
main()
{
      A a1={20,10},a2={5,6};
      printf("realpart=%d\n\n",a1.r*a2.r-a1.i*a2.i);
      printf("inmaginepart=%d\n",a1.r*a2.i+a2.r*a1.i);
      system("PAUSE");
     
}
