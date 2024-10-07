//#include<stdio.h>
//void getMaxAndMin(int arr[], int len, int* max, int* min);
//
//int main()
//{        //指针的第二作用： 可以返回多个值
//	     //练习:定义一个函数,求数组的最大值和最小值，并返回
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(int);
//	 
//	int max = arr[0];
//	int min = arr[0];
//	getMaxAndMin(arr, len, &max, &min);
//	printf("最大和最小分别为%d %d", max, min);
//
//}
//
//
//void getMaxAndMin(int arr[], int len, int* max, int* min)
//{
//	//找最大值
//	*max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > *max)
//		{
//			*max = arr[i];
//		}
//	}
//
//	//找最小值
//	*min = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] < *min)
//		{
//			*min = arr[i];
//		}
//	}
//}