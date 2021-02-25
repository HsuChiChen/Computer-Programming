#include <stdio.h>
#include <stdlib.h>
struct a{
      int realpart;
      int imagepart;
      };
void multiply(struct a,struct a,struct a *);

int main(){
     
      struct a s1,s2,s3;
      
      printf("Enter first complex with realpart and imagepart:\n");
      scanf("%d %d",&s1.realpart, &s1.imagepart);
      printf("Enter second complex with realpart and imagepart:\n");
      scanf("%d %d",&s2.realpart, &s2.imagepart);
      
      multiply(s1,s2,&s3);
      printf("Multiplication of 2 Complex is %d+%di\n",s3.realpart, s3.imagepart);
      system("pause");
}

void multiply(struct a b,struct a c,struct a *d){
     d->realpart=c.realpart * b.realpart - c.imagepart * b.imagepart;
     d->imagepart=c.realpart * b.imagepart + c.imagepart * b.realpart;
}

     
