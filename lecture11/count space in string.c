#include<stdio.h>
#include<stdlib.h>

int main(){
     char c[100];
     int i,count;
     printf("Enter a Character String:\n");
     for(i=0;;i++){
        scanf("%c",&c[i]);
        if(c[i]=='\n'){
          break;
        }
        else{
           if(c[i]==' '){
           count++;
           }
        }
     }
     printf("The String has %d Space\n",count);
     system("pause"); 
}
