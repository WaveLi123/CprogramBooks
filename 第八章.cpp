/*
***************************************************************************************************************************************************
															李伟康_1240069
//时间：2012_12_26
//1.例题8.1	通过指针变量访问整型变量	p191
//2.例题8.2	输入a和b两个整数,按先大后小的顺序输出	p191
//3.例题8.3	输入a和b两个整数,按先大后小的顺序输出（要求用函数处理，用指针变量作函数参数）	p192
//4.例题8.4	输入三个整数a,b,c,要求按大小顺序将他们输出。用函数实现改变这三个变量的值。	p196
//5.例题8.5（1、2、3）	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199
//6.例题8.6
//7.例题8.7
//8.例题8.8
//9.例题8.9
//10.例题8.10
//11.例题8.11
**************************************************************************************************************************
*/


#include "head.h"
#include "eighth.h"
#include <windows.h>
int system(const char *string);

int choose8=0;//定义全局变量
int choos8=0;//定义全局变量


int number_8()
{
start:
	//用户提示信息

	printf("☆欢迎进入《C程序设计教程》第八章！☆\n");
	printf("***************************************************************************\n");
	printf("*1. 第八章例题8.1 通过指针变量访问整型变量 p191                           *\n");
	printf("*2. 第八章例题8.2 输入a和b两个整数,按先大后小的顺序输出	p191              *\n");
	printf("*3. 第八章例题8.3 输入a和b两个整数,按先大后小的顺序输出(要求用函数处理,用 *\n");
	printf("*   指针变量作函数参数)p192                                               *\n");                                                
	printf("*4. 第八章例题8.4 输入三个整数a,b,c,要求按大小顺序将他们输出。用函数实现改*\n");
	printf("*   变这三个变量的值.p196                                                 *\n");                             
	printf("*5. 第八章例题8.5.1 有一个整型数组a，有十个元素，输出数组中的全部元素.p199*\n"); 
	printf("*6. 第八章例题8.5.2                                                       *\n");                                                           
	printf("*7. 第八章例题8.5.3                                                       *\n");                                                            
	printf("*8. 第八章例题8.6                                                         *\n");
	printf("*9. 第八章例题8.7                                                         *\n");
	printf("*10.第八章例题8.8                                                         *\n");
	printf("*11.第八章例题8.9                                                         *\n");
	printf("*12.第八章例题8.10                                                        *\n");
	printf("*13.第八章例题8.11                                                        *\n");
	printf("*14.返回主菜单                                                            *\n");
	printf("*15.退出                                                                  *\n");
	printf("***************************************************************************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch (choose8)
	{
		case 1:	system("cls");
				example8_1();
				break;

		case 2:	system("cls");
				example8_2();
				break;

		case 3:	system("cls");
				example8_3();
				break;

		case 4:	system("cls");
				example8_4();
				break;

		case 5:	system("cls");
				example8_5_1();
				break;

		case 6:	system("cls");
				example8_5_2();
				break;

		case 7:	system("cls");
				example8_5_3();
				break;

		case 8:	system("cls");
				example8_6();
				break;

		case 9:	system("cls");
				example8_7();
				break;

		case 10: system("cls");
				example8_8();
				break;

		case 11: system("cls");
				example8_9();
				break;

		case 12:system("cls");
				example8_10();
				break;

		case 13:system("cls");
				example8_11();
				break;

		case 14:system("cls");
				main();
				break;

		case 15:system("cls");
				goto end;	
				break;
		
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
函数功能：通过指针变量访问整型变量
一般形式：void example1()
参数说明：
			int a;
			int b;
			int *pointer_1;
			int *pointer_2;  
返回值：整数
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_1()
{
	//1.例题8.1	通过指针变量访问整型变量	p191
	printf("1.例题8.1	通过指针变量访问整型变量	p191\n");
	
	//1.定义变量类型
	int a;
	int b;
	int *pointer_1;
	int *pointer_2;

	//2.变量赋初值
	a=100;
	b=10;
	pointer_1=&a;
	pointer_2=&b;

	//3.获取数据

	//4.处理数据

	//5.输出数据
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("pointer_1=%d\n",*pointer_1);
	printf("pointer_2=%d\n\n",*pointer_2);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
函数功能：输入a和b两个整数,按先大后小的顺序输出
一般形式：void example2()
参数说明：	int a;
			int b;
			int *p1;
			int *p2;
			int *p;
            
返回值：整数
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_2()
{
	printf("2.例题8.2	输入a和b两个整数,按先大后小的顺序输出	p191\n");

	//1.定义变量类型
	int a;
	int b;
	int *p1;
	int *p2;
	int *p;

	//2.变量赋初值
	a=0;
	b=0;
	p1=&a;
	p2=&b;

	//3.获取数据
	printf("Please input an interger a=");
	scanf("%d",&a);
	printf("Please input an interger b=");
	scanf("%d",&b);

	//4.处理数据
	if (a<b)
	{
		p=p1;
		p1=p2;
		p2=p;
	}

	//5.输出数据
	printf("a=%d ",a);
	printf("b=%d \n",b);
	printf("Max=%d ",*p1);
	printf("Min=%d \n\n",*p2);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
函数功能：输入a和b两个整数,按先大后小的顺序输出（要求用函数处理，用指针变量作函数参数）
一般形式：void example3()
参数说明：	int a;
			int b;
			int *pointer_1;
			int *pointer_2;          
返回值：整数
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_3()
{
	//3.例题8.3	输入a和b两个整数,按先大后小的顺序输出（要求用函数处理，用指针变量作函数参数）	p192
	printf("3.例题8.3	输入a和b两个整数,按先大后小的顺序输出（要求用函数处理，用指针变量作函数参数）	p192\n");
	void swap(int *p1,int *p2);

	//1.定义变量类型
	int a;
	int b;
	int *pointer_1;
	int *pointer_2;

	//2.变量赋初值
	a=0;
	b=0;
	pointer_1=&a;
	pointer_2=&b;

	//3.获取数据
	printf("please input an interger a=");
	scanf("%d",&a);
	printf("Please input an interger b=");
	scanf("%d",&b);

	//4.处理数据
	if (a<b)
	{
		swap(pointer_1,pointer_2);
	}

	//5.输出数据
	printf("Max=%d\n",*pointer_1);
	printf("Min=%d\n\n",*pointer_2);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}




/*
=================================================================
函数功能：输入三个整数a,b,c,要求按大小顺序将他们输出。用函数实现改变这三个变量的值。	p196
一般形式：void example4()
参数说明：
			int a;
			int b;
			int c;
			int *pointer_1;
			int *pointer_2;
			int *pointer_3;
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_4()
{
	//4.例题8.4	输入三个整数a,b,c,要求按大小顺序将他们输出。用函数实现改变这三个变量的值。	p196
	printf("4.例题8.4	输入三个整数a,b,c,要求按大小顺序将他们输出。用函数实现改变这三个变量的值。	p196\n");
	void exchange(int *p1,int *p2,int *p3);

	//1.定义变量类型
	int a;
	int b;
	int c;
	int *pointer_1;
	int *pointer_2;
	int *pointer_3;

	//2.变量赋初值
	a=0;
	b=0;
	c=0;
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;

	//3.获取数据
	printf("Please input an interger a=");
	scanf("%d",&a);
	printf("Please input an interger b=");
	scanf("%d",&b);
	printf("Please input an interger c=");
	scanf("%d",&c);

	//4.处理数据
	exchange(pointer_1,pointer_2,pointer_3);

	//5.输出数据
	printf("The order of the three intergers is %d,%d,%d\n\n",*pointer_1,*pointer_2,*pointer_3);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void exchange(int *p1,int *p2,int *p3)
{
	void swap(int *p4,int *p5);
	if (*p1<*p2)
	{
		swap(p1,p2);
	}
	if (*p1<*p3)
	{
		swap(p1,p3);
	}
	if (*p2<*p3)
	{
		swap(p2,p3);
	}
}
void swap2(int *p4,int *p5)
{
	int temp;
	if (*p4<*p5)
	{
		temp=*p4;
		*p4=*p5;
		*p5=temp;
	}

}





/*
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_5_1()
{
	//5.例题8.5	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199
	printf("5.例题8.5_1有一个整型数组a，有十个元素，输出数组中的全部元素。(下标法)	p199\n");

	//1.定义变量类型
	int	s[10];
	int i;

	//2.变量赋初值
	i=0;

	//3.获取数据
	printf("Please input an array of 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}

	//4.处理数据

	//5.输出数据
	printf("The numbers of the array are\n ");
	for (i=0;i<10;i++)
	{
		printf("%3d",s[i]);
	}
	printf("\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_5_2()
{
	//5.例题8.5	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199
	printf("5.例题8.5_2	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199\n");

	//1.定义变量类型
	int	s[10];
	int i;

	//2.变量赋初值
	i=0;

	//3.获取数据
	printf("Please input an array of 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}

	//4.处理数据

	//5.输出数据
	printf("The numbers of the array are\n ");
	for (i=0;i<10;i++)
	{
		printf("%3d",*(s+i));
	}
	printf("\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_5_3()
{
//5.例题8.5	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199
	printf("5.例题8.5_3	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199\n");
//1.定义变量类型
	int s[10];
	int *p;
	int i;
//2.变量赋初值
	i=0;;
//3.获取数据
	printf("Please input an array of 10 numbers:");
	for (i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}
//4.处理数据

//5.输出数据
	printf("The numbers of the array are \n");
	for (p=s;p<s+10;p++)
	{
		printf("%3d",*p);
	}
	printf("\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_6()
{
	//5.例题8.6		p199
	printf("6.例题8.6	p199\n");

	//1.定义变量类型
	int i;
	int *p;
	int a[10];

	//2.变量赋初值
	p=a;

	//3.获取数据
	printf("Please input 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",p++);
	}

	//4.处理数据
	p=a;

	//5.输出数据
	for (i=0;i<10;i++,p++)
	{
		printf("%5d",*p);
	}
	printf("\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
void inv(int *x,int n);
int example8_7()
{
	//5.例题8.7
	printf("7.例题8.7	\n");

	//1.定义变量类型
	int i;
	int a[10]={3,7,9,11,0,6,7,5,4,2};

	//2.变量赋初值

	//3.获取数据

	//4.处理数据
	printf("The original array :\n");
	for (i=0;i<10;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	inv(a,10);

	//5.输出数据
	printf("The array has been inverted:\n");
	for (i=0;i<10;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void inv(int *x,int n)
{
	//1.定义变量类型
	int *p;
	int *i;
	int *j;
	int temp;
	int m;

	//2.变量赋初值
	m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;

	//3.获取数据

	//4.处理数据
	for (;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}

	//5.输出数据
	return;
}




/*
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
void inv1(int *x,int n);
int example8_8()
{
	//5.例题8.7
	printf("8.例题8.8	\n");

	//1.定义变量类型
	int i;
	int a[10];
	int *p;

	//2.变量赋初值
	p=a;

	//3.获取数据
	printf("Please input 10 numbers:\n");
	for (i=0;i<10;i++,p++)
	{
		scanf("%5d",p);
	}
	printf("\n");

	//4.处理数据
	p=a;
	inv(p,10);

	//5.输出数据
	printf("The array has been inverted:\n");
	for (p=a;p<a+10;p++)
	{
		printf("%5d",*p);
	}
	printf("\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void inv1(int *x,int n)
{
	//1.定义变量类型
	int *p;
	int *i;
	int *j;
	int temp;
	int m;

	//2.变量赋初值
	m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;

	//3.获取数据

	//4.处理数据
	for (;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}

	//5.输出数据
	return;
}






/*
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
void so_rt(int x[],int n);
int example8_9()
{
	//5.例题8.5	
	printf("9.例题8.9	\n");

	//1.定义变量类型
	int i;
	int *p;
	int a[10];

	//2.变量赋初值
	p=a;

	//3.获取数据
	printf("please input 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",p++);
	}

	//4.处理数据
	p=a;
	so_rt(a,10);

	//5.输出数据
	printf("The order of the 10	numbers	:\n");
	for (p=a,i=0;i<10;i++,p++)
	{
		printf("%5d",*p);
	}
	printf("\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void so_rt(int x[],int n)
{
	//1.定义变量类型
	int i;
	int j;
	int k;
	int t;

	//2.变量赋初值
	i=0;
	j=0;
	k=0;
	t=0;

	//3.获取数据
	
	//4.处理数据
	for (i=0;i<n-1;i++)
	{
		k=i;
		for (j=i+1;j<n;j++)
		{
			if (x[j]>x[k])
			{
				k=j;
				if (i!=j)
				{
					t=x[i];
					x[i]=x[k];
					x[k]=t;
				}
			}
		}
	}
	
	//5.输出数据
}





/*
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_10()
{
	//5.例题8.5	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199
	printf("10.例题8.10	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199\n");

	//1.定义变量类型
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int *p;

	//2.变量赋初值

	//3.获取数据

	//4.处理数据
	for (p=a[0];p<a[0]+12;p++)
	{
		if ((p-a[0])%4==0)
		{
			printf("\n");
		}
		printf("%5d",*p);
	}

	//5.输出数据
	printf("\n\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
函数功能：引用数组元素
一般形式：void example1()
参数说明：
          int i
        int a[N]  
返回值：整数，数组
调用形式：
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_11()
{
	//5.例题8.5	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199
	printf("11.例题8.11	有一个整型数组a，有十个元素，输出数组中的全部元素。	p199\n");

	//1.定义变量类型
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int i;
	int j;
	int *p;
	int (*i_p)[4];

	//2.变量赋初值
	i_p=a;

	//3.获取数据
	for (p=a[0];p<a[0]+12;p++)
	{
		if ((p-a[0])%4==0)
		{
			printf("\n");
		}
		printf("%5d",*p);
	}
	printf("\n");
	printf("please input the location :\n");
	scanf("i=% d",&i);
	scanf("j=% d",&j);

	//4.处理数据

	//5.输出数据
	printf("a[% d,% d]=% d\n",i,j,*(*(i_p+i)+j));

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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

