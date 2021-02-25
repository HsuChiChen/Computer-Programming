#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e,f,i;
    printf("ENTER TWO FRACTION:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a*d+b*c;
    f=b*d;
    for(i=e;i>1;i--){
    	if(e%i==0&&f%i==0){ 
		e/=i;
        f/=i;
        break;
        } 
		   
    }
    
    printf("formula=%d/%d+%d/%d\n",a,b,c,d);
    printf("ANSWER=%d/%d",e,f);
    system("pause");
}
