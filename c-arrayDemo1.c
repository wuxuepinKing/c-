//#include<stdio.h>
//#include<time.h>
//void  printfarr(int arr[], int len);
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5};
//	printf("%d\n", arr[4]);
//	//�޸�
//	//arr[4] = 10;
//	printf("%d\n", arr[4]);  
//
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", len);
//	//�������
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	printf("---------------------------------\n");
//	//�ڴ��ַ
//	int arr1 [] = {6,7,8,50};
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr1[0]);
//	printf("%p\n", &arr1[1]);
//	printf("%p\n", &arr1[2]);
//	printf("%p\n", &arr1[3]);
//
//
//	printf("---------------------------------\n");
//
//	//��������
//	printfarr(arr, len);
//
//
//
//	printf("---------------------------------\n");
//	//����ֵ
//	int array[] = { 33,5,6,44,82};
//	int max = array[0];       //һ������Ϊ0������max��=0 , ��ֹ��������
//	int length = sizeof(array) / sizeof(int);
//	for (int k = 0; k < length; k++)
//	{
//		if (array[k] > max)
//		{
//			max = array[k];
//		}
//     }
//	printf("%d\n", max);
//
//
//
//	printf("---------------------------------\n");
//	//�������
//	//��������10��1~100��֮���������������飬�����
//	int array2[10] = { 0 };
//	int len2 = sizeof(array2) / sizeof(array2[0]);
//	srand(time(NULL));
//	for (int m = 1; m <= 10; m++)
//	{
//		printf("%d\n", rand() % 100 + 1);
//	}
//
//	for (int y = 0; y < len2; y++)
//	{
//		int num = rand() % 100 + 1;
//		array2[y] = num;
//	}
//	int sum2 = 0;
//	for (int y = 0; y < len2; y++)
//	{
//		sum2 = sum2 + array2[y];
//	}
//	printf("%d\n", sum2);
//	printf("---------------------------------\n");
//	for (int m = 1; m <= 10; m++)
//	{
//		printf("%d\n", rand() % 100 + 1);
//	}
//
//	
//
//
//
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
//
//}
//
//
//
//
//
//
//void  printfarr(int arr[], int len)
//{
//	for (int j = 0; j < len; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//}