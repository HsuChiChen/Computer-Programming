#include<stdio.h>
#include<stdlib.h>
void *compose(char *c,const char *d,const char *a,const char *b);

int main(){
    char c[30],d[30];
    const char *a="http://www.",*b="/index.html";
    printf("Enter an Internet Domain:\n");
    gets(d);
    compose(c,d,a,b);
    printf("address=%s\n",c);
    system("pause");
}

void *compose(char *c,const char *d,const char *a,const char *b){
    char *p=c;
    while(*a){
       *p++=*a++;
    }
    while(*d){
       *p++=*d++;
    }
    while(*p++=*b++);
}
