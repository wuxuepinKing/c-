//#include<stdio.h>
//int main()
//{
//	for (int i = 1; i < 100; i++)
//	{
//		printf("helloworld\n");
//	}
//
//	//1~5��ѭ��
//	for (int a = 1; a <= 5; a++)
//	{
//		printf("%d\n", a);
//	}
//
//	for (int b = 5; b >= 1; b--)
//	{
//		printf("%d\n", b);
//
//	}
//
//
//	//for�ۼ�
//	int sum = 0;
//	for (int c = 1; c <= 100; c++)
//	{
//		sum = sum + c;
//	}
//	printf("%d\n", sum);
//
//
//    //ż�����
//	int sumer = 0;
//	for (int d = 1; d <= 100; d++)
//	{ 
//		if (d % 2 == 0)
//		{
//			sumer = d + sumer;
//		}				
//	}
//	printf("%d\n",sumer);
//	
//
//	//�������
//	int sumers = 0;
//	for (int f = 1; f <= 100;f++)
//	{
//		if (f % 2 != 0)
//		{
//			sumers = f + sumers;
//		}
//	}
//	printf("%d\n", sumers);
//
//
//	//ͳ��˼�룺����һ������,�ں��ʵ�ʱ����������
//	/*
//      ���󣺼���¼���������֣���ʾһ����Χ��
//	        ͳ�������Χ��
//			�ȿ��Ա�6���������ܱ�8�����������ж��ٸ�
//	*/
//	  
//	//1.����¼����������
//	int num1;
//	int num2;
//	printf("��������������:\n");
//	scanf_s("%d %d", &num1, &num2);
//	 
//	//2.�ж�num1��num2˭���
//	int min = num1 < num2 ? num1 : num2;
//	int max = num1 > num2 ? num1 : num2;
//
//	//3.����һ����������ͳ�Ƹ���
//	int count = 0;
//
//	//4.��ȡ��Χ�е�ÿһ������
//	for (int i = min; i <= max; i++)
//	{
//		if (i % 6 == 0 && i % 8 == 0)
//		{
//			count++;
//		}
//	}
//
//	//5.��ӡ
//	printf("%d\n", count);
//
//


//return 0;





//}