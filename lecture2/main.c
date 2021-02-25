#include<stdio.h>
#include<stdlib.h>
ID();

int main()
{
    int computer_score=85, clanguage_score=69, calculus_score=75, accounting_score=66, economics_score=91, total=0;
    double average;
    total=computer_score+clanguage_score+calculus_score+accounting_score+economics_score;
    average=total/5.0;
    
    printf("<<成績計算>>\n");
    ID();
    printf("================\n");
    printf("計概成績:%d\n",computer_score);
    printf("C語言成績:%d\n",clanguage_score); 
    printf("微積分成績:%d\n",calculus_score); 
    printf("會計學成績:%d\n",accounting_score); 
    printf("經濟學成績:%d\n",economics_score);  
    printf("================\n");
    printf("五科總合為:%d\n",total);  
    printf("五科平均為:%2f\n",average);
    
    system("PAUSE");
    return 0;
}  
