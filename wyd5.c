#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
  float a,b;
  printf("������һ��С�� 1000������:");
  scanf("%f",&a);
  while(a>=1000&&a<0) 
  {printf ("���ٴ�����:"); 
  scanf("%f",&a); }
  b=sqrt(a);
  printf("ƽ����������������:%7.0f\n",b);
	return 0;
}
