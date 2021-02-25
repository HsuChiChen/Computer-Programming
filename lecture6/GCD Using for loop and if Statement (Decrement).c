#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n1,n2,i,gcd;
    printf("Enter two integers:\n");
    scanf("%d %d",&n1,&n2);
    n1=(n1>0)?n1:-n1;
    n2=(n2>0)?n2:-n2;
    
    for(i=n1;i>=1;i--) // Checks if i is factor of both integers
    {
        if(n1%i==0&&n2%i==0){ 
        gcd=i;
        break;
        }    
    }
    printf("G.C.D of %d and %d is %d\n",n1,n2,gcd);
    system("PAUSE");
}
