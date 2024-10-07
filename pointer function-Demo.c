#include<stdio.h>
/*
   定义4个函数  1表示加法,2表示减法，3表示乘法，4表示除法
   键盘录入3个数字，前两个表示参与计算的数字，第三个表示调用的函数

   datails：只有形参和返回值类型一样时，才能放到同一个函数指针数组当中

*/







int add(int num1, int num2)
{
	return num1 + num2;
}int substract(int num1, int num2)
{
	return num1 - num2;
}int multiply(int num1, int num2)
{
	return num1 * num2;
}int divide(int num1, int num2)
{
	return num1 / num2;
}

int main()
{
	//指针函数数组
	int (*arr[4])(int, int) = {add,substract,multiply,divide};

	printf("请输入两个数字参与计算\n");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	printf("请输入一个数字表示要进行的计算 1~4\n");
	int choose;
	scanf_s("%d", &choose);

	int res = arr[choose - 1](num1, num2);
	printf("计算结果是%d\n", res);

	return 0;
}