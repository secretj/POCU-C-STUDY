#include<stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 1234;
	float num3 = 1.5f;
	float result;
	int result2;

	printf("num1=%d, num2 = %d, num3= %f\n", num1, num2,num3);

	result = num1+num3; /* 컴파일*/
	result2 = num1 < num3 ? num3 : num2; /*삼항연산자*/

	printf("%d+ %f = %d\n%d", num1, num3, result, result2);

	return 0;
}