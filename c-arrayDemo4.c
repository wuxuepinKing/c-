//#include<stdio.h>
//int binarySearch(int arr[], int len, int num);
//int main()
//{//二分查找法===索引
////前提条件：数据必须是有顺序的
//	//1.定义数组
//	int arr[] = { 7,23,79,81,103,127,131,147 };
//	int len = sizeof(arr) / sizeof(int);
//	//2.键盘录入数据
//	printf("请输入要查找的数据\n");
//	int num;
//	scanf_s("%d", &num);
//
//	//3.调用函数查找
//	int index = binarySearch(arr, len, num);
//
//	//4.打印输出
//	printf(" 该数的索引为%d\n", index);
//
//
//
//
//
//	return 0;
//}
//
//int binarySearch(int arr[], int len, int num)
//{
//	int min = 0;
//	int max = len - 1;
//
//	while (min <= max)
//	{
//
//		int mid =(min + max) / 2;                      //插值查找的话  int mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min)   
//		if (arr[mid] < num)
//		{
//			min = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//		
//}