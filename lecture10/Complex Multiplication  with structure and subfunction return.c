#include <stdio.h>
#include <stdlib.h>
struct a{
      int realpart;
      int imagepart;
      };
struct a multiply(struct a,struct a);

int main(){
     
      struct a s1,s2,s3;
      
      printf("Enter first complex with realpart and imagepart:\n");
      scanf("%d %d",&s1.realpart, &s1.imagepart);
      printf("Enter second complex with realpart and imagepart:\n");
      scanf("%d %d",&s2.realpart, &s2.imagepart);
      
      s3=multiply(s1,s2);
      printf("Multiplication of 2 Complex is %d+%di\n",s3.realpart,s3.imagepart);
      system("pause");
}

struct a multiply(struct a b,struct a c){
     struct a sum;
     sum.realpart=c.realpart * b.realpart - c.imagepart * b.imagepart;
     sum.imagepart=c.realpart * b.imagepart + c.imagepart * b.realpart;
     return sum;
}

     
