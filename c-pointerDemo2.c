//#include<stdio.h>
//void swap(int* p1, int* p2);
//int* method();
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("调用前 %d %d\n",a,b);
//
//	swap(&a,& b);
//	printf("拖时间\n");
//
//	
//	
//
//
//	int *p= method();
//	
//	printf("调用后 %d %d\n",a,b);
//	printf("%d\n", *p);
//
//	return 0;
//
//
//
//}
//void static swap(int* p1, int* p2)
//{
//	int  temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//	
//}
//
//
//int* method()
//{
//	static int c = 19999;           //static 可以让指针函数一直存在，无视函数生命周期
//	return &c;        //返回一个内存地址
//}
