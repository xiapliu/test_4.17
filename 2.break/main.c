#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, total;
	//for�����ֻ�ܳ��������ֺ�
	for (i = 0, total = 0;i <= 100;i++)//for��100�����������
	{
		if (total>2000)

		{
			break;
		}

		total = total + i;
	}
	printf("total=%d,i=%d\n", total,i);
	return 0;
}