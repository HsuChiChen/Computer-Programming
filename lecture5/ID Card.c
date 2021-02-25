#include<stdio.h>
#include<stdlib.h>
main(){
	char ch;
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11;
    printf("Enter ID Card Number:\n");
    scanf("%c %1d%1d%1d%1d%1d%1d%1d%1d%1d",&ch,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
    switch(ch){
        case'A':n1=1;n2=0;break;
        case'B':n1=1;n2=1;break;
        case'C':n1=1;n2=2;break;
        case'D':n1=1;n2=3;break;
        case'E':n1=1;n2=4;break;
        case'F':n1=1;n2=5;break;
        case'G':n1=1;n2=6;break;
        case'H':n1=1;n2=7;break;
        case'I':n1=3;n2=4;break;
        case'J':n1=1;n2=8;break;
        case'K':n1=1;n2=9;break;
        case'L':n1=2;n2=0;break;
        case'M':n1=2;n2=1;break;
        case'N':n1=2;n2=2;break;
        case'O':n1=3;n2=5;break;
        case'P':n1=2;n2=3;break;
        case'Q':n1=2;n2=4;break;
        case'R':n1=2;n2=5;break;
        case'S':n1=2;n2=6;break;
        case'T':n1=2;n2=7;break;
        case'U':n1=2;n2=8;break;
        case'V':n1=2;n2=9;break;
        case'W':n1=3;n2=2;break;
        case'X':n1=3;n2=0;break;
        case'Y':n1=3;n2=1;break;
        case'Z':n1=3;n2=3;break;       
    }
    int c;
    c=n1*1+n2*9+n3*8+n4*7+n5*6+n6*5+n7*4+n8*3+n9*2+n10*1+n11*1;

    if(c%10==0){
        printf("Valid ID Number\n");
        }
    else{
        printf("Invalid ID Number\n");
        }
    printf("Because %d is divisable by 10.",c);
    system("pause"); 
} 

