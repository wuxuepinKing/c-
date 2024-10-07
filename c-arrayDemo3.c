//#include<stdio.h>
////作用：查找数组中的数据
////返回值：数据所在的索引
//int order(int arr[],int len,int num)
//{
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] == num)
//		{
//			return i;
//		}	
//	}
//	return -1;
//}
//int main()
//{	 /*           基本查找
//	 核心思路：就是从数组中的0索引开始，依次往后查找
//	          如果找到了,就会返回数据对于的索引
//			  如果没有找到，就会返回-1
//	 */
//	int arr[5] = { 55,11,19,18,30 };
//	int len = sizeof(arr) / sizeof(int);
//	 
//	int num = 11;		
//	int index = order (arr, len, num);
//	printf("num对应的索引为%d\n", index);
//	
//
//
//	printf("===============================================");
///
//
//
//	return 0;
//
//}