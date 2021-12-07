#include<stdio.h>
#include<stdlib.h>
int main() {
	int x[30],z[30];
	float y[30];
	float n, m=0.0,average;
	int a=0, b, c=0, d=0,e=0,i=0,h;
	printf("此次考试分为：");
	scanf("%f", &n);
	printf("\n学生总人数:");
		scanf("%d", &a);
		system("cls");
	for (b=0; b < a; b++) {
		printf("学号：");
		scanf("%d", &x[b]);
		printf("\n成绩：");
		scanf("%f", &y[b]);
		system("cls");
		if (y[b] < n * 60 / 100) {
			z[c] = b;
			c++;//不及格人数
		}
		m += y[b];//总成绩
	}
	average = m / a;
	printf("*****不及格学生名单如下*****\n\n");
	printf("学号\t成绩\n");
	for (i = 0; i < c; i++){
		e = z[d];
		printf("%d\t%.2f\n",*(x+e),*(y+e));
		d++;
	}
	printf("\n*****成绩在平均分以上的学生名单如下*****\n\n学号\t成绩\n");
	for (h = 0; h <= a; h++) {
		if (y[h] >= average)
			printf("%d\t%.2f\n",x[h], y[h]);
	}
	printf("\n*****全班整体情况如下*****\n全班平均分为:%.2f\n不及格人数为:%d\n成绩在平均分以上的人数：%d\n",average,i,h-2);
	return 0;
}