#include<stdio.h>
#include<stdlib.h>

int euclideanspace_inner_product(int a[],int b[],int N){
    int i,ans=0,*p1,*p2;
    p2=b;
    for(p1=a;p1<a+N;p1++){
       ans+=(*p1)*(*p2);
       p2+=1;
    }
    return ans;
}

int main()
{
      int a[25]={0},b[25]={0},N,N2,i; 
      printf("How many elements are u going to enter in vector a?\n");
      scanf("%d",&N);
 
      printf("Enter %d elements in vector a:\n",N);
      for(i=0;i<N;i++)
          scanf("%d",&a[i]);
      
      printf("How many elements are u going to enter in vector b?\n");
      scanf("%d",&N2);
 
      printf("Enter %d elements in vector b:\n",N2);
      for(i=0;i<N2;i++)
          scanf("%d",&b[i]);
          
      if(N!=N2){
        printf("Invalid Input Because 2 Vector Have Different Dimension\n");
      }
      else{
          printf("Inner Product In Euclideanspace is %d \n",euclideanspace_inner_product(a,b,N));
          if(euclideanspace_inner_product(a,b,N)==0){
            printf("vector a and vector b is an orthogonal vector\n");                                          
          }
          else{
              printf("vector a and vector b is not an orthogonal vector\n");    
          }
      }
      system("pause");
}
