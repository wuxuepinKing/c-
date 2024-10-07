//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//double getareA(double len, double width)
//{
//	double area= len * width;
//	return area;
//}
//int main()
//{ 
//	//获取当前时间--从1970年1月1日0：0：0开始过了多少秒的时间点
//	long long res= time(NULL);
//	printf("%lld\n", res);
//
//	double area1 = getareA(5.3, 2.7);
//	printf("%.3lf\n",area1);
//
//	double area2 = getareA(5.8, 2.8);
//	printf("%.3lf\n", area2);
//
//	//利用时间函数获取随机数并限制范围1~999
//	//1~1000  1000-1=999
//
//	/*srand(time(NULL));
//
//	for (int i = 1; i <= 10; i++)
//	{
//		int num = rand() % 999 + 1;
//		printf("%d\n", num);
//	}*/
//	
//
//
//
//	//猜数字小游戏（1~100）
//
//	srand(time(NULL));
//
//	
//		int num = rand() % 100 + 1;
//		printf("%d\n", num);
//		int i;
//		while (1)
//		{
//			
//			printf("请输入你猜的数字：\n");
//			scanf_s("%d", &i);
//			if (i > num)
//			{
//				printf("大了");
//			}
//			else if (i < num)
//			{
//				printf("小了");
//			}
//			else
//			{
//				printf("中了");
//			}
//			break;
//		}
//
//	return 0;
// }