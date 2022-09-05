#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
//循环结构可以嵌套，下面以for循环举例输出九九乘法表
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
//也可以外部输入数值，指定乘法表大小,输出不雅观，需要根据实际情况改变格式
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