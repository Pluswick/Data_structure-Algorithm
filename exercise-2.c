//�� ���� ���� �Է��ϰ� �߾Ӱ��� ���ϴ� ���α׷�
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
//���� �ڵ��� ��� ù ��° if�� �������� �ʴ� ��� �� ��° if������
//	���� �Ǵ��� �� �� �� �����ϹǷ� �� �˰����� ȿ�������� �ʴ�.
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
	printf("�� ������ �߾Ӱ��� ���մϴ�.\n");
	printf("a�� ��: "); scanf("%d", &a);
	printf("b�� ��: "); scanf("%d", &b);
	printf("c�� ��: "); scanf("%d", &c);

	printf("�߾Ӱ��� %d�Դϴ�.", med3(a, b, c));

	return 0;
}