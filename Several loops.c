//#include<stdio.h>
//void generateUniqueNumbers(int n)
//{
//	int arr[4];
//	arr[0] = n;
//	arr[1] = n+1;
//	arr[2] = n+2;
//	arr[3] = n+3;
//	// ʹ������ѭ������3λ���Ĳ��ظ����
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (j != i)
//			{
//				for (int k = 0; k < 4; k++)
//				{
//					if (k != j && k != i)
//					{
//						printf("%d%d%d\n", arr[i], arr[j], arr[k]);
//					}
//				}
//			}
//		}
//	}
//}
//
//
//void generateUniqueNumbers2(int n)
//{   //ȡ6������������ظ���5λ��       0<n<6
//	int arr[5];
//	arr[0] = n;
//	arr[1] = n + 1;
//	arr[2] = n + 2;
//	arr[3] = n + 3;
//	arr[4] = n + 4;
//	// ʹ������ѭ������5λ���Ĳ��ظ����
//	for (int i = 0; i <5 ; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (j != i)
//			{
//				for (int k = 0; k < 5; k++)
//				{
//					if (k != j && k != i)
//					{
//						for (int h = 0; h < 5; h++)
//						{
//							if (h != i && h != j && h != k)
//							{
//								for (int l = 0; l < 5; l++)
//								{
//									if (l != i && l != j && l != k && l != h)
//									{
//										printf(" %d%d%d%d%d \n", arr[i], arr[j], arr[k],arr[h],arr[l]);
//									}
//								}
//							}
//						}
//
//					}
//				}
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int num,num2;
//reinput:printf("����������num��ֵ��0��7��\n");
//	scanf_s("%d", &num);
//	if (num > 0 && num < 7)
//	{
//		generateUniqueNumbers(num);
//				
//	}
//	else
//	{
//		printf("num������Χ,���������ɵ��\n");
//		goto reinput;
//	}
//
//
//	reinput2: printf("����������num2��ֵ��0,6��\n");
//	scanf_s("%d", &num2);
//	if (num2 > 0 && num2 < 6)
//	{
//		generateUniqueNumbers2(num2);
//	}
//	else
//	{
//		printf("�ִ���,�������ɣ���������ܶ���\n");
//		goto reinput2;
//
//	}
//	return 0;
//}
