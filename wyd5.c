#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  float a,b;
  printf("请输入一个小于 1000的正数:");
  scanf("%f",&a);
  while(a>=1000&&a<0) 
  {printf ("请再次输入:"); 
  scanf("%f",&a); }
  b=sqrt(a);
  printf("平方根的整数部分是:%7.0f\n",b);
	return 0;
}
