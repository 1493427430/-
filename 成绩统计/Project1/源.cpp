#include<stdio.h>
#include<stdlib.h>
int main() {
	int x[30],z[30];
	float y[30];
	float n, m=0.0,average;
	int a=0, b, c=0, d=0,e=0,i=0,h;
	printf("�˴ο��Է�Ϊ��");
	scanf("%f", &n);
	printf("\nѧ��������:");
		scanf("%d", &a);
		system("cls");
	for (b=0; b < a; b++) {
		printf("ѧ�ţ�");
		scanf("%d", &x[b]);
		printf("\n�ɼ���");
		scanf("%f", &y[b]);
		system("cls");
		if (y[b] < n * 60 / 100) {
			z[c] = b;
			c++;//����������
		}
		m += y[b];//�ܳɼ�
	}
	average = m / a;
	printf("*****������ѧ����������*****\n\n");
	printf("ѧ��\t�ɼ�\n");
	for (i = 0; i < c; i++){
		e = z[d];
		printf("%d\t%.2f\n",*(x+e),*(y+e));
		d++;
	}
	printf("\n*****�ɼ���ƽ�������ϵ�ѧ����������*****\n\nѧ��\t�ɼ�\n");
	for (h = 0; h <= a; h++) {
		if (y[h] >= average)
			printf("%d\t%.2f\n",x[h], y[h]);
	}
	printf("\n*****ȫ�������������*****\nȫ��ƽ����Ϊ:%.2f\n����������Ϊ:%d\n�ɼ���ƽ�������ϵ�������%d\n",average,i,h-2);
	return 0;
}