#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
//ѭ���ṹ����Ƕ�ף�������forѭ����������žų˷���
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d*%d=%2d\t",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
//Ҳ�����ⲿ������ֵ��ָ���˷����С,������Źۣ���Ҫ����ʵ������ı��ʽ
//int main()
//{	
//	int a, b;
//	scanf_s("%d%d",&a,&b);
//	
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//		printf("%d*%d=%2d\t", i, j, i * j);
//		}
//	}
//	printf("\n");
//	return 0;
//}