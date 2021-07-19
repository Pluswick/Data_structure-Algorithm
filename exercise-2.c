//세 정수 값을 입력하고 중앙값을 구하는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int med3(int a, b, c){
	if((b>=a && c<=a) || (b<=a && c>=a))
		return a;
	else if((a>b && c<b) || (a<b && c>b))
		return b;
	else
		return c;
}*/
//위의 코드의 경우 첫 번째 if가 성립하지 않는 경우 두 번째 if에서도
//	같은 판단을 한 번 더 실행하므로 이 알고리즘은 효율적이지 않다.
int med3(int a, int b, int c) {
	if (a >= b)
	{
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	}
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;
}
int main(void) {
	int a, b, c;
	printf("세 정수의 중앙값을 구합니다.\n");
	printf("a의 값: "); scanf("%d", &a);
	printf("b의 값: "); scanf("%d", &b);
	printf("c의 값: "); scanf("%d", &c);

	printf("중앙값은 %d입니다.", med3(a, b, c));

	return 0;
}