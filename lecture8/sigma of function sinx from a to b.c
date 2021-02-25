#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double sum(double(*f)(double),double a,double b)
{ double i;
  double total=0;
  for(i=a;i<=b;i++){
  	 total+=(*f)(i);
  };
  return total;
}

int main(){
    int x,y;
	printf("Enter Lower Limit:\n");
	scanf("%d",&x);
	printf("Enter Upper Limit:\n");
	scanf("%d",&y);
	printf("sigma of function sinx from %d to %d =%f\n",x,y,sum(sin,x,y));
	system("PAUSE");	
}

