#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
      int t;
      time(&t);
      struct tm dt;
      dt=*localtime(&t);
      printf("�褸%d�~%d��%d��%d�I%d��%d��",dt.tm_year+1900,dt.tm_mon+1,dt.tm_mday,dt.tm_hour,dt.tm_min,dt.tm_sec);
      system("PAUSE");
}
