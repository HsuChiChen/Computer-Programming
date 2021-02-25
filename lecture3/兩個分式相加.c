#include<stdio.h>
#include<stdlib.h>

main()
{
    int num1, num2, num3, num4;
    printf("ENTER TWO FRACTION:\n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    printf("formula=%d/%d+%d/%d\n",num1,num2,num3,num4);
    printf("ANSWER=%f",num1/num2+num3/num4);
    system("PAUSE");
}
