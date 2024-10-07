//#include<stdio.h>
//int main()

//{   
	  /*初始化语句;
	  while(条件判断语句）
	  { 
	     循环体语句;
		 条件控制语句;
	  }*/
	
	
	
	//int i = 1;                                
 //                                             
	//while (i <= 3)
	//{
	//	printf("阿伟geigei\n");
	//	i++;




	/*while练习：
	* 给你一个整数n，请你判断该整数是否是2的幂次方
	* 举例:
	*     n=1 输出：yes 2的0次方
	*     n=2 输出：yes 2的1次方
	*     n=3 输出：no
	*     n=4 输出：yes 2的2次方
	*     n=5 输出: no
	
     规则：任意的一个数字，不断的除以2，最终都会得到数字1
	  
	循环的结束条件是什么？
	1.结果是1的时候，就可以结束了 ，yes
	2.结果无法被2再次整除了，也可以结束了，no
	*/

	////1.定义一个变量
	//int n;
	//printf("请输入一个数字：\n");
	//scanf_s("%d", &n);         //键盘录入也一样

	////2.利用循环不断的除以2
	//while (n>1&&n%2==0)
	//{
	//	n = n / 2;
	//}
 //   //3.判断
	//if (n == 1)
	//{
	//	printf("YES\n");
	//}
	//else 
	//{
	//	printf("NO\n");
	//}



	//折纸问题
	//现在有一张大纸，厚度为0.1mm，请问需要折多少次，可以折成8844430mm的高度
	////1.定义变量高度，厚度以及次数
	//int height = 8844430;
	//double paper = 0.1;
	//int count=0;
	//while (paper <= height)       //小括号里面写的是什么情况下，循环要继续执行
	//{
	//	paper = paper * 2;
	//	count++;
	//}
	//printf("%d\n", count);



	/*整数反转问题
	现在将一个整数123反转成321
	1.定义两个变量
	int number;
	int regroup = 0;
	printf("请输入一个整数：");
	scanf_s("%d", &number);
	
	2.从右边开始，依次获取number中的每一个数字，然后再一次拼到变量regroup
	while (number != 0)
	{
		int temp = number % 10;             //3 12 3
		number = number / 10;
		regroup = regroup * 10 + temp;
	}
	printf("%d\n", regroup);
	*/



	//x的平方根
	//给一个非负整数x,计算并返回x的算术平方根
	//结果只保留整数部分，小数部分将被舍去
	 
	//int num = 17;                               //1*1=1
	//int x = 1;                                  //2*2=4
	//while (x * x <= num)                        //3*3=9
	//{                                           //4*4=5 
	//	x++;                                    //5*5=25
	//}
	//printf("%d\n", x - 1);

                                                                                                                                                                


// 整数反转问题之判断回文数  121 232 323.....
	//int  number1=123;
	//int  regroup = 0;

	//while ( number1 != 0 )
	//{
	//	int temp = number1 % 10;
	//	number1 = number1 / 10;
	//	regroup = regroup * 10 + temp;
	//}
	//int number2 = 123;           //注意此时的number1已经变成0，所以需要定义一个等于number1的新变量
	//printf("%d\n", number2);
	//if (regroup ==number2)
	//{
	//		printf("该整数是回文数");
	//}
	//else
	//{
	//	printf("该整数不是回文数");
	//}

	

  /*
  两个整数，被除数dividend和除数divisor
  两数相除，要求不use乘法，除法和取余运算
  返回被除数dividend除以除数divisor得到的商和余数
  
  如说：两个整数11,3
  出结果：商3
  ：2
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
//	计算机中的乘法和除法
//	乘法2*3=2+2+2
//	除法11/3
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