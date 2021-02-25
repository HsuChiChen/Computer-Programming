#include<stdio.h>
#include<stdlib.h>

main()
{
      int hr, min;
      printf("enter a 24-hour time:\n");
      scanf("%2d%2d",&hr,&min);
      switch(hr) {
      case 0:hr=hr+12; 
             printf("%d:%d AM",hr,min);
             break;
      case 12:printf("%d:%d PM",hr,min);
              break;
      default:if(hr<12)
                 printf("%d:%d AM",hr,min);
              else
                 hr=hr-12; 
                 printf("%d:%d PM",hr,min);
              break;
      }
system("PAUSE");
}
