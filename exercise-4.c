//1, 2,..., n�� ���� ���մϴ�.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int rep_while(int n) {
	int i, sum;
	puts("1���� n������ ���� ���մϴ�."); //puts�� printf�� �޸� ���ڿ� ��¸� �����ϴ�.(���ڿ��� Ưȭ�� �Լ��̱� ������ �ӵ��� ����� ������.)+�ڵ� ������ �����ϴ�.(\n�� ����� �ʿ䰡 ���ٴ� ���̴�.)
	printf("n�� ��: ");
	printf("%d\n", n);
	sum = 0;
	i = 1;
	while (i<=n)
	{
		sum += i;
		i++;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);

	return sum;
}
int rep_for(int m) {
	int sum;
	puts("1���� m������ ���� ���մϴ�.");
	printf("m�� ��: ");
	printf("%d\n", m);
	sum = 0;
	for (int j = 1; j <= m; j++) {
		sum += j;
	}
	printf("1���� %d������ ���� %d�Դϴ�.\n", m, sum);

	return sum;
}

int main(void) {
	int n, m;
	printf("n�� m�� ���� �Է��� �ֽʽÿ�.\n");
	printf("n�� ��: ");
	scanf("%d", &n);
	printf("m�� ��: ");
	scanf("%d", &m);

	rep_while(n);
	rep_for(m);

	return 0;
}