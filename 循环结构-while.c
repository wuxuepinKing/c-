//#include<stdio.h>
//int main()

//{   
	  /*��ʼ�����;
	  while(�����ж���䣩
	  { 
	     ѭ�������;
		 �����������;
	  }*/
	
	
	
	//int i = 1;                                
 //                                             
	//while (i <= 3)
	//{
	//	printf("��ΰgeigei\n");
	//	i++;




	/*while��ϰ��
	* ����һ������n�������жϸ������Ƿ���2���ݴη�
	* ����:
	*     n=1 �����yes 2��0�η�
	*     n=2 �����yes 2��1�η�
	*     n=3 �����no
	*     n=4 �����yes 2��2�η�
	*     n=5 ���: no
	
     ���������һ�����֣����ϵĳ���2�����ն���õ�����1
	  
	ѭ���Ľ���������ʲô��
	1.�����1��ʱ�򣬾Ϳ��Խ����� ��yes
	2.����޷���2�ٴ������ˣ�Ҳ���Խ����ˣ�no
	*/

	////1.����һ������
	//int n;
	//printf("������һ�����֣�\n");
	//scanf_s("%d", &n);         //����¼��Ҳһ��

	////2.����ѭ�����ϵĳ���2
	//while (n>1&&n%2==0)
	//{
	//	n = n / 2;
	//}
 //   //3.�ж�
	//if (n == 1)
	//{
	//	printf("YES\n");
	//}
	//else 
	//{
	//	printf("NO\n");
	//}



	//��ֽ����
	//������һ�Ŵ�ֽ�����Ϊ0.1mm��������Ҫ�۶��ٴΣ������۳�8844430mm�ĸ߶�
	////1.��������߶ȣ�����Լ�����
	//int height = 8844430;
	//double paper = 0.1;
	//int count=0;
	//while (paper <= height)       //С��������д����ʲô����£�ѭ��Ҫ����ִ��
	//{
	//	paper = paper * 2;
	//	count++;
	//}
	//printf("%d\n", count);



	/*������ת����
	���ڽ�һ������123��ת��321
	1.������������
	int number;
	int regroup = 0;
	printf("������һ��������");
	scanf_s("%d", &number);
	
	2.���ұ߿�ʼ�����λ�ȡnumber�е�ÿһ�����֣�Ȼ����һ��ƴ������regroup
	while (number != 0)
	{
		int temp = number % 10;             //3 12 3
		number = number / 10;
		regroup = regroup * 10 + temp;
	}
	printf("%d\n", regroup);
	*/



	//x��ƽ����
	//��һ���Ǹ�����x,���㲢����x������ƽ����
	//���ֻ�����������֣�С�����ֽ�����ȥ
	 
	//int num = 17;                               //1*1=1
	//int x = 1;                                  //2*2=4
	//while (x * x <= num)                        //3*3=9
	//{                                           //4*4=5 
	//	x++;                                    //5*5=25
	//}
	//printf("%d\n", x - 1);

                                                                                                                                                                


// ������ת����֮�жϻ�����  121 232 323.....
	//int  number1=123;
	//int  regroup = 0;

	//while ( number1 != 0 )
	//{
	//	int temp = number1 % 10;
	//	number1 = number1 / 10;
	//	regroup = regroup * 10 + temp;
	//}
	//int number2 = 123;           //ע���ʱ��number1�Ѿ����0��������Ҫ����һ������number1���±���
	//printf("%d\n", number2);
	//if (regroup ==number2)
	//{
	//		printf("�������ǻ�����");
	//}
	//else
	//{
	//	printf("���������ǻ�����");
	//}

	

  /*
  ����������������dividend�ͳ���divisor
  ���������Ҫ��use�˷���������ȡ������
  ���ر�����dividend���Գ���divisor�õ����̺�����
  
  ��˵����������11,3
  ���������3
  ��2
*/  
//
//	int  dividend = 11;
//	int  divisor = 3;
//	int  quotient = 0;
//	int  remainder= 0;
//
//while (dividend >= divisor)
//{
//	 dividend= dividend - divisor;
//	 remainder = dividend;
//	quotient++;
//}
//printf("%d\n", quotient);
//printf("%d\n", remainder);
//
//	/*
//	
//	������еĳ˷��ͳ���
//	�˷�2*3=2+2+2
//	����11/3
//	    11-3=8
//		8-3=5
//		5-3=2
//    */















//	return 0;
//
//
//
//
//}