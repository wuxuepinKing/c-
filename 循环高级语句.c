//#include<stdio.h>
//int main()
//{
//
	//1.����ѭ��
   /*
     for��ʽ
	 for( ; ; )
   {printf���� ����;}
   
     while��ʽ  **����֮��
	 while(1)
	 {prinf("");
   
     do
	 {printf("");}
	 while(1);
   
   
   */


	/*while (1)
	{
		printf("��ѽ~�����");

	}*/




	//ע�⣺����ѭ������Ĵ����޷�����








// 2.��ת�������
	/*  break
	  ����1����1~100֮�䣬�ҵ�һ���ȿ��Ա�3�����ܱ�5����������
	  break�����ܵ�����д��ֻ��д��switch��������ѭ���У���ʾ��������������˼
	*/

	/*
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) 
		{
			printf("%d\n", i);
			break;
	     }
	}*/
	

	/* continue
	����2:���ϳ�5�����ӣ��Ե���3��ʱ�������г���
	     ֱ�����˲��ԣ���ʼ����һ������
	*/
	/*for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			continue;
		}
		printf("�ڳԵ�%d������\n", i);
	}*/








//3.ѭ��Ƕ��
 
	//7��8�е�*
//for (int j = 1; j <= 7; j++)
//{
//	for (int i = 1; i <= 8; i++)
//	{
//		 printf("*");
//	}
//	 printf("\n");
//}
     //��ӡ*****    *
     //    ****     **
     //    ***      ***
     //    **       ****  
//     //    *        *****
//for (int m = 1; m <= 5; m++)
//{
//	for (int n = m; n <= 5; n++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
//
//for (int m = 1; m <= 5; m++)
//{
//	for (int n = 1; n <= m; n++)
//	{
//		printf("*\t");
//	}
//	printf("\n");
//}



//4.�ж�һ�����Ƿ�������,��ͳ�Ƹ���



/*
������ָ�ڴ���1����Ȼ���У�����1�����������ⲻ������������������100���ڵ������б����£�

2, 3, 5, 7, 11, 13, 17,
*/



//�����ǿ��������ж�һ�����Ƿ���������
//int number = 15;
//int count = 0;
//for (int i = 2; i < number; i++)
//{
//	if (number % i == 0)
//	{
//		count++;
//    }
//}
//
//if (count == 0)
//{
//	printf("%d������\n", number);
// }
//else
//{
//	printf("%d��������\n", number);
//}



//���������ж�1~100�ڵ�������
//for (int j = 2; j <= 100; j++) 
//{
//	int count = 0;
//	for (int i = 2; i < j; i++)
//	{
//		if (j % i == 0)
//		{
//			count++;
//			break;
//		}
//	}
//
//	if (count == 0)
//	{
//		printf("%d������\n", j);
//	}
//	else
//	{
//		printf("%d��������\n", j);
//	}
//}


//����ͳ������

//int countA = 0;
//for (int j = 1; j <= 100; j++)
//{
//	int count = 0;
//	for (int i = 2; i < j; i++)
//	{
//		if (j % i == 0)
//		{
//			count++;
//			break;
//		}
//	}
//
//	if (count == 0)
//	{
//		countA++;
//	}
//
//}
//printf("%d\n", countA);
//




















//6.�ҳ�0~1000֮�ڣ�����Ҫ�������
//Ҫ��ÿһλ����֮�͵���15
//such as 78��168��1167
	/*for (int i=1; i <= 1000; i++)
	{
		int number = i;
		int sum = 0;
		while (number != 0)
		{

			int temp = number % 10;
			number = number / 10;
		
			sum = sum + temp;
		}
		if (sum == 15)
			{
 			printf("%d\n",i);
			}


	}





	return 0;
}*/