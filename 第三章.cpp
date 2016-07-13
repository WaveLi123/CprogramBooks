/*
************************************************************************************************************************************
														李伟康_1240069
//2012-11-6 19:00-22:00
//1.  第三章例题3.1   有符号整数赋给无符号整型变量，数据会失真
//2.  第三章例题3.2   有符号整数赋给无符号整型变量，注意数值范围
//3.  第三章例题3.3   输出单个字符
//4.  第三章例题3.4   输入单个字符
//5.  第三章例题3.5   字符数据的输出
//6.  第三章例题3.6   输出实数时的有效数位
//7.  第三章例题3.7   输出双精度数时的有效位数
//8.  第三章例题3.8   scanf函数输入数据
//9.  第三章例题3.9   无符号数据的输出
//10. 第三章例题3.10  字符串的输出
//11. 第三章例题3.11  输出实数时指定小数位数
//12. 第三章例题3.12  求三个圆的周长，输出结果时上下按小数点对齐，取两位小数
//13. 第三章例题3.13  输入三角形的三边长，求三角形面积
//14. 第三章例题3.14  从键盘上输入一个大写字母，要求改用小写字母输出
//15. 第三章例题3.15  求ax^2+bx+c=0方程的根。a,b,c由键盘输入，设b^2-4ac>0
//16. 第三章习题6     求圆半径r=1.5,圆柱高h=3时，圆周长、圆面积、圆球表面积、圆球体积、圆柱体积
//17. 第三章习题7     输入一个华氏温度，要求输出摄氏温度
//18. 第三章习题8     用getchar函数读入两个字符给c1,c2,然后用putchar,printf分别输出这两个字符
************************************************************************************************************************************
*/


#include "head.h"
#include "third.h"
#include <windows.h>
int system(const char *string);

#define PI 3.1415926        
int choose3=0;//定义全局变量
int choos3=0;//定义全局变量




