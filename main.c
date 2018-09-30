#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>

int main(void)
{
	int a = 0; 
	int b = 0;
	int c = 0;
	int y = 0;
	int n = 0;
	int x;
	for (x = 100; x <= 999; x++)
	{
		a = x % 1000 / 100;//求第一位数 
		b = x % 100 / 10;//求第二位数
		c = x % 10 / 1;//求第三位数 
		y = a*a*a + b*b*b + c*c*c;
		if (y == x)
		{ 
			printf("% d", x);
		    n++;
		}
	}
	printf("\n");
	printf("水仙花数量为:%d\n", n);
	system("pause");
	return 0;
}