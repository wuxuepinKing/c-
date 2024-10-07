//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
////定义一个函数，判断是否数据是否重复
//// int contains(int arr[],int len,int num)
////{
////	for (int i = 0; i < len; i++)
////	{
////		if (arr[i] == num)    //此时重复，返回1
////		{
////			return 1;
////		}
////		return 0;
////		
////	}
////	
////}
//
////定义一个函数来遍历数组
//void printArr(int arr[], int len);
//
////二分查找
//int binarySearch(int arr[], int len, int num);
//
//
////数组的复习
//// 
//// 
//// 数组函数
////void printArr(int arr[], int len)
////{
////	for (int j = 0; j < len; j++)
////	{
////		printf("%d\n", arr[j]);	
////	}
////}
//
//void main()
//{
//	//int arr[] = {1,2,3,4,5};
//	//printf("%d\n", arr[4]);     //元素访问
//	////修改数值
//	//arr[4] = 10;
//	//printf("%d\n", arr[4]);
//	////数组遍历
//	//int len = sizeof(arr)/sizeof(int);       //获得[]中的值
//	//printf("len的值为=%d\n", len);
//	//for (int i = 0; i < len; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//
//	////稍微复习一下内存地址
	//int a = 10;
	//printf("%p\n", &a);
	//printf("%p\n", &arr);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[1]);
	//printf("%p\n", &arr[2]);
	//printf("%p\n", &arr[3]);
	//printf("%p\n", &arr[4]);

 //   //数组函数
	//int arr1[] = {6,7,8,9,10};
	//int len1= sizeof(arr1) / sizeof(int);
	//printArr(arr1, len1);


	//求数组最值
	//int arr[] = { 11,22,33,44,55,66 };
	//int len = sizeof(arr) / sizeof(int);
	//int max = arr[0];     //默认把0索引当初始值

	//for (int i = 0; i < len; i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("最大值为%d", max);



//数组求和
//生成10个1~100之间的随机数存入数组，并求和
	/*srand(time(NULL));
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		int num = rand() % 100 + 1;
		arr[i] = num;
		printf("%d\n", arr[i]);
		sum = sum + arr[i];
	}

	printf("总和为%d", sum)*/




//高级数组求和，在上一个要求中加上数值不重复的要求
	/*srand(time(NULL));
	int arr[10] = {0};
	int len = sizeof(arr) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < len;)
	{
		int num = rand() % 100 + 1;
		int flag= contains(arr, len, num);
		if (flag == 0)
		{
			arr[i] = num;
			sum += num;
			printf("%d\n", arr[i]);
			i++;
		}
		
	}
	printf("%d\n", sum);
	int avg = sum / len;
	printf("平均数为%d\n",avg);
	printf("统计一下比平均数小的数据个数\n");
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < avg)

		{
			count++;
		}

	}
	printf("%d\n", count);*/

	
	//接下来进行数组的反转
//int arr[5] = { 0 };
//int len = sizeof(arr) / sizeof(int);
//for (int i = 0; i < len; i++)
//{
//	printf("请输入第%d个数据\n", i+1);
//	scanf_s("%d", &arr[i]);
//}
//printArr(arr, len);
//int i = 0;
//int j = 4;
//int temp;
//while (i < j)
//{
//	temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//	i++;
//	j--;
//}
//printf("反转后的数组为：");
//printArr(arr, len);
//	



//打乱数组顺序
//int arr[] = { 3,44,66,88,99 };
//srand(time(NULL));
//int len = sizeof(arr) / sizeof(int);
//for (int i = 0; i < len; i++)
//{
//	int index = rand() % len;   //随机数的范围在0~5
//
//	int temp = arr[i];
//	arr[i] = arr[index];
//	arr[index] = temp;
//}
//printArr(arr, len);


//数组的有关算法 ----> 基本查找
//int num;
//int arr[5] = {1,55,66,88,99};
//int len = sizeof(arr) / sizeof(int);
//printf("请输入要查询索引的数据\n");
//scanf_s("%d", &num);
//
//int index = order(arr, len, num);
//if (index == -1)
//{
//	printf("输入错误,非数组上的数据");
//}
//else
//{
//	printf("num对应的索引为%d", index);
//
//}



//二分查找----->要求有顺序
//int arr[10] = {1,5,66,68,78,89,90,92,93,96};
//int len = sizeof(arr) / sizeof(int);
//int num;
//printf("请输入num的值\n");
//scanf_s("%d", &num);
//int index= binarySearch(arr, len, num);
//if (index == -1)
//{
//	printf("输入错误\n");
//}
//else
//{
//	printf("查找结果：num的索引为%d\n", index);
//}

//// 冒泡排序:将数据按照顺序排好        相邻比较
//int arr[] = { 3,5,2,1,4 };
//int len = sizeof(arr) / sizeof(int);
//for (int i = 0; i < len; i++)                //外循环就是把内循环重复0~4
//{
//	for (int j = 0; j < len - 1 - i; j++)    //len-1是为防止索引越界,(len-1)-i是因为每次循环减去1 ----》比如{5,4,3,2,1} 5到1的位置需要循环4次
//	{
//		if (arr[j]>arr[j+1])      //相邻数据比较,小的放前面，大的放后面
//		{
//			int temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		}
//	}
//}
//printArr(arr, len);


//选择排序：从0索引开始，跟后面的元素相比
//int arr[] = { 3,5,2,1,4 };
//int len = sizeof(arr) / sizeof(int);
//for (int i = 0; i < len-1; i++)  //len-1是因为5个数据只需要循环4次
//{
//	for (int j= i+1; j< len; j++)
//	{
//		if (arr[i] > arr[j])
//		{
//			int temp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = temp;
//		}
//	}
//
//}
//printArr(arr, len);
//return 0;
//
//}
//
//
//
////定义一个遍历数组的函数
//void printArr(int arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//////定义一个数组查询数据对应的索引
////int order(int arr[],int len,int num)
////{
////	for (int i = 0; i < len; i++)
////	{
////		if(num==arr[i])
////		{
////			return i;
////		}
////
////	}
////	return  -1;
////}
//
////二分查找
////int binarySearch(int arr[], int len, int num)
////{
////	int min = 0;
////	int max = len - 1;
////	while (min <= max)
////	{
////		int mid = (min + max) / 2;
////		if (arr[mid] < num)
////		{
////			min = mid + 1;
////		}
////		else if (arr[mid] > num)
////		{
////			max = mid - 1;
////		}
////		else
////		{
////			return mid;
////		}
////
////	}
////	return -1;
////}
//
//
//
