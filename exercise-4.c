//1, 2,..., n의 합을 구합니다.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int rep_while(int n) {
	int i, sum;
	puts("1부터 n까지의 합을 구합니다."); //puts는 printf와 달리 문자열 출력만 가능하다.(문자열에 특화된 함수이기 때문에 속도는 상당히 빠르다.)+자동 개행이 가능하다.(\n을 사용할 필요가 없다는 뜻이다.)
	printf("n의 값: ");
	printf("%d\n", n);
	sum = 0;
	i = 1;
	while (i<=n)
	{
		sum += i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	return sum;
}
int rep_for(int m) {
	int sum;
	puts("1부터 m까지의 합을 구합니다.");
	printf("m의 값: ");
	printf("%d\n", m);
	sum = 0;
	for (int j = 1; j <= m; j++) {
		sum += j;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", m, sum);

	return sum;
}

int main(void) {
	int n, m;
	printf("n과 m의 값을 입력해 주십시오.\n");
	printf("n의 값: ");
	scanf("%d", &n);
	printf("m의 값: ");
	scanf("%d", &m);

	rep_while(n);
	rep_for(m);

	return 0;
}