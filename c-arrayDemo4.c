//#include<stdio.h>
//int binarySearch(int arr[], int len, int num);
//int main()
//{//���ֲ��ҷ�===����
////ǰ�����������ݱ�������˳���
//	//1.��������
//	int arr[] = { 7,23,79,81,103,127,131,147 };
//	int len = sizeof(arr) / sizeof(int);
//	//2.����¼������
//	printf("������Ҫ���ҵ�����\n");
//	int num;
//	scanf_s("%d", &num);
//
//	//3.���ú�������
//	int index = binarySearch(arr, len, num);
//
//	//4.��ӡ���
//	printf(" ����������Ϊ%d\n", index);
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
//		int mid =(min + max) / 2;                      //��ֵ���ҵĻ�  int mid = min + (num - arr[min]) / (arr[max] - arr[min]) * (max - min)   
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