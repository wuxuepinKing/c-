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
//	//����10��1~100��������������飬�����ݲ����ظ�
//	/*
//     1.���������ݵĺ�
//	 2.���������ݵ�ƽ����
//	 3.ͳ�Ʊ�ƽ��ֵС�����ݸ���
//	*/
//
////1.��������
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
////2.����1~10���������������
//	srand(time(NULL));
//	for (int i = 0; i < len; )
//	{
//		int num = rand() % 100 + 1;
//
//		//ע�ⲻ���ظ�
//		int flag = contains(arr, len, num);
//		if (flag == 0)
//		{
//			arr[i] = num;
//			i++;                  //��������ظ��ˣ���flag=1,��i��������
//		}
//	}
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
////3.�ۼ�
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum = sum + arr[i];
//	}
//	printf("%d\n", sum);
////4.��ƽ����
//	int avg = sum / len;
//
////5.ͳ���ж��ٸ����ֱ�ƽ����С
//	int count = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] < avg)
//		{
//			count++;
//		}
//	}
//
//	printf("ƽ����Ϊ%d\n", avg);
//	printf("%d\n", count);






	//printf("======================================================================================\n");







	
	
	//��ת����
	//���󣺼���¼��5�����ݲ���������
	/*��1����������
	* ��2����ת����
	* ��3���ٴα���
	*/
	 
	////1.��������
	//int arr[5] = { 0 };
	////2.����¼��5������
	//int len = sizeof(arr) / sizeof(int);
	//for (int i = 0; i < len; i++)
	//{
	//	printf("�������%d������\n", i+1);
	//	scanf_s("%d", &arr[i]);
	//}
	////3.���ú�����������
	//printfArr(arr, len);
	////4.��ת����
	//int i = 0;
	//int j = len-1;
	//while (i < j)
	//{
	//	int temp = arr[i];   //����temp��¼i��ֵ
	//	arr[i] = arr[j];     //��j��ֵ����i
	//	arr[j] =  temp;      //����temp(��i��ֵ)����j
	//	i++;
	//	j--;
	//}

	////5.�ٴα�������
	//printfArr(arr, len);
	//

	//printf("==================================================================================\n");






//����һ������,����1~5,���Ҵ���˳��

	/*int arr[] = {1,2,3,4,5};
	int len = sizeof(arr) / sizeof(int);
	srand(time(NULL));
		for (int i = 0; i < len; i++)
		{
			int index = rand() % len;
			printf("����Ϊ%d\ti��ֵΪ%d\n", index,i);
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
