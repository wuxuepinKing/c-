//#include<stdio.h>
//int main()
//{
	////冒泡排序：把数据按顺序排好
	////相邻的两个数据两两比较，大的放一边，小的放另一边



	//int arr[] = { 15,5,4,7,8 };
	//int len = sizeof(arr) / sizeof(int);

	//for (int i = 0; i < len; i++)
	//{
	//	for (int j = 0; j < len - 1 - i; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int temp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = temp;

	//		}
	//	}
	//}
	//



	//for (int k = 0; k < len; k++)
	//{
	//	printf("%d ", arr[k]);
	//}








	//选择排序：即从0索引开始依次跟后面索引的数据比较
	//需求：利用选择排序从小到大排序

	/*int arr[] = { 8,47,9,5,1 };
	int len = sizeof(arr) / sizeof(int);
	for (int i = 0; i < len; i++)
	{*/
		/*
			第一轮:i=0时,j=1,2,3,4
			第二轮：i=1时，j=2，3，4
			第三轮:i=2时,j=3，4
			第三轮:i=3时,j=4
			
		
		*/


		/*for (int j = i+1;j<len; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	



	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	
}*/