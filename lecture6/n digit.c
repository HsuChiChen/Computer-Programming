#include<stdio.h>
#include<stdlib.h>

int main()
{
      int n,digits=1;
      printf("Enter a Number:\n");
      scanf("%d",&n);
      while(n>=10){
                   n/=10;
                   digits++;
                   }
      printf("It is in %d digit.",digits);
      system("PAUSE");
}
