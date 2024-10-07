//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i < 100; i++)
//	{
//		printf("helloworld\n");
//	}
//
//	//1~5的循环
//	for (int a = 1; a <= 5; a++)
//	{
//		printf("%d\n", a);
//	}
//
//	for (int b = 5; b >= 1; b--)
//	{
//		printf("%d\n", b);
//
//	}
//
//
//	//for累加
//	int sum = 0;
//	for (int c = 1; c <= 100; c++)
//	{
//		sum = sum + c;
//	}
//	printf("%d\n", sum);
//
//
//    //偶数相加
//	int sumer = 0;
//	for (int d = 1; d <= 100; d++)
//	{ 
//		if (d % 2 == 0)
//		{
//			sumer = d + sumer;
//		}				
//	}
//	printf("%d\n",sumer);
//	
//
//	//奇数相加
//	int sumers = 0;
//	for (int f = 1; f <= 100;f++)
//	{
//		if (f % 2 != 0)
//		{
//			sumers = f + sumers;
//		}
//	}
//	printf("%d\n", sumers);
//
//
//	//统计思想：定义一个变量,在合适的时候自增即可
//	/*
//      需求：键盘录入两个数字，表示一个范围。
//	        统计这个范围。
//			既可以被6整除，又能被8整除的数字有多少个
//	*/
//	  
//	//1.键盘录入两个数字
//	int num1;
//	int num2;
//	printf("请输入两个整数:\n");
//	scanf_s("%d %d", &num1, &num2);
//	 
//	//2.判断num1和num2谁最大
//	int min = num1 < num2 ? num1 : num2;
//	int max = num1 > num2 ? num1 : num2;
//
//	//3.定义一个变量用来统计个数
//	int count = 0;
//
//	//4.获取范围中的每一个数字
//	for (int i = min; i <= max; i++)
//	{
//		if (i % 6 == 0 && i % 8 == 0)
//		{
//			count++;
//		}
//	}
//
//	//5.打印
//	printf("%d\n", count);
//
//


//return 0;





//}