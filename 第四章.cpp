/*
****************************************************************************************************************************************
												   1240068  王陈晨
//2012.11.18 18.30-22.30
//1.第四章例题4.1  输入两个实数，按代数值由小到大的顺序输出这两个数  p80-81
//2.第四章例题4.2  输入三个数a,b,c,要求按由小到大的顺序输出  p80-81
//3.第四章例题4.3  输出复合函数的值  p82-83
//4.第四章例题4.4  输入一个字符，判别它是否是大写字母，如果是，将它转化成小写字母，反之不转化，输出得到的字符  p86-87
//5.第四章例题4.5  写程序，判断某一年是否是瑞年  p89-90
//6.第四章例题4.6  求ax^2+bx+c=0方程的解  p90-91
//7.第四章例题4.7  运输公司对用户计算运费  p92-93

//2012.11.18 19:00-22:00
//8. 第四章习题第3题  写出下面各逻辑表达式的值。设a=3,b=4,c=5  p94-95
//9. 第四章习题第4题  有三个整数a,b,c,由键盘输入，输出其中的最大的数，请编程序  p95
//10.第四章习题第5题  按定义输入x的值，输出分段函数y的值  p95
//11.第四章习题第6题  给出一百分制成绩，要求输出成绩等级'A','B','C','D','E'  p95
//12.第四章习题第7题  给一个不多于五位的正整数，要求(1)求出它是几位数(2)分别输出每一个数字(3)按逆序输出各位数字  p95
//13.第四章习题第8题  从键盘输入当月利润I，求应发奖金总数  p95
//14.第四章习题第9题  输入四个整数，要求按由小到大的顺序输出  p95
//15.第四章习题第10题 今输入任一点的坐标，求该点的建筑高度  p95
****************************************************************************************************************************************
*/
//说明：
//****************************************
//问题1：由于时间问题，函数说明有的不准确*(问题已解决)
//问题：最早做的时候没有用tab键			 *(问题已解决)
//****************************************
//第四章习题（8道）和例题（7道）

#include "head.h"
#include "fourth.h"
#include <windows.h>
int system(const char *string);
int choose4=0;//定义全局变量
int choos4=0;//定义全局变量


