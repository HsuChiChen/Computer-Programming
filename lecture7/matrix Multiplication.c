#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[2][3],b[3][4],c[2][4],i,j,j2,sum=0;
	printf("Enter elements of 2*3 matrix A:\n");
    for(i=0;i<2;i++){
       for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
       }
	}
    
    printf("\n");
    printf("Enter elements of 3*4 matrix B:\n");
    for(i=0;i<3;i++){
       for(j=0;j<4;j++){
        scanf("%d",&b[i][j]);
       }
	}
    
    for(i=0;i<2;i++){
        for(j2=0;j2<4;j2++){
            for(j=0;j<3;j++){
              sum=sum+a[i][j]*b[j][j2];
            }
            c[i][j2]=sum;
            sum=0; 
        }
	}
    
    printf("\n");
    printf("Product of the matrices:\n");
    for(i=0;i<2;i++){
       for(j=0;j<4;j++){
        printf("%d ",c[i][j]);
       }
	printf("\n");
	}
    
    system("pause"); 
}
