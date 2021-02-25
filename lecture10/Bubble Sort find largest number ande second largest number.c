#include <stdio.h>
#include <stdlib.h>
void findlargest_two(int a[],int n, int *largest, int *second_largest);

int main()
{
      int a[25]={0},i,j,temp,count,bigest,bigest2,n; 
      printf("How many elements are u going to enter?\n");
      scanf("%d",&count);
 
      printf("Enter %d elements:\n",count);
      for(i=0;i<count;i++)
          scanf("%d",&a[i]);
      
      for(i=1;i<count;i++){
        for(j=0;j<count-i;j++){          
          if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }         
      }                   
      
      printf("Order of Sorted elements:");
      for(i=0;i<count;i++){
          printf("%d ",a[i]);
      }   
     printf("\n\n");
     
     findlargest_two(a, count, &bigest, &bigest2);
     printf("Largest Number is %d\n",bigest);
     printf("Second Largest Number is %d\n",bigest2);
     system("pause"); 
}

void findlargest_two(int a[],int n, int *largest, int *second_largest){
     *largest=a[n-1];
     *second_largest=a[n-2];
     }
     
