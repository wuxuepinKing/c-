#include<stdio.h>
/*
   ����4������  1��ʾ�ӷ�,2��ʾ������3��ʾ�˷���4��ʾ����
   ����¼��3�����֣�ǰ������ʾ�����������֣���������ʾ���õĺ���

   datails��ֻ���βκͷ���ֵ����һ��ʱ�����ܷŵ�ͬһ������ָ�����鵱��

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
	//ָ�뺯������
	int (*arr[4])(int, int) = {add,substract,multiply,divide};

	printf("�������������ֲ������\n");
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	printf("������һ�����ֱ�ʾҪ���еļ��� 1~4\n");
	int choose;
	scanf_s("%d", &choose);

	int res = arr[choose - 1](num1, num2);
	printf("��������%d\n", res);

	return 0;
}