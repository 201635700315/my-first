#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,y;
	printf("������һ������:");
	scanf("%d",&x);
	if(x<1)
	{y=x;}
	 if(x>=10)
	 {y=3*x-11;}
	else
	{y=2*x-1;}
	printf("��������:%d\n",y);
	return 0;
}
