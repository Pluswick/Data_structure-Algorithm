//�� ���� ���� �Է��ϰ� �ִ��� ���ϴ� ���α׷�
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a, b, c;
	int max;
	printf("�� ������ �ִ� ���� ���մϴ�.\n");
	printf("a�� ��: "); scanf("%d", &a);
	printf("b�� ��: "); scanf("%d", &b);
	printf("c�� ��: "); scanf("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("�ִ��� %d �Դϴ�.\n", max);

	return 0;
} �Լ� �̿����� ���� ����
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
	printf("�� ������ �ִ��� ���մϴ�.\n");
	printf("a�� ��: "); scanf("%d", &a);
	printf("b�� ��: "); scanf("%d", &b);
	printf("c�� ��: "); scanf("%d", &c);

	printf("�ִ��� %d �Դϴ�.\n", max3(a, b, c));
	return 0;
}