#include <stdio.h>
#include <stdlib.h>
#define N 5 

int main()
{
      int a[N]={0},i,j,temp; 
      printf("Enter A Array of 5 Element:\n");
      for(i=0;i<N;i++)
          scanf("%d",&a[i]);
      printf("\n");
      
      for(i=1;i<N;i++){
        for(j=0;j<N-i;j++){          
          if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }         
      }                   

      for(i=0;i<N;i++){
          printf("%d ",a[i]);
      }   
     printf("\n");
     system("pause"); 
}
