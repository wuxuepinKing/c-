//#include <stdio.h>
//
////void swap(void* p1, void* p2, int len);
////函数指针
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
//{  //void类型的指针
//	//缺点:无法获取变量里面的数据，也不能进行加，减的计算
	/*short a = 10;
	int b = 20;
	void* p1 = &a;
	void* p2 = &b;
	printf("%p\n", p1);
	*/

	/*int c = 10;
	int d = 30;
	printf("调用前c d的值为%d %d\n", c, d);
	
	swap(&c, &d, 4);
	printf("调用后c d的值为%d %d\n", c, d);*/
	

	//二级指针
	//int a = 10; 
	//int b = 20;
	////定义一级指针
	//int* p = &a;
	////定义二级指针
	//int** pp = &p;
	//作用一：利用二级指针修改 一级指针 里面记录的内存地址
	//*pp = &b;
	//作用二:利用二级指针获取变量中记录的数据

	//printf("%p\n", &a);
	//printf("%p\n", &b);
	//printf("%p\n", p);
	//printf("%d\n", **pp);
	


	//数组指针
	/*int arr[] = { 11,22,33,44,55,66 };
	int len = sizeof(arr) / sizeof(int);

	int* p = arr;
	int* P = &arr[0];
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", *p++);
		
	}*/

//数组指针details
/*
* arr在进行sizeof计算时，也不会退化
  arr参与计算的时候，会退化为第一个元素的指针，记录的内存地址是第一个元素的首地址，步长=数据类型
  &arr获取地址时不会退化，记录的内存地址与arr一样，但是步长=数据类型*数组长度
 
 */
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%zu\n", sizeof(arr));
	//printf("%p\n", arr);        //内存地址
	//printf("%p\n", &arr);
	//printf("%p\n", &arr+1);    //加1相当于移动1步长    -->40
	//printf("%p\n", arr+1);     

//二维数组及索引遍历
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
  

	//数组指针第二种格式及索引遍历
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



   //指针遍历--demo1
//int arr[3][6] =
//{
//	{1,2,3,4,5,6},
//	{11,22,33,44,55,66},
//	{111,222,333,444,555,666}
//};
////利用指针遍历
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





 //指针遍历--demo2
//int arr1 [6] = {1,2,3,4,5,6};
//int arr2[7] = { 11,22,33,44,55,66,77 };
//int arr3[8] = { 111,333,444,555,666,777,888,9999 };
//
//int *arr[3] = { arr1,arr2,arr3 };        //里面存的是地址
//int len1 = sizeof(arr1) / sizeof(int);
//int len2 = sizeof(arr2) / sizeof(int);
//int len3 = sizeof(arr3) / sizeof(int);
//int lenArr[3] = { len1,len2,len3 };
//
//
//
//int** p = arr;
//
//for (int i = 0; i < 3;i++)             //i=0时，取len1，即j从（0~6-1）遍历
//{
//	for(int j = 0; j <lenArr[i] ; j++)
//	{
//		printf("%d ", *(*p + j));
//	}printf("\n ");
//	p++;
//}




//调用一下指针函数
//void(*P1)() = method1;
//int(*P2)(int, int) = method2;
//
//P1();
//int num = P2(10, 20);
//printf("%d\n",num);
//





////////}
//函数：用来交换两个变量记录的数据
//优点：修改一下函数，更具有通用性
//void swap(void* p1,void* p2, int len)
//{    //len 表示字节大小
//	//把void类型的指针转成char类型的指针
//	char* pc1 = p1;
//	char* pc2 = p2;
//	char temp = 0;
//	//以字节为单位,一个字节一个字节的进行交换
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