int number_3()
{
start:
	//用户提示信息

	printf("☆欢迎进入《C程序设计教程》第三章！☆\n");
	printf("*******************************************************************************\n");
	printf("*1. 第三章例题3.1 有符号整数赋给无符号整型变量,数据会失真                     *\n");
	printf("*2. 第三章例题3.2 有符号整数赋给无符号整型变量,注意数值范围                   *\n");
	printf("*3. 第三章例题3.3 输出单个字符                                                *\n");
	printf("*4. 第三章例题3.4 输入单个字符                                                *\n");
	printf("*5. 第三章例题3.5 字符数据的输出                                              *\n");
	printf("*6. 第三章例题3.6 输出实数时的有效数位                                        *\n");
	printf("*7. 第三章例题3.7 输出双精度数时的有效位数                                    *\n");
	printf("*8. 第三章例题3.8 scanf函数输入数据                                           *\n");
	printf("*9. 第三章例题3.9 无符号数据的输出                                            *\n");
	printf("*10.第三章例题3.10字符串的输出                                                *\n");
	printf("*11.第三章例题3.11输出实数时指定小数位数                                      *\n");
	printf("*12.第三章例题3.12求三个圆的周长,输出结果时上下按小数点对齐,取两位小数        *\n");
	printf("*13.第三章例题3.13输入三角形的三边长,求三角形面积                             *\n");
	printf("*14.第三章例题3.14从键盘上输入一个大写字母,要求改用小写字母输出               *\n");
	printf("*15.第三章例题3.15求ax^2+bx+c=0方程的根.a,b,c由键盘输入,设b^2-4ac>0           *\n");
	printf("*16.第三章习题6   求圆半径r=1.5,圆柱高h=3时,圆周长|圆面积|圆球表面积|圆球     *\n");
	printf("*   积|圆柱体积                                                               *\n");
	printf("*17.第三章习题7   输入一个华氏温度,要求输出摄氏温度                           *\n");
	printf("*18.第三章习题8   用getchar函数读入两个字符给c1,c2,然后用putchar,printf分别输 *\n");
	printf("*   出这两个字符                                                              *\n");
	printf("*19.返回主菜单                                                                *\n");
	printf("*20.退出                                                                      *\n");
	printf("*******************************************************************************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch (choose3)
	{
		case 1:	system("cls");
				example3_1();
				break;

		case 2:	system("cls");
				example3_2();
				break;

		case 3:	system("cls");
				example3_3();
				break;

		case 4:	system("cls");
				example3_4();
				break;

		case 5:	system("cls");
				example3_5();
				break;

		case 6:	system("cls");
				example3_6();
				break;

		case 7:	system("cls");
				example3_7();
				break;

		case 8:	system("cls");
				example3_8();
				break;

		case 9:	system("cls");
				example3_9();
				break;

		case 10:system("cls");
				example3_10();
				break;

		case 11:system("cls");
				example3_11();
				break;

		case 12:system("cls");
				example3_12();
				break;

		case 13:system("cls");
				example3_13();
				break;

		case 14:system("cls");
				example3_14();
				break;

		case 15:system("cls");
				example3_15();
				break;

		case 16:system("cls");
				exercise3_1();
				break;

		case 17:system("cls");
				exercise3_2();
				break;

		case 18:system("cls");
				exercise3_3();
				break;

		case 19:system("cls");
				main();
				break;

		case 20:system("cls");
				goto end;	
				break;
		
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	有符号整数赋给无符号整型变量，数据会失真
一般形式：	example3_1()
参数说明：			
返 回 值：	整数
调用形式：	example3_1()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_1()
{
	//1.第三章例题3.1	有符号整数赋给无符号整型变量，数据会失真
	printf("1.例题3.1   有符号整数赋给无符号整型变量，数据会失真\n"); 	

	//3.获取数据
	
	//4.处理数据
	a1=b;
	
	//5.输出数据
	printf("%u\n",a1);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	有符号整数赋给无符号整型变量，注意数值范围
一般形式：	example3_2()
参数说明：			
返 回 值：	整数
调用形式：	example3_2()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_2()
{

	//2.第三章例题3.2	有符号整数赋给无符号整型变量，注意数值范围
	printf("2.例题3.2   有符号整数赋给无符号整型变量，注意数值范围\n");
	//3.获取数据
 
	//4.处理数据
	c_=a;

	//5.输出数据
	printf("%u\n",c_);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	输出单个字符
一般形式：	example3_3()
参数说明：			
返 回 值：	字符
调用形式：	example3_3()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_3()
{
	//3.第三章例题3.3	 输出单个字符
	printf("3.例题3.3   输出单个字符\n");
 
	//3.获取数据
 
	//4.处理数据
	d='B';
	e='O';
	f='Y';
 
	//5.输出数据
	putchar(d);putchar(e);putchar(f);putchar('\n');
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	输入单个字符
一般形式：	example3_4()
参数说明：			
返 回 值：	字符
调用形式：	example3_4()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_4()
{
	//4.第三章例题3.4	输入单个字符
	printf("4.例题3.4   输入单个字符\n");

	//3.获取数据
	d=getchar();

	//4.处理数据

	//5.输出数据
	putchar(d);
	putchar('\n');
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	字符数据的输出
一般形式：	example3_5()
参数说明：			
返 回 值：	字符
调用形式：	example3_5()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_5()
{
	//5.第三章例题3.5	字符数据的输出
	printf("5.例题3.5   字符数据的输出\n");

	//3.获取数据
	
	//4.处理数据
	
	//5.输出数据
	printf("%c,%d\n",g,g);
	printf("%c,%d\n",i,i);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	输出实数时的有效数位
一般形式：	example3_6()
参数说明：			
返 回 值：	字符
调用形式：	example3_6()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_6()
{
	//6.第三章例题3.6	 输出实数时的有效数位
	printf("6.例题3.6   输出实数时的有效数位\n");

	//3.获取数据
	
	//4.处理数据
	
	//5.输出数据
	printf("%f\n",x+y);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	输出双精度数时的有效位数
一般形式：	example3_7()
参数说明：			
返 回 值：	实数
调用形式：	example3_7()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_7()
{
	//7.第三章例题3.7	输出双精度数时的有效位数
	printf("7.例题3.7   输出双精度数时的有效位数\n");
	
	//3.获取数据
	
	//4.处理数据
	
	//5.输出数据
	printf("%f\n",m+n);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	scanf函数输入数据
一般形式：	example3_8()
参数说明：			
返 回 值：	整数
调用形式：	example3_8()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_8()
{
	//8.第三章例题3.8	scanf函数输入数据
	printf("8.例题3.8   scanf函数输入数据\n");
	
	//3.获取数据
	printf("请输入整数b=");
	scanf("%d",&b);
	printf("请输入整数c=");
	scanf("%d",&c_);
	printf("请输入整数i=");
	scanf("%d",&i);
	
	//4.处理数据
	
	//5.输出数据
	printf("b=%d\n",b);
	printf("c=%d\n",c_);
	printf("i=%d\n",i);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	无符号数据的输出
一般形式：	example3_9()
参数说明：			
返 回 值：	无符号数据
调用形式：	example3_9()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_9()
{
	//9.第三章例题3.9	无符号数据的输出
	printf("9.例题3.9   无符号数据的输出\n");
	
	//3.获取数据
	
	//4.处理数据
	
	//5.输出数据
	printf("a=%d\n",a);
	printf("a=%o\n",a);
	printf("a=%x\n",a);
	printf("a=%u\n",a);
	printf("b1=%d\n",b1);
	printf("b1=%o\n",b1);
	printf("b1=%x\n",b1);
	printf("b1=%u\n",b1);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	字符串的输出。
一般形式：	example3_10()
参数说明：			
返 回 值：	字符串
调用形式：	example3_10()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/	
int example3_10()
{
	//10.第三章例题3.10	字符串的输出
	printf("10.例题3.10  字符串的输出\n");
	
	//3.获取数据
	
	//4.处理数据
	
	//5.输出数据
	printf("%3s\n","CHINA");
	printf("%7.2s\n","CHINA");
	printf("%.4s\n","CHINA");
	printf("%-5.3s\n","CHINA");
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	输出实数时指定小数位数
一般形式：	example3_11()
参数说明：			
返 回 值：	实数
调用形式：	example3_11()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_11()
{
	//11.第三章例题3.11	 输出实数时指定小数位数
	printf("11.例题3.11  输出实数时指定小数位数\n");

	//3.获取数据
	
	//4.处理数据
	
	//5.输出数据
	printf("%f  %10f %10.2f  %.2f  %-10.2f\n",h2,h2,h2,h2,h2);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	求三个圆的周长，输出结果时上下按小数点对齐，取两位小数
一般形式：	example3_12()
参数说明：			
返 回 值：	浮点型数据
调用形式：	example3_12()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_12()
{
	//12.第三章例题3.12		求三个圆的周长，输出结果时上下按小数点对齐，取两位小数
	printf("12.例题3.12  求三个圆的周长，输出结果时上下按小数点对齐，取两位小数\n");

	//3.获取数据
	
	//4.处理数据
	s1=2.0*PI*r1;
	s2=2.0*PI*r2;
	s3=2.0*PI*r3;
	
	//5.输出数据
	printf("s1=%10.2f\n",s1);
	printf("s2=%10.2f\n",s2);
	printf("s3=%10.2f\n",s3);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	输入三角形的三边长，求三角形面积
一般形式：	example3_13()
参数说明：			
返 回 值：	字符型数据
调用形式：	example3_13()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_13()
{
	//13.第三章例题3.13		输入三角形的三边长，求三角形面积
	printf("13.例题3.13  输入三角形的三边长，求三角形面积\n");

	//3.获取数据
	printf("请输入三角形的一边长x=");
	scanf("%f",&x);
	printf("请输入三角形的一边长y=");
	scanf("%f",&y);
	printf("请输入三角形的一边长h=");
	scanf("%f",&h);
	
	//4.处理数据
	s=(x+y+h)/2.0;
	area=sqrt(s*(s-x)*(s-y)*(s-h));
	
	//5.输出数据
	printf("x=%f\n",x);
	printf("y=%f\n",y);
	printf("h=%f\n",h);
	printf("area=%f\n",area);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	从键盘上输入一个大写字母，要求改用小写字母输出
一般形式：	example3_14()
参数说明：			
返 回 值：	字符
调用形式：	example3_14()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_14()
{
	//14.第三章例题3.14		从键盘上输入一个大写字母，要求改用小写字母输出
	printf("14.例题3.14  从键盘上输入一个大写字母，要求改用小写字母输出\n");

	//3.获取数据
	getchar();
	c1=getchar();
	printf("%c,%d\n",c1,c1);
	
	//4.处理数据
	c2=c1+32;
	
	//5.输出数据
	printf("%c,%d\n",c2,c2);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	求ax^2+bx+c=0方程的根。a,b,c由键盘输入，设b^2-4ac>0
一般形式：	example3_15()
参数说明：			
返 回 值：	字符型数据
调用形式：	example3_15()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_15()
{
	//15.第三章例题3.15		求ax^2+bx+c=0方程的根。a,b,c由键盘输入，设b^2-4ac>0
	printf("15.例题3.15  求ax^2+bx+c=0方程的根。a,b,c由键盘输入，设b^2-4ac>0\n");

	//3.获取数据
	printf("请输入二元一次方程二次项的值x=");
	scanf("%f",&x);
	printf("请输入二元一次方程二次项的值y=");
	scanf("%f",&y);
	printf("请输入二元一次方程二次项的值h=");
	scanf("%f",&h);
	
	//4.处理数据
	disc=y*y-4*x*h;
	p=(-b)/(2*x);
	q=(sqrt(disc))/(2*x);
	x1=p+q;
	x2=p-q;
	
	//5.输出数据
	printf("x1=%5.2f\n",x1);
	printf("x2=%5.2f\n",x2);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	求圆半径r=1.5,圆柱高h=3时，圆周长、圆面积、圆球表面积、圆球体积、圆柱体积
一般形式：	exercise3_1()
参数说明：			
返 回 值：	字符型数据
调用形式：	exercise3_1()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int exercise3_1()
{	
	//16.第三章习题6	求圆半径r=1.5,圆柱高h=3时，圆周长、圆面积、圆球表面积、圆球体积、圆柱体积
	printf("16.习题6  求圆半径r=1.5,圆柱高h=3时，圆周长、圆面积、圆球表面积、圆球体积、圆柱体积\n");
	
	//3.获取数据
	printf("请输入圆半径r=");
	scanf("%f",&r);
	printf("请输入圆柱高h1=");
	scanf("%f",&h1);
	
	//4.处理数据
	c3=2*PI*r;
	s4=PI*r*r;
	s5=4*PI*r*r;
	v1=(3.0/4.0)*PI*r*r*r;
	v2=PI*r*r*h1;

	//5.输出数据
	printf("圆周长c3=%.2f\n",c3);
	printf("圆面积s4=%.2f\n",s4);
	printf("圆球表面积s5=%.2f\n",s5);
	printf("圆球体积v1=%.2f\n",v1);
	printf("圆柱体积v2=%.2f\n",v2);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	输入一个华氏温度，要求输出摄氏温度
一般形式：	exercise3_2()
参数说明：			
返 回 值：	字符型数据
调用形式：	exercise3_2()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int exercise3_2()
{	
	//17.第三章习题7	输入一个华氏温度，要求输出摄氏温度
	printf("17.习题7  输入一个华氏温度，要求输出摄氏温度\n");
	
	//3.获取数据 
	printf("请输入一个华氏温度F=");
	scanf("%f",&F);
	
	//4.处理数据
	c4=5*(F-32)/9;
	
	//5.输出数据
	printf("输出一个摄氏温度c4=%.2f\n",c4);
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
函数功能:	用getchar函数读入两个字符给c1,c2,然后用putchar,printf分别输出这两个字符
一般形式：	exercise3_3()
参数说明：			
返 回 值：	字符
调用形式：	exercise3_3()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int exercise3_3()
{
	//18.第三章习题8	用getchar函数读入两个字符给c1,c2,然后用putchar,printf分别输出这两个字符
	printf("18.习题8  用getchar函数读入两个字符给c1,c2,然后用putchar,printf分别输出这两个字符\n");
	
	//3.获取数据
	printf("请输入一个字符c1=");
	getchar ();
	c1=getchar();
	printf("请输入一个字符c2=");
	getchar();
	c2=getchar();

	//4.处理数据

	//5.输出数据
	printf("用putchar语句输出结果为：\n");
	putchar(c1);
	putchar(c2);
	putchar('\n');
	printf("用printf语句输出结果为：\n");
	printf("%c\n",c1);
	printf("%c\n",c2);
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
