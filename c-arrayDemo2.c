//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void printfArr(int arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int contains(int arr[], int len, int num)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == num)
//		{
//			return 1;
//		}
//		return 0;
//	}
//}
//int main()
//{


//	printf("=================================================================================\n");
//	//生成10个1~100的随机数存入数组，且数据不能重复
//	/*
//     1.求所有数据的和
//	 2.求所有数据的平均数
//	 3.统计比平均值小的数据个数
//	*/
//
////1.定义数组
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
////2.生成1~10个随机数存入数组
//	srand(time(NULL));
//	for (int i = 0; i < len; )
//	{
//		int num = rand() % 100 + 1;
//
//		//注意不能重复
//		int flag = contains(arr, len, num);
//		if (flag == 0)
//		{
//			arr[i] = num;
//			i++;                  //如果数据重复了，则flag=1,则i不能自增
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
////3.累加
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%d\n", sum);
////4.求平均数
//	int avg = sum / len;
//
////5.统计有多少个数字比平均数小
//	int count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] < avg)
//		{
//			count++;
//		}
//	}
//
//	printf("平均数为%d\n", avg);
//	printf("%d\n", count);






	//printf("======================================================================================\n");







	
	
	//反转数组
	//需求：键盘录入5个数据并存入数组
	/*《1》遍历数组
	* 《2》反转数组
	* 《3》再次遍历
	*/
	 
	////1.定义数组
	//int arr[5] = { 0 };
	////2.键盘录入5个数据
	//int len = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < len; i++)
	//{
	//	printf("请输入第%d个数据\n", i+1);
	//	scanf_s("%d", &arr[i]);
	//}
	////3.利用函数遍历数组
	//printfArr(arr, len);
	////4.反转数组
	//int i = 0;
	//int j = len-1;
	//while (i < j)
	//{
	//	int temp = arr[i];   //先让temp记录i的值
	//	arr[i] = arr[j];     //把j的值赋给i
	//	arr[j] =  temp;      //最后版temp(即i的值)赋给j
	//	i++;
	//	j--;
	//}

	////5.再次遍历数组
	//printfArr(arr, len);
	//

	//printf("==================================================================================\n");






//定义一个数组,存入1~5,并且打乱顺序

	/*int arr[] = {1,2,3,4,5};
	int len = sizeof(arr) / sizeof(int);
	srand(time(NULL));
		for (int i = 0; i < len; i++)
		{
			int index = rand() % len;
			printf("索引为%d\ti的值为%d\n", index,i);
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
	     }
		for (int i = 0; i < len; i++)
		{
			printf("%d\n", arr[i]);
		}


















	return 0;


}
*/
