//#include<stdio.h>
//void getMaxAndMin(int arr[], int len, int* max, int* min);
//
//int main()
//{        //ָ��ĵڶ����ã� ���Է��ض��ֵ
//	     //��ϰ:����һ������,����������ֵ����Сֵ��������
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(int);
//	 
//	int max = arr[0];
//	int min = arr[0];
//	getMaxAndMin(arr, len, &max, &min);
//	printf("������С�ֱ�Ϊ%d %d", max, min);
//
//}
//
//
//void getMaxAndMin(int arr[], int len, int* max, int* min)
//{
//	//�����ֵ
//	*max = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] > *max)
//		{
//			*max = arr[i];
//		}
//	}
//
//	//����Сֵ
//	*min = arr[0];
//	for (int i = 1; i < len; i++)
//	{
//		if (arr[i] < *min)
//		{
//			*min = arr[i];
//		}
//	}
//}