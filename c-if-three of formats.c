//#include<stdio.h>
//int main()
//{ 
//
//	//if的第一种格式	
//	int blood = 200;
//	int demage = 80;
//	int restore = 100;
//	blood = blood - demage + restore;
//	if(blood>=200)
//	{
//		blood = 200;
//
//	}
//	printf("%d\n", blood);
//	//practical
//	int amount = 5;
//	if (amount >= 1)
//	{
//		printf("小明will扔掉苹果\n");
//
//	}
//
//	int satisfy = 70;
//
//
//	//if的第二种格式
//	if (satisfy >= 60)
//	{
//		printf("女神同意告白\n");
//	}
//	else
//	{
//		printf("表白别人\n");
//	}
//
//	/*
//	  需求：
//	  我跟小屎屎一起去看电影
//	  如果在同一排而且连着坐，我会开心的看电影
//	  如果不是在同一排或者没有连着坐，我会开心的打游戏
//
//	  提示：每张电影票定义两个整形变量，分别表示第几排和座位号
//	  电影票号的规则：
//	     x排x号
//
//	*/
//
//	//1.定义变量
//	int row1 = 5;
//	int numberA = 6;
//	 
//	int rowB = 5;
//	int numberB = 7;
//    //2.判断
//	//同一排： row1 =row2
//	//连着坐： number1-number2 =  1||-1
//
//	if ((row1 == rowB) && (numberA - numberB == 1 || numberA - numberB == -1))
//	{
//		printf("我会开心的看电影\n");        //判断用==
//
//	}
//	else
//	{
//		printf("我会开心的打游戏\n");
//
//	}
//
//
//	//if的第三种格式
//
//	int soccer = 1000;
//
//	if (soccer < 0 || soccer>100)
//	{
//		printf("该分数超出范围");
//	}
//
//	else if (soccer < 60)
//	{
//		printf("你的分数等级为D");
//	}
//	else if (soccer >= 60 && soccer <= 69)
//	{
//		printf("你的分数等级为C");
//	}
//	else if (soccer >= 70 && soccer <= 84)
//	{
//		printf("你的分数等级为B");
//	}
//	else if (soccer >= 85 && soccer <= 100)
//	{
//		printf("你的分数等级为A");
//	}
//	else
//	{
//		printf("你的分数等级为A");
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//	return 0;
//
//
//
//
//
//
//
//}
//
