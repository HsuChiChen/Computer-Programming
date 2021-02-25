#include<stdio.h>
#include<stdlib.h>

int search(const int a[],int key){
    int i,*p;
    for(p=a;*p<&a[10];p++){
       if(*p==key){
          return 1;
       }
    }
    return 0;



}
int main()
{
      int a[10]={52,71,31,62,80,41,2,4,6,99},key; 
      printf("Guess a number between 1-100:\n");
      scanf("%d",&key);
      
      if(search(a,key)){
         printf("Guess Right, genius\n");
      }
      else{
           printf("Guess Wrong, idiot\n");
      }
     system("pause"); 
}
