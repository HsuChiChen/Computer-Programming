#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
      int t;
      time(&t);
      struct tm dt;
      dt=*localtime(&t);
      printf("西元%d年%d月%d日%d點%d分%d秒",dt.tm_year+1900,dt.tm_mon+1,dt.tm_mday,dt.tm_hour,dt.tm_min,dt.tm_sec);
      system("PAUSE");
}
