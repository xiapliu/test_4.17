#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, total;
	//for�����ֻ�ܳ��������ֺ�
	for (i = 0, total = 0;i <= 100;i++)//for��100�����������
	{
		if (i % 2 == 0)

		{
			continue;
		}

		total = total + i;
	}
	printf("total=%d\n", total);
	return 0;
}