//#include <stdio.h>
//
////void swap(void* p1, void* p2, int len);
////����ָ��
//void method1()
//{
//	printf("method1\n");
//}
//int method2(int num1, int num2)
//{
//	printf("method2\n");
//	return num1 + num2;
//}
//
//
//int main()
//{  //void���͵�ָ��
//	//ȱ��:�޷���ȡ������������ݣ�Ҳ���ܽ��мӣ����ļ���
	/*short a = 10;
	int b = 20;
	void* p1 = &a;
	void* p2 = &b;
	printf("%p\n", p1);
	*/

	/*int c = 10;
	int d = 30;
	printf("����ǰc d��ֵΪ%d %d\n", c, d);
	
	swap(&c, &d, 4);
	printf("���ú�c d��ֵΪ%d %d\n", c, d);*/
	

	//����ָ��
	//int a = 10; 
	//int b = 20;
	////����һ��ָ��
	//int* p = &a;
	////�������ָ��
	//int** pp = &p;
	//����һ�����ö���ָ���޸� һ��ָ�� �����¼���ڴ��ַ
	//*pp = &b;
	//���ö�:���ö���ָ���ȡ�����м�¼������

	//printf("%p\n", &a);
	//printf("%p\n", &b);
	//printf("%p\n", p);
	//printf("%d\n", **pp);
	


	//����ָ��
	/*int arr[] = { 11,22,33,44,55,66 };
	int len = sizeof(arr) / sizeof(int);

	int* p = arr;
	int* P = &arr[0];
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *p++);
		
	}*/

//����ָ��details
/*
* arr�ڽ���sizeof����ʱ��Ҳ�����˻�
  arr��������ʱ�򣬻��˻�Ϊ��һ��Ԫ�ص�ָ�룬��¼���ڴ��ַ�ǵ�һ��Ԫ�ص��׵�ַ������=��������
  &arr��ȡ��ַʱ�����˻�����¼���ڴ��ַ��arrһ�������ǲ���=��������*���鳤��
 
 */
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%zu\n", sizeof(arr));
	//printf("%p\n", arr);        //�ڴ��ַ
	//printf("%p\n", &arr);
	//printf("%p\n", &arr+1);    //��1�൱���ƶ�1����    -->40
	//printf("%p\n", arr+1);     

//��ά���鼰��������
	/*int arr[3][5] =
	{
		{1,2,3,4,5},
		{11,22,33,44,55},
		{111,222,333,444,555}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}*/
  

	//����ָ��ڶ��ָ�ʽ����������
	/*int arr1 [3] = {1,2,3};
	int arr2 [5] = {11,22,33,44,55};
	int arr3[9] = { 1,2,3,4,5,6,7,8,9 };
	int *arr[3] = { arr1,arr2,arr3 };  

	int len1 = sizeof(arr1) / sizeof(int);
	int len2 = sizeof(arr2) / sizeof(int);
	int len3 = sizeof(arr3) / sizeof(int);
	int lenArr[3] = { len1,len2,len3 };

	for(int i=0;i<3;i++)
	{
		for (int j=0; j < lenArr[i]; j++)
		{
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}*/



   //ָ�����--demo1
//int arr[3][6] =
//{
//	{1,2,3,4,5,6},
//	{11,22,33,44,55,66},
//	{111,222,333,444,555,666}
//};
////����ָ�����
//int(*P)[6] = arr;
//
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 6; j++)
//	{
//		printf("%d ", *(*P + j));
//	}
//	printf("\n");
//	P++;
//}





 //ָ�����--demo2
//int arr1 [6] = {1,2,3,4,5,6};
//int arr2[7] = { 11,22,33,44,55,66,77 };
//int arr3[8] = { 111,333,444,555,666,777,888,9999 };
//
//int *arr[3] = { arr1,arr2,arr3 };        //�������ǵ�ַ
//int len1 = sizeof(arr1) / sizeof(int);
//int len2 = sizeof(arr2) / sizeof(int);
//int len3 = sizeof(arr3) / sizeof(int);
//int lenArr[3] = { len1,len2,len3 };
//
//
//
//int** p = arr;
//
//for (int i = 0; i < 3;i++)             //i=0ʱ��ȡlen1����j�ӣ�0~6-1������
//{
//	for(int j = 0; j <lenArr[i] ; j++)
//	{
//		printf("%d ", *(*p + j));
//	}printf("\n ");
//	p++;
//}




//����һ��ָ�뺯��
//void(*P1)() = method1;
//int(*P2)(int, int) = method2;
//
//P1();
//int num = P2(10, 20);
//printf("%d\n",num);
//





////////}
//������������������������¼������
//�ŵ㣺�޸�һ�º�����������ͨ����
//void swap(void* p1,void* p2, int len)
//{    //len ��ʾ�ֽڴ�С
//	//��void���͵�ָ��ת��char���͵�ָ��
//	char* pc1 = p1;
//	char* pc2 = p2;
//	char temp = 0;
//	//���ֽ�Ϊ��λ,һ���ֽ�һ���ֽڵĽ��н���
//	for (int i = 0; i < len; i++)
//	{
//		temp = *pc1;
//		*pc1 = *pc2;
//		*pc2 = temp;
//
//		pc1++;
//		pc2++;
//	}
//
//}