//#include<stdio.h>
//int main()
//{
//
	//1.无限循环
   /*
     for格式
	 for( ; ; )
   {printf（“ ”）;}
   
     while格式  **重中之重
	 while(1)
	 {prinf("");
   
     do
	 {printf("");}
	 while(1);
   
   
   */


	/*while (1)
	{
		printf("哎呀~你干嘛");

	}*/




	//注意：无限循环下面的代码无法进行








// 2.跳转控制语句
	/*  break
	  需求1：在1~100之间，找第一个既可以被3，又能被5整除的数字
	  break：不能单独书写，只能写在switch，或者是循环中，表示结束，跳出的意思
	*/

	/*
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) 
		{
			printf("%d\n", i);
			break;
	     }
	}*/
	

	/* continue
	需求2:早上吃5个包子，吃到第3个时，发现有虫子
	     直接扔了不吃，开始吃下一个包子
	*/
	/*for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			continue;
		}
		printf("在吃第%d个包子\n", i);
	}*/








//3.循环嵌套
 
	//7行8列的*
//for (int j = 1; j <= 7; j++)
//{
//	for (int i = 1; i <= 8; i++)
//	{
//		 printf("*");
//	}
//	 printf("\n");
//}
     //打印*****    *
     //    ****     **
     //    ***      ***
     //    **       ****  
//     //    *        *****
//for (int m = 1; m <= 5; m++)
//{
//	for (int n = m; n <= 5; n++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//
//for (int m = 1; m <= 5; m++)
//{
//	for (int n = 1; n <= m; n++)
//	{
//		printf("*\t");
//	}
//	printf("\n");
//}



//4.判定一个数是否是质数,并统计个数



/*
质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的数。100以内的质数列表如下：

2, 3, 5, 7, 11, 13, 17,
*/



//《我们可以先来判断一个数是否是质数》
//int number = 15;
//int count = 0;
//for (int i = 2; i < number; i++)
//{
//	if (number % i == 0)
//	{
//		count++;
//    }
//}
//
//if (count == 0)
//{
//	printf("%d是质数\n", number);
// }
//else
//{
//	printf("%d不是质数\n", number);
//}



//《接着来判断1~100内的质数》
//for (int j = 2; j <= 100; j++) 
//{
//	int count = 0;
//	for (int i = 2; i < j; i++)
//	{
//		if (j % i == 0)
//		{
//			count++;
//			break;
//		}
//	}
//
//	if (count == 0)
//	{
//		printf("%d是质数\n", j);
//	}
//	else
//	{
//		printf("%d不是质数\n", j);
//	}
//}


//接着统计数量

//int countA = 0;
//for (int j = 1; j <= 100; j++)
//{
//	int count = 0;
//	for (int i = 2; i < j; i++)
//	{
//		if (j % i == 0)
//		{
//			count++;
//			break;
//		}
//	}
//
//	if (count == 0)
//	{
//		countA++;
//	}
//
//}
//printf("%d\n", countA);
//




















//6.找出0~1000之内，符合要求的数字
//要求：每一位数字之和等于15
//such as 78，168，1167
	/*for (int i=1; i <= 1000; i++)
	{
		int number = i;
		int sum = 0;
		while (number != 0)
		{

			int temp = number % 10;
			number = number / 10;
		
			sum = sum + temp;
		}
		if (sum == 15)
			{
 			printf("%d\n",i);
			}


	}





	return 0;
}*/