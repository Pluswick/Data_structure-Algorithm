//세 정수 값을 입력하고 최댓값을 구하는 프로그램
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a, b, c;
	int max;
	printf("세 정수의 최댓 값을 구합니다.\n");
	printf("a의 값: "); scanf("%d", &a);
	printf("b의 값: "); scanf("%d", &b);
	printf("c의 값: "); scanf("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("최댓값은 %d 입니다.\n", max);

	return 0;
} 함수 이용하지 않은 버전
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int max3(int x, int y, int z) {
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
}

int main(void) {
	int a, b, c;
	printf("세 정수의 최댓값을 구합니다.\n");
	printf("a의 값: "); scanf("%d", &a);
	printf("b의 값: "); scanf("%d", &b);
	printf("c의 값: "); scanf("%d", &c);

	printf("최댓값은 %d 입니다.\n", max3(a, b, c));
	return 0;
}