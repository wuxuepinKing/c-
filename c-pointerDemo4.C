//#include<stdio.h>
//
//int main()
//
//{
//	//指针的第三个作用:函数的结果和计算状态分开
//	//练习：定义一个函数,将两数相除,获取他们的余数
//	int a;
//	printf("请输入除数\n");
//	scanf_s("%d", &a);
//	int b ;
//	printf("请输入被除数\n");
//	scanf_s("%d", &b);
//	
//
//	int  res = 0;
//	int flag = getRemainer(a, b, &res);
//	if (!flag)   // 非0为真   返回1则为真,取反则为假
//	{
//		printf("余数为%d",res);
//	}
//	else
//	{
//		printf("被除数为0,系统错误");
//	}
//}
//int getRemainer(int num1, int num2, int* res)
//{
//	if (num2 == 0)
//	{
//		return 1;
//	}
//	*res = num1 % num2;
//	return 0;
//}