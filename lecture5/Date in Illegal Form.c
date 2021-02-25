#include<stdio.h>
#include<stdlib.h>

main()
{
      int month,day,year;
      printf("Enter date(mm/dd/yy):\n");
      scanf("%2d%2d%2d",&month,&day,&year);
      
      printf("Date this %2d",day);
      switch(day){
      case 1:printf("st"); break;
      case 31:printf("st"); break;
      case 2:printf("nd"); break;
      case 3:printf("rd"); break;
      default:printf("th"); break;
      }
      
      printf(" day of ");
      switch(month){
      case 1:printf("January"); break;
      case 2:printf("February"); break;
      case 3:printf("March"); break;
      case 4:printf("April"); break;
      case 5:printf("May"); break;
      case 6:printf("June"); break;
      case 7:printf("July"); break;
      case 8:printf("August"); break;
      case 9:printf("September"); break;
      case 10:printf("October"); break;
      case 11:printf("November"); break;
      case 12:printf("December"); break;
      }
      printf(",20%2d.",year);
      system("PAUSE");
}
