/*
1. 
첫번째 값을 입력해주세요 >> 입력 1
두번째 값을 입력해주세요 >> 입력 2

2값을 받아서 덧셈 곱셈 나눗셈 뺄셈
입력1 + 입력2 = 결과값
입력1 * 입력2 = 결과값
입력1 / 입력2 = 결과값
입력1 - 입력2 = 결과값
*/






#include <iostream>

void main()
{
	int a, b;
	printf("첫번째 값을 입력해주세요 >>");
	scanf_s("%d", &a);
	printf("두번째 값을 입력해주세요 >>");
	scanf_s("%d", &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d / %d = %d\n", a, b, a / b);



