#include<stdio.h>
#include<stdlib.h>
int countspace(char *s);

int main(){
	char s[40];
	printf("Enter a Sentence:\n");
	gets(s);
	printf("Count Of Space=%d\n",countspace(s));
	system("pause");
}

int countspace(char *s){
	int count=0;
	char *p=s;
	for(;*p;p++){
		if(*p ==' '){
	       count++;
		}
    }
    return count;
}
