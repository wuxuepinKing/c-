//#include<stdio.h>
//int main()
//{  //指针
////1.获取变量的内存地址
//	int a = 10;
//	printf("%p\n", &a);
//
////2.查询数据
//	int b = 20;
//	int* p1 = &b;
//	printf("%d\n", *p1);
//
////3.修改数据/存储数据
//	int c = 30;
//	int* p2 = &c;
//	printf("%d\n", *p2);
//	*p2 = 300;
//	printf("%d\n", *p2);
//
//
//	int d;
//	int* p3 = &d;
//	*p3 = 40;
//	printf("%d\n", d);
//	printf("%d\n", *p3);
//
////4.占用字节大小           //指针占用的大小与数据类型无关，跟编译器有关 x64 x86
//	char e = 'A';
//	char* p4 = &e;
//	printf("%zu\n", sizeof(p4));
//	printf("%zu\n", sizeof(e));
//
//
//	int f = 'A';
//	int* p5 = &f;
//	printf("%zu\n", sizeof(p5));
//	printf("%zu\n", sizeof(f));
//
//
//
//
//}