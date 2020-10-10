#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。

//int is_daffodil(int x)
//{
//	int a = x % 10;
//	int b = x / 10 % 10;
//	int c = x / 100 % 10;
//	int d = x / 1000 % 10;
//	int e = x / 10000 % 10;
//	int f = x / 100000 % 10;
//	if (x < 10)//1位
//	{
//		if (a == x)
//			return 1;
//	}
//	else if (x < 100)//2位
//	{
//		if (a*a + b*b == x)
//			return 1;
//	}
//	else if (x < 1000)//3位
//	{
//		if (a*a*a + b*b*b + c*c*c == x)
//			return 1;
//	}
//	else if (x < 10000)//4位
//	{
//		if (a*a*a*a + b*b*b*b + c*c*c*c + d*d*d*d == x)
//			return 1;
//	}
//	else if(x < 100000)//5位
//	{
//		if (a*a*a*a + b*b*b*b + c*c*c*c + d*d*d*d == x)
//			return 1;
//	}
//	else//100000
//	{
//		if (a*a*a*a*a + b*b*b*b*b + c*c*c*c* + d*d*d*d*d == x)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int ret = is_daffodil(i);
//		if (1 == ret)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{

		//1.计算i的位数 - n
		int tmp = i;
		int count = 1;
		while (tmp /= 10)
		{
			count++;
		}
		//2.获得i的每一位，计算每一位的n次方和
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		//3.比较打印
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}