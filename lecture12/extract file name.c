#include<stdio.h>
#include<stdlib.h>
void extract_extension(char *a,char *b);

int main(){
    printf("Enter a file name:\n");
    char a[30],b[30];
    gets(a);
    extract_extension(a,b);
    printf("Extension=%s\n",b);
    system("pause");
}

void extract_extension(char *a,char *b){
    char *p=a;
    while(*p!='.'){
        p++;
    }
    while(*b++=*p++);
}

