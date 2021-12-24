#include<stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 1234;
	int result;
	int result2;

	printf("num1=%d, num2 = %d\n", num1, num2);

	result = num1+ num2; /* 컴파일*/
	result2 = num1 < num2 ? num1 : num2; /*삼항연산자*/

	printf("%d+ %d = %d\n%d", num1, num2, result, result2);

	return 0;
}