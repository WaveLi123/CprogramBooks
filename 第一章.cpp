/*
*************************************************************************************************************
											李伟康_1240069
//2012_11.08_7:00-9:00
//1.p4          第一章例题1.1  在屏幕上显示出一行信息:"This is a C program."
//2.p5          第一章例题1.2  求两个整数之和
//3.p5          第一章例题1.3  求两个整数中的大者
//4.p16         第一章习题4    请参照本章例题，编写一个C程序，输出以下信息(Very good)
//5.p16         第一章习题5    编写一个C程序，输入a,b,c三个值，输出其中的最大值
*************************************************************************************************************
*/
//说明：
//****************************************
//问题1：由于时间问题，函数说明有的不准确&&问题已解决
//问题2：最早做的时候没有用tab键         &&问题已解决
//****************************************



#include "head.h"
#include "first.h"
#include <windows.h>
int system(const char *string);
int choose1;//定义全局变量
int choos1;//定义全局变量
int number_1()
{
start:
	//用户提示信息

	printf("☆欢迎进入《C程序设计教程》第一章！☆\n");
	printf("****************************************************************************\n");
	printf("*1.第一章例题1.1  在屏幕上显示出一行信息:'This is a C program'p4          *\n");
	printf("*2.第一章例题1.2  求两个整数之和p5                                        *\n");
	printf("*3.第一章例题1.3  求两个整数中的大者p5                                    *\n");
	printf("*4.第一章习题4    请参照本章例题，编写一个C程序，输出以下信息(Very good)  *\n");
	printf("*5.第一章习题5    编写一个C程序，输入a,b,c三个值，输出其中的最大值p16     *\n");
	printf("*6.返回主菜单。                                                           *\n");
	printf("*7.退出。                                                                 *\n");
	printf("***************************************************************************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose1);
	switch (choose1)
	{
		case 1:	system("cls");
				example1_1();
				break;

		case 2:	system("cls");
				example1_2();
				break;
				
		case 3:	system("cls");
				example1_3();
				break;

		case 4:	system("cls");
				exercise1_1();
				break;

		case 5:	system("cls");
				exercise1_2();
				break;

		case 6:	system("cls");
				main();
				break;

		case 7:	system("cls");
				goto end;	
				break;
		
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
				{
					system("cls");
					goto start;
	
				}
				else
				{
					goto end;
				}

	}
end:
	return 0;
}
/*
===============================================================================
函数功能:	熟悉c语言环境
一般形式：	example1_1()
参数说明：			
返 回 值：	
调用形式：	example1_1()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
int example1_1()
{
	printf("1.例题1.1	在屏幕上显示出一行信息:'This is a C program.'\n");
	printf("This is a c program\n\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
				{
					system("cls");
					goto start;
	
				}
				else
				{
					goto end;
				}

	}
end:
	return 0;
}
/*
===============================================================================
函数功能:	求两个整数之和
一般形式：	example1_2()
参数说明：	int a;
			int b; 
			int sum;		
返 回 值：	整数
调用形式：	example1_2()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
int example1_2()
{
	printf("2.例题1.2	 求两个整数之和\n");
	
	//1.定义变量类型
	int a;
	int b; 
	int sum;

	//2.变量赋初值
	a=123;
	b=456;
	sum=0;

	//3.获取数据

	//4.处理数据
	sum=a+b;

	//5.输出数据
	printf("sum is %d\n\n",sum);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
				{
					system("cls");
					goto start;
	
				}
				else
				{
					goto end;
				}

	}
end:
	return 0;
}
/*
===============================================================================
函数功能:	求两个整数中的大者
一般形式：	example1_3()
参数说明：	int a; 
			int b; 
			int d; 
返 回 值：	整数
调用形式：	example1_3()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
//int max(int x,int y);
/*int max(int x,int y)            //nxxxxxxxxxxxxxx//
{
	int z;                          //ddddddddddddddd//
	if (x>y) z=x;                   //ssssssssssssssj//
	else z=y;                       //hhhhhhhhhhhhhhh//
	return(z);                      //fffffffffffffff//  	
}*/
int example1_3()
{
	printf("3.例题1.3	 求两个整数中的大者\n");

	//1.定义变量//
	int a;                       //mmmmmmmmmmmmmmmm
	int b;                       //kkkkkkkkkkkkkkk
	int d;                       //nnnnnnnnnnnnnnn

	//2.初始化赋值//
	
	//3.输入数据//
	printf("输入一个整数a=");    //vbnhhhhhhhhhhhh
	scanf("%d",&a);              //vbnhhhhhhhhhhhh
	printf("输入一个整数b=");    //vbnhhhhhhhhhhhh
	scanf("%d",&b);              //vbnhhhhhhhhhhhh

	//4.处理数据//
	d=max(a,b);                     //hhhhhhhhhhhhhhh//

	//5.输出数据//
	printf("max=%d\n\n",d);           //aaaaaaaaaaaaaaa//

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
				{
					system("cls");
					goto start;
	
				}
				else
				{
					goto end;
				}

	}
end:
	return 0;
}

/*
===============================================================================
函数功能:	熟悉c语言环境
一般形式：	example1_4()
参数说明：			
返 回 值：	
调用形式：	example1_4()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
int exercise1_1()
{
	//p16   第一章习题4
	printf("4.习题4		请参照本章例题，编写一个C程序，输出以下信息(Very good)\n");

	//1.定义变量类型

	//2.变量赋初值

	//3.获取数据

	//4.处理数据

	//5.输出数据
	printf("very good !\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
				{
					system("cls");
					goto start;
	
				}
				else
				{
					goto end;
				}

	}
end:
	return 0;
}
/*
===============================================================================
函数功能:	求三个数中的最大值
一般形式：	example1_5()
参数说明：	int a;   
			int b;   
			int c;   
			int d;   
返 回 值：	整数
调用形式：	example1_5()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
int max1(int x,int y);        //ggggggggggggggg
int exercise1_2()
{
	//p16   第一章习题5
	printf("5.习题5	 编写一个C程序，输入a,b,c三个值，输出其中的最大值\n");

	//1.定义变量//
	int a;                       //mmmmmmmmmmmmmmmm
	int b;                       //kkkkkkkkkkkkkkk
	int c;                       //nnnnnnnnnnnnnnn
	int d;                       //ggggggggggggggg

	//2.初始化赋值//
	
	//3.输入数据//
	printf("输入一个整数a=");    //vbnhhhhhhhhhhhh
	scanf("%d",&a);              //vbnhhhhhhhhhhhh
	printf("输入一个整数b=");    //vbnhhhhhhhhhhhh
	scanf("%d",&b);              //vbnhhhhhhhhhhhh
	printf("输入一个整数c=");    //vbnhhhhhhhhhhhh
	scanf("%d",&c);              //vbnhhhhhhhhhhhh
	
	//4.处理数据//
	d=max(a,b);                     //hhhhhhhhhhhhhhh//
	d=max(c,d);                     //hhhhhhhhhhhhhhh//
	
	//5.输出数据//
	printf("max=%d\n",d);           //aaaaaaaaaaaaaaa//

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
				{
					system("cls");
					goto start;
	
				}
				else
				{
					goto end;
				}

	}
end:
	return 0;

}
int max1(int x,int y)            //nxxxxxxxxxxxxxx//
{
	int z;                          //ddddddddddddddd//
	if (x>y) z=x;                   //ssssssssssssssj//
	else z=y;                       //hhhhhhhhhhhhhhh//
	return(z);                      //fffffffffffffff//  	
}



