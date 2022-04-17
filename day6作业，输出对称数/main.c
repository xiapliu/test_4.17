#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()//ÅÐ¶Ï¶Ô³ÆÊý
{
	int a, b,c,tmp;
	while (scanf("%d", &a) != EOF)
	{
		b = 0;
		c = a;
		while (a)
		{
			tmp = a % 10;
			b = b * 10 + tmp;
			a = a / 10;
		}
		if(c == b)
		{ 
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		printf("c=%d,b=%d", c,b);
	}
	return 0;
}