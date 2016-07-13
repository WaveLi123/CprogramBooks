/*
****************************************************************************************************************************
												李伟康_1240069
//2012-11-6 8:00-12:00
//1.第二章例题2.1	在程序中使用符号变量  p18
//2.第二章例题2.2	整型变量的定义与使用  p22
//3.第二章例题2.3	整形数据的溢出        p23
//4.第二章例题2.4	浮点型数据的舍入误差  p26
//5.第二章例题2.5	转义字符的使用        p27
//6.第二章例题2.6	向字符变量赋予整数    
//7.第二章例题2.7	大小字母的转换        p29
//8.第二章例题2.8	强制类型转换          p35
//9.第二章习题6		请编程序将china译成密码  p39
****************************************************************************************************************************
*/
//说明：
//*******************************************
//问题1:	由于时间问题，函数说明有的不准确*(问题已解决)
//问题2:	最早做的时候没有用tab键			*(问题已解决)
//*******************************************

#include "head.h"
#include "second.h"
#include <windows.h>
int system(const char *string);
int choose2;//定义全局变量
int choos2;//定义全局变量
#define  PI  30 
int number_2()
{
start:
	//用户提示信息
	choose2=0;
	choos2=0;

	printf("☆欢迎进入《C程序设计教程》第二章！☆\n");
	printf("************************************************\n");
	printf("*1.第二章例题2.1 在程序中使用符号变量	    p18*\n");
	printf("*2.第二章例题2.2 整型变量的定义与使用	    p22*\n");
	printf("*3.第二章例题2.3 整形数据的溢出             p23*\n");
	printf("*4.第二章例题2.4 浮点型数据的舍入误差	    p26*\n");
	printf("*5.第二章例题2.5 转义字符的使用             p27*\n");
	printf("*6.第二章例题2.6 向字符变量赋予整数         p28*\n");
	printf("*7.第二章例题2.7 大小字母的转换             p29*\n");
	printf("*8.第二章例题2.8 强制类型转换               p35*\n");
	printf("*9.第二章习题6	 请编程序将china译成密码    p39*\n");
	printf("*10.返回主菜单。                               *\n");
	printf("*11.退出。                                     *\n");
	printf("************************************************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch (choose2)
	{
		case 1:	system("cls");
				example2_1();
				break;

		case 2:	system("cls");
				example2_2();
				break;

		case 3:	system("cls");
				example2_3();
				break;

		case 4:	system("cls");
				example2_4();
				break;

		case 5:	system("cls");
				example2_5();
				break;

		case 6:	system("cls");
				example2_6();
				break;

		case 7:	system("cls");
				example2_7();
				break;

		case 8:	system("cls");
				example2_8();
				break;

		case 9:	system("cls");
				exercise2_1();
				break;

		case 10:system("cls");
				main();
				break;

		case 11:system("cls");
				goto end;	
				break;
		
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	在程序中使用符号变量
一般形式：	example2_1()
参数说明：	int num;  
			int total;
返 回 值：	整数
调用形式：	example2_1()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/						
int example2_1()
{
	//1.第二章例题2.1	在程序中使用符号变量
	printf("1.例题2.1  在程序中使用符号变量\n");

	//1.定义变量类型
	int num;                //p18  第二章例题2.1
	int total;              //p18  第二章例题2.1

	//2.变量赋初值
	num=10;                 //p18  第二章例题2.1          
	total=0;                //p18  第二章例题2.1

	//3.获取数据

	//4.处理数据
	total=num*PI;

	//5.输出数据
	printf("total=%d\n",total);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	整型变量的定义与使用
一般形式：	example2_2()
参数说明：	int a;     
			int b;     
			int c;     
			int d;     
			unsigned u;
返 回 值：	整数
调用形式：	example2_2()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_2()
{
	//2.第二章例题2.2	整型变量的定义与使用
	printf("2.例题2.2  整型变量的定义与使用\n");

	//1.定义变量类型
	int a;                  //p22  第二章例题2.2
	int b;                  //p22  第二章例题2.2
	int c;                  //p22  第二章例题2.2        
	int d;                  //p22  第二章例题2.2        
	unsigned u;             //p22  第二章例题2.2

	//2.变量赋初值
	a=12;                   //p22  第二章例题2.2
	b=-24;                  //p22  第二章例题2.2
	c=32767;                //p22  第二章例题2.2			
	d=0;                    //p22  第二章例题2.2			
	u=10;                   //p22  第二章例题2.2

	//3.获取数据

	//4.处理数据
	c=a+u;
	d=b+u;

	//5.输出数据
	printf("a+u=%d,b+u=%d\n",c,d);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	整形数据的溢出
一般形式：	example2_3()
参数说明：	int c5;                 
			int d6;  
返 回 值：	整数
调用形式：	example2_3()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_3()
{
	//3.第二章例题2.3	整形数据的溢出
	printf("3.例题2.3  整形数据的溢出\n");

	//1.定义变量类型 
	int c5;                 
	int d6;                 

	//2.变量赋初值
	c5=32767;					
	d6=0;

	//3.获取数据

	//4.处理数据
	d6=c5+1;

	//5.输出数据
	printf("%d,%d\n",c5,d6);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	浮点型数据的舍入误差
一般形式：	example2_4()
参数说明：	float e;		
返 回 值：	整数
调用形式：	example2_4()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_4()
{
	//4.第二章例题2.4	浮点型数据的舍入误差
	printf("4.例题2.4  浮点型数据的舍入误差\n");
 
	//1.定义变量类型
	float e;

	//2.变量赋初值
	e=3.141592612;

	//3.获取数据
 
	//4.处理数据
 
	//5.输出数据
	printf("e=%f\n",e);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	转义字符的使用
一般形式：	example2_5()
参数说明：			
返 回 值：	整数
调用形式：	example2_5()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_5()
{
	//5.第二章例题2.5  转义字符的使用
	printf("5.例题2.5  转义字符的使用\n");
	
	//1.定义变量类型
	
	//2.变量赋初值

	//3.获取数据

	//4.处理数据

	//5.输出数据
	printf("ab c\t de\rf\tg\n");
	printf("h\ti\b\bj k\n");
	printf("\n");                

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	向字符变量赋予整数
一般形式：	example2_6()
参数说明：	char c1;              
			char c2;		
返 回 值：	整数
调用形式：	example2_6()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_6()
{
	//6.第二章例题2.6	向字符变量赋予整数
	printf("6.例题2.6  向字符变量赋予整数\n");

	//1.定义变量类型
	char c1;              
	char c2; 

	//2.变量赋初值
	c1=97;                  
	c2=98; 

	//3.获取数据

	//4.处理数据

	//5.输出数据
	printf("%c %c\n",c1,c2);
	printf("%d %d\n",c1,c2);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	大小字母的转换
一般形式：	example2_7()
参数说明：	char c3;					
			char c4;		
返 回 值：	整数
调用形式：	example2_7()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_7()
{
	//7.第二章例题2.7	大小字母的转换
	printf("7.例题2.7  大小字母的转换\n");

	//1.定义变量类型
	char c3;					
	char c4;

	//2.变量赋初值
	c3='a';                
	c4='b'; 

	//3.获取数据

	//4.处理数据
	c3=c3-32;
	c4=c4-32;

	//5.输出数据
	printf("%c %c\n",c3,c4);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	强制类型转换
一般形式：	example2_8()
参数说明：	float x;					
			int i;			
返 回 值：	整数
调用形式：	example2_8()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_8()
{

	//8.第二章例题2.8	强制类型转换
	printf("8.例题2.8  强制类型转换\n");

	//1.定义变量类型
	float x;					
	int i;	

	//2.变量赋初值
	x=3.6;

	//3.获取数据

	//4.处理数据
	i=(int)x;

	//5.输出数据
	printf("x=%f,i=%d\n",x,i);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
函数功能:	请编程序将china译成密码
一般形式：	exercise2_1()
参数说明：	char d1;                         
			char d2;                
			char d3;                
			char d4;                                       
			char d5; 		
返 回 值：	字符
调用形式：	exercise2_1()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int exercise2_1()
{
	//9.第二章习题6	请编程序将china译成密码	
	printf("9.习题6  请编程序将china译成密码\n");

	//1.定义变量类型
	char d1;                         
	char d2;                
	char d3;                
	char d4;                                       
	char d5; 

	//2.变量赋初值
	d1='C';                            
	d2='h';                 
	d3='i';                 
	d4='n';                 
	d5='a'; 

	//3.获取数据

	//4.处理数据
	d1=d1+4;
	d2=d2+4;
	d3=d3+4;
	d4=d4+4;
	d5=d5+4;

	//5.输出数据
	printf("%c%c%c%c%c\n",d1,d2,d3,d4,d5);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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