int number_4()
{
start:
	//用户提示信息

	printf("☆欢迎进入《C程序设计教程》第四章！☆\n");
	printf("*****************************************************************************\n");
	printf("*1. 第四章例题4.1 输入两个实数,按代数值由小到大的顺序输出这两个数  p80-81   *\n");
	printf("*2. 第四章例题4.2 输入三个数a,b,c,要求按由小到大的顺序输出  p80-81          *\n");
	printf("*3. 第四章例题4.3 输出复合函数的值  p82-83                                  *\n");                                                
	printf("*4. 第四章例题4.4 输入一个字符,判别它是否是大写字母,如果是,将它转化成小写字 *\n");
	printf("*   母,反之不转化,输出得到的字符  p86-87                                    *\n");                             
	printf("*5. 第四章例题4.5 写程序,判断某一年是否是瑞年  p89-90                       *\n"); 
	printf("*6. 第四章例题4.6 求ax^2+bx+c=0方程的解  p90-91                             *\n");                                                           
	printf("*7. 第四章例题4.7 运输公司对用户计算运费  p92-93                            *\n");                                                            
	printf("*8. 第四章习题4.3 写出下面各逻辑表达式的值 设a=3,b=4,c=5  p94-95            *\n");
	printf("*9. 第四章习题4.4 有三个整数a,b,c,由键盘输入,输出其中的最大的数,请编程序 p95*\n");
	printf("*10.第四章习题4.5 按定义输入x的值,输出分段函数y的值  p95                    *\n");
	printf("*11.第四章习题4.6 给出一百分制成绩,要求输出成绩等级'A','B','C','D','E'  p95 *\n");
	printf("*12.第四章习题4.7 给一个不多于五位的正整数,要求(1)求出它是几位数(2)分别输出 *\n");
	printf("*   每一个数字(3)按逆序输出各位数字  p95                                    *\n");
	printf("*13.第四章习题4.8 从键盘输入当月利润I,求应发奖金总数  p95                   *\n");
	printf("*14.第四章习题4.9 输入四个整数,要求按由小到大的顺序输出  p95                *\n");
	printf("*15.第四章习题4.10今输入任一点的坐标,求该点的建筑高度  p95                  *\n");
	printf("*16.返回主菜单。                                                            *\n");
	printf("*17.退出。                                                                  *\n");
	printf("*****************************************************************************\n");

	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch (choose4)
	{
		case 1:	system("cls");
				example4_1();
				break;

		case 2:	system("cls");
				example4_2();
				break;

		case 3:	system("cls");
				example4_3();
				break;

		case 4:	system("cls");
				example4_4();
				break;

		case 5:	system("cls");
				example4_5();
				break;

		case 6:	system("cls");
				example4_6();
				break;

		case 7:	system("cls");
				example4_7();
				break;

		case 8:	system("cls");
				exercise4_1();
				break;

		case 9:	system("cls");
				exercise4_2();
				break;

		case 10: system("cls");
				exercise4_3();
				break;

		case 11: system("cls");
				exercise4_4();
				break;

		case 12:system("cls");
				exercise4_5();
				break;

		case 13:system("cls");
				exercise4_6();
				break;

		case 14:system("cls");
				exercise4_7();
				break;
				
		case 15:system("cls");
				exercise4_8();
				break;

		case 16:system("cls");
				main();
				break;

		case 17:system("cls");
				goto end;	
				break;
		
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	输入两个整数，按代数值由小到大的顺序输出这两个数
一般形式：	example4_1()
参数说明：			
返 回 值：	整数
调用形式：	example4_1()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int example4_1()
{
	//1. 第四章例题4.1	输入两个整数，按代数值由小到大的顺序输出这两个数  p80-81
	printf("1.例题4.1  输入两个整数，按代数值由小到大的顺序输出这两个数\n");

	//3.获取数据
	printf("请输入一个整数a=");
	scanf("%d",&a);
	printf("请输入一个整数b=");
	scanf("%d",&b__);

	//4.处理数据
	if (a>b__)
	{
	  c__=a;
	  d=b__;
	}
	else 
	{
	  c__=b__;
	  d=a;
	}

	//5.输出数据
	printf("%d,%d\n",d,c__);
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	输入三个数a,b,c,要求按由小到大的顺序输出
一般形式：	example4_2()
参数说明：			
返 回 值：	整数
调用形式：	example4_2()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int example4_2()
{
	//2. 第四章例题4.2	输入三个数a,b,c,要求按由小到大的顺序输出 p80-81
	printf("2.例题4.2  输入三个数a,b,c,要求按由小到大的顺序输出\n");

	//3.获取数据
	printf("请输入一个整数a=");
	scanf("%d",&a);
	printf("请输入一个整数b=");
	scanf("%d",&b__);
	printf("请输入一个整数c=");
	scanf("%d",&c__);
	

	//4.处理数据
	if (a>b__)
	{
		t=a;
		a=b__;
		b__=t;
	}
	if (a>c__)
	{
		t=a;
		a=c__;
		c__=t;
	}
	if (b__>c__)
	{
		t=b__;
		b__=c__;
		c__=t;
	}

	//5.输出数据
	printf("由小到大输出三个整数的值%d,%d,%d\n",a,b__,c__);
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	输出复合函数的值
一般形式：	example4_3()
参数说明：			
返 回 值：	实数
调用形式：	example4_3()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int example4_3()
{
	//3. 第四章例题4.3	输出复合函数的值
	printf("3.例题4.3  输出复合函数的值\n");

	//3.获取数据
	printf("请输入一个整数x=");
	scanf("%d",&x);
	
	//4.处理数据
	if (x<0)
	{ 
		y=-1;
	}
	else
	if(x==0)
	{
		y=0;
	}
	else
	{
		y=1;
	}
	
	//5.输出数据
	printf("x=%d,y=%d\n",x,y);
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	输入一个字符，判别它是否是大写字母，如果是，将它转化成小写字母，反之不转化，输出得到的字符
一般形式：	example4_4()
参数说明：			
返 回 值：	字符
调用形式：	example4_4()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int example4_4()
{
	//4. 第四章例题4.4  输入一个字符，判别它是否是大写字母，如果是，将它转化成小写字母，反之不转化，输出得到的字符
	printf("4.例题4.4  输入一个字符，判别它是否是大写字母，如果是，将它转化成小写字母，反之不转化，输出得到的字符\n");

	//3.获取数据
	printf("请输入一个字符型数据ch= ");
	//	    scanf("%c",& ch);
	getchar();
	ch=getchar();
	
	//4.处理数据
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;//条件运算符"a?b:c"，满足a执行b，反之执行c
	
	//5.输出数据
	printf("%c\n",ch);
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	写程序，判断某一年是否是瑞年
一般形式：	example4_5()
参数说明：			
返 回 值：	整数
调用形式：	example4_5()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int example4_5()
{
	//5. 第四章例题4.5 写程序，判断某一年是否是瑞年
	printf("5.例题4.5  写程序，判断某一年是否是瑞年\n");

	//3.获取数据
	printf("请输入一个年份year= ");
	scanf("%d",&year);
	//4.处理数据	//5.输出数据
	if (year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				leap=1;
			}
			else
			{
				leap=0;
			}
		}
		else
		{
			leap=1;
		}
	}
	else
	{
		leap=0;
	}
	if(leap)
	{
		printf("%d is ",year);
	}
	else
	{
		printf("%d is not ",year);
		printf("a leap year.\n");
	}
		printf("\n");
	//构造循环界面	
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	求ax^2+bx+c=0方程的解
一般形式：	example4_6()
参数说明：			
返 回 值：	实数
调用形式：	example4_6()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int example4_6()
{
	//6. 第四章例题4.6 求ax^2+bx+c=0方程的解
	printf("6.例题4.6  求ax^2+bx+c=0方程的解 \n");

	//3.获取数据
	printf("请输入二元一次方程二次项的系数g=");
	scanf("%f",&g);
	printf("请输入二元一次方程一次项的系数h=");
	scanf("%f",&h_);	  
	printf("请输入二元一次方程常数项项的系数i=");
	scanf("%f",&i);
	printf("该二元一次方程的解");
	
	//4.处理数据	//5.输出数据
	if(fabs(g)<=1e-6)
	{
		printf("is not a quadratic\n");
	}
	else
	{
		disc_=h_*h_-4*g*i;
		if (fabs(disc_)<=1e-6)
		{
			printf("该方程有两个相等根：%8.4f\n",-h_/(2*g));
		}
		else if(disc_>1e-6)
		{
			x1_=(-h_+sqrt(disc_))/(2*g);
			x2_=(-h_-sqrt(disc_))/(2*g);
			printf("该方程有两个不等根：%8.4fand%8.4f\n",x1_,x2_);
		}
		else 
		{
			realpart=-h_/(2*g);
			imagpart=sqrt(-disc_)/(2*g);
			printf("该方程有复数根：\n");
			printf("%8.4f+%8.4fi\n",realpart,imagpart);
			printf("%8.4f-%8.4fi\n",realpart,imagpart);
		}
	printf("\n");
	}
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	运输公司对用户计算运费
一般形式：	example4_7()
参数说明：			
返 回 值：	实数
调用形式：	example4_7()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int example4_7()
{
	//7. 第四章例题4.7  运输公司对用户计算运费p92-93
	printf("7.例题4.7  运输公司对用户计算运费\n");
	
	//3.获取数据
	printf("please enter price:(浮点型数据)");
	scanf("%f",&p__);
	printf("please enter weight:(浮点型数据)");
	scanf("%f",&w);
	printf("please enter distance:(整型数据)");
	scanf("%d",&s_);
	
	//4.处理数据
	if(s_>=3000) 
	{
		c1=12;
	}
	else
	{
		c1=s_/250;
	}  
	switch(c1)
	{
		case 0:d1=0;break;
		case 1:d1=2;break;
		case 2:
		case 3:d1=5;break;
		case 4:
		case 5:
		case 6:
		case 7:d1=8;break;
		case 8:
		case 9:
		case 10:
		case 11:d1=10;break;
		case 12:d1=15;break;
	}
	f1=p__*w*s_;
	
	//5.输出数据	  
	printf("freight=%10.2f\n",f1);
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	写出下面各逻辑表达式的值。设a=3,b=4,c=5
一般形式：	exercise4_1()
参数说明：			
返 回 值：	整数
调用形式：	exercise4_1()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*///输入整数其后程序正常运行，小数则不行	
int exercise4_1()
{	  
	//8.第四章习题第3题	写出下面各逻辑表达式的值。设a=3,b=4,c=5
	printf("8.习题第3题  写出下面各逻辑表达式的值。设a=3,b=4,c=5\n");

	//2.变量赋初值
	a=3;
	b__=4;
	c__=5;
	
	//3.获取数据
	
	//4.处理数据
	
	//5.输出数据
	printf("1. a+b__ > c__ && b__ ==c__    => %d\n",a+b__ > c__ && b__ ==c__);	
	printf("1. ((a+b__) > c__) && (b__ == c__)    => %d\n",((a+b__) > c__) && (b__ == c__));	
	printf("2. a||b__ + c__ && b__ - c__   => %d\n",a||b__ + c__ && b__ - c__);	
	printf("3. !(a>b__) && !c__ || 1   => %d\n",!(a>b__) && !c__ || 1);	
	printf("4. !(x=a) && (y=b__) && 0  => %d\n",!(x=a) && (y=b__) && 0);	
	printf("5. !(a+b__)+c__-1 && b__+c__-1  => %d\n",!(a+b__)+c__-1 && b__+c__-1);	
	printf("\n");
//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	有三个整数a,b,c,由键盘输入，输出其中的最大的数，请编程序
一般形式：	exercise4_2()
参数说明：			
返 回 值：	整数
调用形式：	exercise4_2()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int exercise4_2()
{
	//9.第四章习题第4题	有三个整数a,b,c,由键盘输入，输出其中的最大的数，请编程序
	printf("9.习题第4题  有三个整数a,b,c,由键盘输入，输出其中的最大的数，请编程序\n");

	//3.获取数据
	printf("请输入一个整数a=");
	scanf("%d",&a);
	printf("请输入一个整数b=");
	scanf("%d",&b__);
	printf("请输入一个整数c=");
	scanf("%d",&c__);
	
	//4.处理数据
	if(a>b__)
	{
		iMax=a;
	}
	else 
	{
		iMax=b__;
	}
	if(iMax<c__)
	{
		iMax=c__;
	}
	
	//5.输出数据
	printf("iMax = %d\n",iMax);	 
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	按定义输入x的值，输出分段函数y的值
一般形式：	exercise4_3()
参数说明：			
返 回 值：	整数
调用形式：	exercise4_3()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int exercise4_3()
{
	//10. 第四章习题第5题	按定义输入x的值，输出分段函数y的值	
	printf("10.习题第5题  按定义输入x的值，输出分段函数y的值 \n");
	
	//3.获取数据
	printf("请输入一个整数 x = ");
	scanf("%d",&x);
	
	//4.处理数据	//5.输出数据
	if(x<1)
	{
		y=x;
	}
	if( (x>=1) && (x<10) )
	{
		y = 2*x -1 ;
	}
	if(x>=10)
	{
		y=3*x-11;
	}
	printf("y = %d\n",y);
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	给出一百分制成绩，要求输出成绩等级'A'(>=90),'B'(80-89),'C'(70-79),'D'(60-69),'E'(<60)
一般形式：	exercise4_4()
参数说明：			
返 回 值：	字符
调用形式：	exercise4_4()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int exercise4_4()
{	
	//11.第四章习题第6题  给出一百分制成绩，要求输出成绩等级'A'(>=90),'B'(80-89),'C'(70-79),'D'(60-69),'E'(<60)p95
	printf("11.习题第6题  给出一百分制成绩，要求输出成绩等级'A'(>=90),'B'(80-89),'C'(70-79),'D'(60-69),'E'(<60)\n");

	//3.获取数据
	printf("请输入一个百分制成绩d=");
	scanf("%d",&d);
	
	//4.处理数据   5.输出数据
	if (d>=90)
	{
		printf("输出成绩等级=A\n");
	}
	if ((d>=80)&(d<=89))
	{
		printf("输出成绩等级=B\n");
	}
	if ((d>=70)&(d<=79))
	{
		printf("输出成绩等级=C\n");
	}
	if ((d>=60)&(d<=69))
	{
		printf("输出成绩等级=D\n");
	}
	if (d<60)
	{
		printf("输出成绩等级=E\n");
	}
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	给一个不多于五位的正整数，要求(1)求出它是几位数(2)分别输出每一个数字(3)按逆序输出各位数字
一般形式：	exercise4_5()
参数说明：			
返 回 值：	整数
调用形式：	exercise4_5()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int exercise4_5()
{
	//12.第四章习题第7题  给一个不多于五位的正整数，要求(1)求出它是几位数(2)分别输出每一个数字(3)按逆序输出各位数字p95
	printf("12.习题第7题  给一个不多于五位的正整数，要求(1)求出它是几位数(2)分别输出每一个数字(3)按逆序输出各位数字\n");

	//3.获取数据
	printf("请输入一个不超过五位数的正整数a=");
	scanf("%d",&a);
	
	//4.处理数据    //5.输出数据
	if (a/10000!=0)
	{
		b1_=a/10000;
		a=a-b1_*10000;
		b2=a/1000;
		a=a-b2*1000;
		b3=a/100;
		a=a-b3*100;
		b4=a/10;
		a=a-b4*10;
		b5=a;
		printf("按逆序输出a的各位数字为=%d%d%d%d%d\n",b5,b4,b3,b2,b1_);
		printf("a是一个5位的正整数\n");
		printf("a的右第5位=%d\n",b1_);
		printf("a的右第4位=%d\n",b2);
		printf("a的右第3位=%d\n",b3);
		printf("a的右第2位=%d\n",b4);
		printf("a的右第1位=%d\n",b5);	  
	}
	else if((a/10000==0)&(a/1000!=0))
	{
		b2=a/1000;
		a=a-b2*1000;
		b3=a/100;
		a=a-b3*100;
		b4=a/10;
		a=a-b4*10;
		b5=a;
		printf("按逆序输出a的各位数字为=%d%d%d%d\n",b5,b4,b3,b2);
		printf("a是一个4位的正整数\n");
		printf("a的右第4位=%d\n",b2);
		printf("a的右第3位=%d\n",b3);
		printf("a的右第2位=%d\n",b4);
		printf("a的右第1位=%d\n",b5);
	}
	else if((a/1000==0)&(a/100!=0))
	{
		b3=a/100;
		a=a-b3*100;
		b4=a/10;
		a=a-b4*10;
		b5=a;
		printf("按逆序输出a的各位数字为=%d%d%d\n",b5,b4,b3);
		printf("a是一个3位的正整数\n");
		printf("a的右第3位=%d\n",b3);
		printf("a的右第2位=%d\n",b4);
		printf("a的右第1位=%d\n",b5);
	}
	else if((a/100==0)&(a/10!=0))
	{
		b4=a/10;
		a=a-b4*10;
		b5=a;
		printf("按逆序输出a的各位数字为=%d%d\n",b5,b4);
		printf("a是一个2位的正整数\n");
		printf("a的右第2位=%d\n",b4);
		printf("a的右第1位=%d\n",b5);
	}
	else 
	{
		b5=a;
		printf("按逆序输出a的各位数字为=%d%d\n",b5,b4);
		printf("a是一个1位的正整数\n");
		printf("a的右第1位=%d\n",b5);
	}
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	从键盘输入当月利润I，求应发奖金总数
一般形式：	exercise4_6()
参数说明：			
返 回 值：	实数
调用形式：	exercise4_6()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int exercise4_6()
{
	//13.第四章习题第8题(1)  从键盘输入当月利润I，求应发奖金总数 p95
	printf("13.1习题第8题  从键盘输入当月利润I，求应发奖金总数 \n");
	printf("13.1用if语句编程序\n");

	//3.获取数据
	printf("请输入当月利润I=");
	scanf("%f",&I);      
	
	//4.处理数据
	if (I<=100000)
	{
		P_=I*(0.1);
	}
	if ((I>100000)&&(I<=200000))
	{
		P_=10000.0+(I-100000.0)*(0.075);
	}
	if ((I>200000)&&(I<=400000))
	{
		P_=17500.0+(I-200000.0)*(0.05);
	}
	if ((I>400000)&&(I<=600000))
	{
		P_=27500.0+(I-400000.0)*(0.03);
	}
	if ((I>600000)&&(I<=1000000))
	{
		P_=33500.0+(I-600000.0)*(0.015);
	}
	if (I>1000000)
	{
		P_=39500.0+(I-1000000.0)*(0.001);
	}
	
	//5.输出数据
	printf("应发奖金数P=");
	printf("%f",P_);
	printf("\n\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	用switch语句编程序
一般形式：	exercise4_7()
参数说明：			
返 回 值：	实数
调用形式：	exercise4_7()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int exercise4_7()
{
	//3.第四章习题第8题(2) 用switch语句编程序  p95
	printf("13.2习题8	用switch语句编程序\n");

	//3.获取数据
	printf("请输入当月利润I=");
	scanf("%f",&I); 
	
	//4.处理数据
	if (I>1000000)
	{
		c__=10;
	}
	else 
	{
		c__=int (I)/100000;
	}
	switch (c__)
	{
		case 0: P_=I*(0.1);
		break;
		case 1: P_=10000+(I-100000)*(0.075);
		break;
		case 2: P_=17500+(I-200000)*(0.05);
		break;
		case 3: P_=17500+(I-200000)*(0.05);
		break;
		case 4: P_=27500+(I-400000)*(0.03);
		break;
		case 5: P_=27500+(I-400000)*(0.03);
		break;
		case 6: P_=33500+(I-600000)*(0.015);
		break;
		case 7: P_=33500+(I-600000)*(0.015);
		break;
		case 8: P_=33500+(I-600000)*(0.015);
		break;
		case 9: P_=33500+(I-600000)*(0.015);
		break;
		case 10: P_=39500+(I-1000000)*(0.001);
		break;
	}
	
	//5.输出数据
	printf("应发奖金数P_=");
	printf("%f\n\n",P_);
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	输入四个整数，要求按由小到大的顺序输出
一般形式：	exercise4_8()
参数说明：			
返 回 值：	整数
调用形式：	exercise4_8()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int exercise4_8()
{
	//14.第四章习题第9题  输入四个整数，要求按由小到大的顺序输出 p95
	printf("14.习题第9题  输入四个整数，要求按由小到大的顺序输出\n");

	//3.获取数据
	printf("请输入整数a=");
	scanf("%d",&a);
	printf("请输入整数b=");
	scanf("%d",&b__);
	printf("请输入整数c=");
	scanf("%d",&c__);
	printf("请输入整数d=");
	scanf("%d",&d);
	
	//4.处理数据
	if (a<b__)
	{
		t1=b__;
		t2=a;
	}
	else 
	{
		t1=a;
		t2=b__;
	}
	if (t1<c__)
	{
		t2=t1;
		t1=c__;
		t3=b__;
	}
	else if (t2<c__)
	{
		t3=t2;
		t2=c__;
	}   
	else 
	{
		t3=c__;
	}
	if (t1<d)
	{
		t1=d;
		t2=t1;
		t3=t2;
		t4=t3;
	}
	else if (t2<d)
	{
		t3=t2;
		t2=d;
		t4=t3;
	}
	else if (t3<d)
	{
		t4=t3;
		t3=d;
	}
	else 
	{
		t4=d;
	}

	//5.输出数据 
	printf("按从小到大的顺序输出a,b,c,d:");
	printf("%d ",t4);
	printf("%d ",t3);
	printf("%d ",t2);
	printf("%d \n",t1);
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
函数功能:	今输入任一点的坐标，求该点的建筑高度
一般形式：	exercise4_9()
参数说明：			
返 回 值：	实数
调用形式：	exercise4_9()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(格式修改)
===============================================================================
*/
int exercise4_9()
{
	//15.第四章习题第10题 今输入任一点的坐标，求该点的建筑高度 p95
	printf("15.习题第10题 今输入任一点的坐标，求该点的建筑高度\n");

	//3.获取数据
	printf("请输入点的横坐标m=");
	scanf("%f",&m_);
	printf("请输入点的纵坐标n=");
	scanf("%f",&n_);
	
	//4.处理数据
	a2=(m_-2)*(m_-2)+(n_-2)*(n_-2);
	b6=(m_+2)*(m_+2)+(n_-2)*(n_-2);
	c2=(m_+2)*(m_+2)+(n_+2)*(n_+2);
	d2=(m_-2)*(m_-2)+(n_+2)*(n_+2);
	if ((a2==1)||(b6==1)||(c2==1)||(d2==1))
	{
		printf("点(m,n)处建筑物的高度为100米\n");
	}
	else
	{
		printf("点(m,n)处建筑物的高度为0米\n");
	}
	
	//5.输出数据 
	printf("\n");
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
