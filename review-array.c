//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
////����һ���������ж��Ƿ������Ƿ��ظ�
//// int contains(int arr[],int len,int num)
////{
////	for (int i = 0; i < len; i++)
////	{
////		if (arr[i] == num)    //��ʱ�ظ�������1
////		{
////			return 1;
////		}
////		return 0;
////		
////	}
////	
////}
//
////����һ����������������
//void printArr(int arr[], int len);
//
////���ֲ���
//int binarySearch(int arr[], int len, int num);
//
//
////����ĸ�ϰ
//// 
//// 
//// ���麯��
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
//	//printf("%d\n", arr[4]);     //Ԫ�ط���
//	////�޸���ֵ
//	//arr[4] = 10;
//	//printf("%d\n", arr[4]);
//	////�������
//	//int len = sizeof(arr)/sizeof(int);       //���[]�е�ֵ
//	//printf("len��ֵΪ=%d\n", len);
//	//for (int i = 0; i < len; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//
//	////��΢��ϰһ���ڴ��ַ
	//int a = 10;
	//printf("%p\n", &a);
	//printf("%p\n", &arr);
	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr[1]);
	//printf("%p\n", &arr[2]);
	//printf("%p\n", &arr[3]);
	//printf("%p\n", &arr[4]);

 //   //���麯��
	//int arr1[] = {6,7,8,9,10};
	//int len1= sizeof(arr1) / sizeof(int);
	//printArr(arr1, len1);


	//��������ֵ
	//int arr[] = { 11,22,33,44,55,66 };
	//int len = sizeof(arr) / sizeof(int);
	//int max = arr[0];     //Ĭ�ϰ�0��������ʼֵ

	//for (int i = 0; i < len; i++)
	//{
	//	if (arr[i] > max)
	//	{
	//		max = arr[i];
	//	}
	//}
	//printf("���ֵΪ%d", max);



//�������
//����10��1~100֮���������������飬�����
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

	printf("�ܺ�Ϊ%d", sum)*/




//�߼�������ͣ�����һ��Ҫ���м�����ֵ���ظ���Ҫ��
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
	printf("ƽ����Ϊ%d\n",avg);
	printf("ͳ��һ�±�ƽ����С�����ݸ���\n");
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < avg)

		{
			count++;
		}

	}
	printf("%d\n", count);*/

	
	//��������������ķ�ת
//int arr[5] = { 0 };
//int len = sizeof(arr) / sizeof(int);
//for (int i = 0; i < len; i++)
//{
//	printf("�������%d������\n", i+1);
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
//printf("��ת�������Ϊ��");
//printArr(arr, len);
//	



//��������˳��
//int arr[] = { 3,44,66,88,99 };
//srand(time(NULL));
//int len = sizeof(arr) / sizeof(int);
//for (int i = 0; i < len; i++)
//{
//	int index = rand() % len;   //������ķ�Χ��0~5
//
//	int temp = arr[i];
//	arr[i] = arr[index];
//	arr[index] = temp;
//}
//printArr(arr, len);


//������й��㷨 ----> ��������
//int num;
//int arr[5] = {1,55,66,88,99};
//int len = sizeof(arr) / sizeof(int);
//printf("������Ҫ��ѯ����������\n");
//scanf_s("%d", &num);
//
//int index = order(arr, len, num);
//if (index == -1)
//{
//	printf("�������,�������ϵ�����");
//}
//else
//{
//	printf("num��Ӧ������Ϊ%d", index);
//
//}



//���ֲ���----->Ҫ����˳��
//int arr[10] = {1,5,66,68,78,89,90,92,93,96};
//int len = sizeof(arr) / sizeof(int);
//int num;
//printf("������num��ֵ\n");
//scanf_s("%d", &num);
//int index= binarySearch(arr, len, num);
//if (index == -1)
//{
//	printf("�������\n");
//}
//else
//{
//	printf("���ҽ����num������Ϊ%d\n", index);
//}

//// ð������:�����ݰ���˳���ź�        ���ڱȽ�
//int arr[] = { 3,5,2,1,4 };
//int len = sizeof(arr) / sizeof(int);
//for (int i = 0; i < len; i++)                //��ѭ�����ǰ���ѭ���ظ�0~4
//{
//	for (int j = 0; j < len - 1 - i; j++)    //len-1��Ϊ��ֹ����Խ��,(len-1)-i����Ϊÿ��ѭ����ȥ1 ----������{5,4,3,2,1} 5��1��λ����Ҫѭ��4��
//	{
//		if (arr[j]>arr[j+1])      //�������ݱȽ�,С�ķ�ǰ�棬��ķź���
//		{
//			int temp = arr[j];
//			arr[j] = arr[j + 1];
//			arr[j + 1] = temp;
//		}
//	}
//}
//printArr(arr, len);


//ѡ�����򣺴�0������ʼ���������Ԫ�����
//int arr[] = { 3,5,2,1,4 };
//int len = sizeof(arr) / sizeof(int);
//for (int i = 0; i < len-1; i++)  //len-1����Ϊ5������ֻ��Ҫѭ��4��
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
////����һ����������ĺ���
//void printArr(int arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//////����һ�������ѯ���ݶ�Ӧ������
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
////���ֲ���
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
