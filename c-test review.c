//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//double GetArea(double len , double  width)
//{
//	double area = len * width;
//	return area;
//}
//
//int main()
//{
//
//	//打印一个长方形的面积damn
//	double i= GetArea(5.5, 5.6);	
//	double j = GetArea(8.8,5.6);
//	//数据类型强转
//	int k = (int)j;
//
//	printf("%lf\n", i);
//	printf("%d\n", k);
//	printf("==========================================================\n");
//
//
//
//
//
//
//
//
//
//	srand(time(NULL));
//	
//	for (int i = 1; i <= 10; i++)
//	{
//		int num1 = rand() % 100 + 1;
//		printf("%d\n", num1);
//	}
//	   
//	//小游戏
//	int num2 = rand() % 50 + 1;
//	printf("%d\n", num2);
//	int guess;
//
//	while (1)
//	{
//		printf("请输入一个数\n");
//		scanf_s("%d", &guess);
//		if(num2 !=guess)
//		{
//			if (guess > num2)
//			{
//				printf("大了傻逼");
//
//			}
//			else
//			{
//				printf("小了");
//
//			}
//		}
//			
//		if (guess == num2)
//		{
//			printf("恭喜你，答对了");
//			break;
//		}
//		
//	}
//	
//	printf("============================================");
//
//
//
////打印一个数的算术平方根
//	/*int num = 17;
//	16=4*4;
//	25=5*5;*/
//
//	int num;
//	int h=1;
//	printf("请输入一个整数");
//	scanf_s ("%d", &num);
//	if (num >= 0)
//	{
//		while (h * h <= num)
//		{
//			h++;
//		}
//		//整数会被保留,小数拜拜
//
//		printf("%d\n", h - 1);
//	}
//	else
//	{
//		printf("输错啦");
//	}
//
//
//
//
//	return 0;
//
//
//
//
//
//
//
//}
#include<stdio.h>
//int main()
//{
//	
//	for (int i = 2; i <= 100; i++)
//	{//  i=2,b=2
//	//2%2=0	,则count=1，则2不是素数
//	
//		
//		int count = 0;
//		for (int b = 2; b <i; b++)
//		{
//			if (i % b == 0)
//			{
//				count ++;
//				break;
//			}
//		}
//		if (count != 0) {
//			printf("%d不是素数\n",i);
//		}
//		else {
//			printf("%d是素数\n",i);
//		}
//
//	}
















