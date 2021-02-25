#include<stdio.h>
#include<stdlib.h>
int powerf(int n1,int n2);

int main(){
    int base,power,result;
    printf("Enter base number:\n");
    scanf("%d",&base);
    printf("Enter power number(integer):\n");
    scanf("%d",&power);
    result=powerf(base,power);
    printf("%d^%d=%d\n",base,power,result);
    system("pause");
}

int powerf(int base ,int power){
    if(power==0)
       return 1;
    else
       return base*powerf(base,power-1);
}
