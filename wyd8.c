#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int score;
	char grade;
    printf("请输入学生成绩:");
    scanf("%d",&score);
    switch(score/10)
    {case 10:
     case 9: grade='A';break;
     case 8: grade='B';break;
     case 7: grade='C';break;
     case 6: grade='D';break;
     case 5:
     case 4:
     case 3:
     case 2:
     case 1:
     case 0: grade='E';}
     printf("等级是:%c",grade);
     return 0;
}
