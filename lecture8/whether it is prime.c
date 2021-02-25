#include<stdio.h>
#include<stdlib.h>
int isPrime(int,int);

int main(){
    int num,prime;
    printf("Enter a positive number:\n");
    scanf("%d",&num);
    prime = isPrime(num,num/2);

   if(prime==1)
        printf("%d is a prime number\n",num);
   else
      printf("%d is not a prime number\n",num);

   system("pause");
}

int isPrime(int num,int i){
    if(i==1){
        return 1; //2 is prime
    }
    else{
       if(num%i==0)
         return 0;
       else
         isPrime(num,i-1);
       }
}
