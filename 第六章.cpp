/*
********************************************************************************************************************
											1240069_李伟康
//2012_11.20_9:30
//1.例6.1  引用数组元素。利用循环给数组元素a【0】-a【9】赋值0-9，然后按逆序输出各元素的值  p116
//2.例6.2  用数组来处理Fibonacci数列问题   p117
//3.例6.3  输入10个数，用起泡法对这10个数排序（由小到大）  p118
//4.例6.4  将一个二维数组a的行和列的元素互换（即行列转制），存到另一个二维数组b中   p122
//5.例6.5  有一个3*4的二维数组a，要求编程序求出其中值最大的那个元素的值，以及其所在的行号和列号  p123
//6.例6.6  输出一个字符串  P125
//7.例6.7  输出一个菱形图  p126
//8.例6.8  输入一行字符，统计其中有多少个单词，单词之间用空格分开  p134
//9.例6.9  有三个字符串，要求找出其中的最大者  136

//2012_12.7_10:00
//1.习题6.1	用筛选法求100之内的素数 p138				
//2.习题6.2	用选择法对10个整数排序	p138
//3.习题6.3	求一个3*3的整型二维数组对角线元素之和	P138
//4.习题6.4	有一个已排好的数组，要求输入一个数后，按原来数的规律将它插入数组中	p138
//5.习题6.5	将一个数组中的值按逆序排列	p138
//6.习题6.6 输出十行的杨辉三角数	p138
//7.习题6.7 输出魔方阵	P138
//8.习题6.8	找出一个二维数组中的鞍点（即该位置上的元素在该行上最大、在该列上最小），也可能没有鞍点	p138
//9.习题6.9	在一个含15个数的数组中折半查找某数是否在这其中	p138
//10.习题6.10	统计出一篇文章中所含的英文大写字母、小写字母、数字、空格、以及其他字符数	p138
//11.习题6.11	输出以下图案	p139
//12.习题6.12	编一个程序，用来解密文件	p139
//13.习题6.13	编一个程序，将两个字符串连接起来	p139
//14.习题6.14	编一个程序，将两个字符串比较	p139
//15.习题6.15	编一个程序，将一个程序复制到另一个程序上	p139
********************************************************************************************************************
*/


#include "head.h"
#include "sixth.h"
#include <windows.h>
int system(const char *string);
int choose6;//定义全局变量
int choos6;//定义全局变量
int number_6()
{	
start:
	//用户界面提示
	printf("☆欢迎进入《C程序设计教程》第六章！☆\n");
	printf("*******************************************************************************\n");
    printf("*1. 例6.1 引用数组元素。利用循环给数组元素a【0】-a【9】赋值0-9，然后按逆序输出*\n");
	printf("*   各元素的值                                                            p116*\n");
	printf("*2. 例6.2 用数组来处理Fibonacci数列问题                                   p117*\n");
	printf("*3. 例6.3 输入10个数，用起泡法对这10个数排序(由小到大)                    p118*\n");
	printf("*4. 例6.4 将一个二维数组a的行和列的元素互换(即行列转制),存到另一个二维数组b中 *\n");
	printf("*   p122                                                                      *\n");
	printf("*5. 例6.5 有一个3*4的二维数组a,要求编程序求出其中值最大的那个元素的值,以及其所*\n");
    printf("*   在的行号和列号                                                        p123*\n");
	printf("*6. 例6.6 输出一个字符串                                                  P125*\n");
	printf("*7. 例6.7 输出一个菱形图                                                  p126*\n");
	printf("*8. 例6.8 输入一行字符,统计其中有多少个单词,单词之间用空格分开            p134*\n");
	printf("*9. 例6.9 有三个字符串,要求找出其中的最大者                               p136*\n");
	printf("*10.习题6.1 用筛选法求100之内的素数                                       p138*\n");
	printf("*11.习题6.2 用选择法对10个整数排序                                        p138*\n");
	printf("*12.习题6.3 求一个3*3的整型二维数组对角线元素之和                         P138*\n");
	printf("*13.习题6.4 有一个已排好的数组,要求输入一个数后,按原数的规律将它插入数组中p138*\n");
	printf("*14.习题6.5 将一个数组中的值按逆序排列                                    p138*\n");
	printf("*15.习题6.6 输出十行的杨辉三角数                                          p138*\n");
	printf("*16.习题6.7 输出魔方阵                                                    P138*\n");
	printf("*17.习题6.8 找出一个二维数组中的鞍点(即该位置上的元素在该行上最大|在该列上最小*\n");
	printf("*   也可能没有鞍点                                                        p138*\n");
	printf("*18.习题6.9 在一个含15个数的数组中折半查找某数是否在这其中                p138*\n");
	printf("*19.习题6.10 统计出一篇文章中所含的英文大写字母、小写字母、数字、空格、以及其 *\n");
	printf("*   他字符数                                                              p139*\n");
	printf("*20.习题6.11 输出以下图案                                                 p139*\n");
	printf("*21.习题6.12 编一个程序,用来解密文件                                      p139*\n");
	printf("*22.习题6.13 编一个程序,将两个字符串连接起来                              p139*\n");
	printf("*23.习题6.14 编一个程序,将两个字符串比较                                  p139*\n");
	printf("*24.习题6.15 编一个程序,将一个程序复制到另一个程序上                      p139*\n");
	printf("*25.返回主菜单                                                                *\n");
	printf("*26.退出                                                                      *\n");
	printf("*******************************************************************************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch (choose6)
	{
		case 1:	system("cls");
				example6_1();
				break;

		case 2:	system("cls");
				example6_2();
				break;

		case 3:	system("cls");
				example6_3();
				break;

		case 4:	system("cls");
				example6_4();
				break;

		case 5:	system("cls");
				example6_5();
				break;

		case 6:	system("cls");
				example6_6();
				break;

		case 7:	system("cls");
				example6_7();
				break;

		case 8:	system("cls");
				example6_8();
				break;

		case 9:	system("cls");
				example6_9();
				break;

		case 10:system("cls");
				exercise6_1();
				break;

		case 11:system("cls");
				exercise6_2();
				break;

		case 12:system("cls");
				exercise6_3();
				break;

		case 13:system("cls");
				exercise6_4();
				break;

		case 14:system("cls");
				exercise6_5();
				break;

		case 15:system("cls");
				exercise6_6();
				break;

		case 16:system("cls");
				exercise6_7();
				break;

		case 17:system("cls");
				exercise6_8();
				break;

		case 18:system("cls");
				exercise6_9();
				break;

		case 19:system("cls");
				exercise6_10();
				break;

		case 20:system("cls");
				exercise6_11();
				break;

		case 21:system("cls");
				exercise6_12();
				break;

		case 22:system("cls");
				exercise6_13();
				break;

		case 23:system("cls");
				exercise6_14();
				break;

		case 24:system("cls");
				exercise6_15();
				break;

		case 25:system("cls");
				main();
				break;

		case 26:system("cls");
				goto end;	
				break;
		
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
时间：2012_11.20
作者：李伟康
创建、修改内容：
==================================================================
*/
int example6_1()
#define N 9
{
	//1.例6.1  引用数组元素。利用循环给数组元素a【0】-a【9】赋值0-9，然后按逆序输出各元素的值  p116
	printf("1.例6.1  引用数组元素。利用循环给数组元素a【0】-a【9】赋值0-9，然后按逆序输出各元素的值  p116\n");

	//1.定义变量类型 
    int i;
    int a[N];

	//2.变量赋初值
	for (i=0;i<=N;i++)
	{
		a[i]=i;
	}

	//3.获取数据

	//4.处理数据
	for (i=N;i>=0;i--)

	//5.输出数据
	printf("%-5d",a[i]);
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
==================================================================
函数功能：用数组来处理Fibonacci问题
一般形式：void example2()
参数说明：
          int i
      
返回值：  整数，数组
调用形式：
时间：    2012_11.20
作者：    李伟康
创建、修改内容：
==================================================================
*/  
int example6_2()
{
	//2.例6.2  用数组来处理Fibonacci数列问题   p117
	printf("2.例6.2  用数组来处理Fibonacci数列问题   p117\n");
	
	//1.定义变量类型
	int i;
	int f[20]={1,1};

	//2.变量赋初值

	//3.获取数据

	//4.处理数据
	for(i=2;i<20;i++)
	f[i]=f[i-2]+f[i-1];

	//5.输出数据
	for(i=0;i<20;i++)
	{
	if(i%5==0)
	printf("\n");
	printf("%12d",f[i]);
	}
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
==================================================================
函数功能：输入10个数，用起泡法对这10个数排序（由小到大）
一般形式：void example3()
参数说明：
          int i   XXXXXXXXXX
          int j   XXXXXXXXXX
		  int t   XXXXXXXXXX
返回值：  整数，数组
调用形式：
时间：    2012_11.20
作者：    李伟康
创建、修改内容：
==================================================================
*/  
int example6_3()
{
	//3.例6.3  输入10个数，用起泡法对这10个数排序（由小到大）  p118
	printf("3.例6.3  输入10个数，用起泡法对这10个数排序（由小到大）（输入时要空格）  p118\n");

	//1.定义变量类型
	int i;
	int j;
	int t;
	int a[10];

	//2.变量赋初值

	//3.获取数据
	printf("input 10 numbers ：\n");
	for (i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("\n");

	//4.处理数据
	for (j=0;j<9;j++)
	 for (i=0;i<9-j;i++)
	 if(a[i]>a[i+1])
	 {
		 t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
	 }

	//5.输出数据
	printf("The sorted numbers : \n");
	for(i=0;i<10;i++)
	printf("%-5d",a[i]);
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：将一个二维数组a的行和列的元素互换（即行列转制），存到另一个二维数组b中   p122
一般形式：void example4()
参数说明：
          int a[2][3]={{1,2,3},{4,5,6}};
		  int b[3][2];
		  int i;
		  int j;
返回值：  整数，数组
调用形式：
时间：    2012_11.20
作者：    李伟康
创建、修改内容：
==================================================================
*/  
int example6_4()
{
	//4.例6.4  将一个二维数组a的行和列的元素互换（即行列转制），存到另一个二维数组b中   p122
	printf("4.例6.4  将一个二维数组a的行和列的元素互换（即行列转制），存到另一个二维数组b中   p122\n");

	//1.定义变量类型
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	int i;
	int j;

	//2.变量赋初值

	//3.获取数据

	//4.处理数据
	printf("array a : \n");
	for (i=0;i<=1;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%5d",a[i][j]);
			b[j][i]=a[i][j];
		}
	printf("\n");
	}

	//5.输出数据
	printf("array b : \n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=1;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：有一个3*4的二维数组a，要求编程序求出其中值最大的那个元素的值，以及其所在的行号和列号  p123
一般形式：void example5()
参数说明：
		  int i;
		  int j;
		  int row;
		  int colum;
		  int max;
		  int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
返回值：  整数，数组
调用形式：
时间：    2012_11.20
作者：    李伟康
创建、修改内容：
==================================================================
*/
int example6_5()
{
	//例6.5  有一个3*4的二维数组a，要求编程序求出其中值最大的那个元素的值，以及其所在的行号和列号  p123
	printf("5.例6.5  有一个3*4的二维数组a，要求编程序求出其中值最大的那个元素的值，以及其所在的行号和列号  p123\n");

	//1.定义变量类型
	int i;
	int j;
	int row;
	int colum;
	int max;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
	
	//2.变量赋初值
	row=0;
	colum=0;
	
	//3.获取数据
	max=a[0][0];
	
	//4.处理数据
	for (i=0;i<=2;i++)
	{
	   for (j=0;j<=3;j++)
	   if(a[i][j]>max)
	   {	
		 max=a[i][j];
		 row=i;
		 colum=j;
	   }
	}
	
	//5.输出数据
	printf("max=%d\n",max);
	printf("row=%d\n",row);
	printf("colum=%d\n",colum);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输出一个字符串  P125
一般形式：void example6()
参数说明：
		  char c[11]={'I','','a','m','','a','','b','o','y','.'};
		  int i;
返回值：  整数，数组
调用形式：
时间：    2012_11.20
作者：    李伟康
创建、修改内容：
==================================================================
*/
int example6_6()
{
	//6.例6.6  输出一个字符串  P125
	printf("6.例6.6  输出一个字符串  P125\n");
	
	//1.定义变量类型
	char c[11]={'I',' ','a','m',' ','a',' ','b','o','y','.'};
	int i;
	
	//2.变量赋初值
	i=0;
	
	//3.获取数据

	//4.处理数据

	//5.输出数据
	for (i=0;i<11;i++)
	{
		printf("%c",c[i]);
	}
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输出一个菱形图  p126
一般形式：void example7()
参数说明：char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
  int i;
  int j;

返回值：  整数，数组
调用形式：
时间：    2012_11.20
作者：    李伟康
创建、修改内容：
==================================================================
*/
int example6_7()
{
	//7.例6.7  输出一个菱形图  p126
	printf("7.例6.7  输出一个菱形图  p126\n");

	//1.定义变量类型
	char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
	int i;
	int j;
	
	//2.变量赋初值
	i=0;
	j=0;
	
	//3.获取数据

	//4.处理数据  //5.输出数据
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("%C",diamond[i][j]);
		}
		printf("\n");
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输入一行字符，统计其中有多少个单词，单词之间用空格分开  p134
一般形式：void example8()
参数说明：
		  char string[81];
		  int i;
		  int num;
		  int word;
		  char c;
返回值：  整数，数组
调用形式：
时间：	  2012_11.20
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include<string.h>
int example6_8()
{
	//8.例6.8  输入一行字符，统计其中有多少个单词，单词之间用空格分开  p134
	printf("8.例6.8  输入一行字符，统计其中有多少个单词，单词之间用空格分开  p134\n");

	//1.定义变量类型
	char string[81];
	int i;
	int num;
	int word;
	char c;
	
	//2.变量赋初值
	i=0;
	num=0;
	word=0;
	c=0;
	
	//3.获取数据
	fflush(stdin);             //清除缓冲区。比如你逐个输入字符，他帮你缓冲掉你每输入一个字符后面所敲的回车键。否则回车也会被当成字符保存进去。
	fflush(stdout);            
	printf("请输入一行字符\n");//fflush(stdout);主要用于文件的操作。
	gets(string);
	
	//4.处理数据
	for (i=0;(c=string[i])!='\0';i++)
		if (c==' ')
		{
			word=0;
		}
		else if(word==0)
		{
			word=1;
			num++;
		}
	
	//5.输出数据
	printf("There are %d words in this line.\n",num);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输入一行字符，统计其中有多少个单词，单词之间用空格分开  p134
一般形式：void example8()
参数说明：
		  char string[81];
		  int i;
		  int num;
		  int word;
		  char c;
返回值：  整数，数组
调用形式：
时间：	  2012_11.20
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include<string.h>
int example6_9()
{
	//9.例6.9  有三个字符串，要求找出其中的最大者  136
	printf("9.例6.9  有三个字符串，要求找出其中的最大者(输入时要换行)  136\n");

	//1.定义变量类型
	char string[20];
	char str[3][20];
	int i;

	//2.变量赋初值


	//3.获取数据
	for (i=0;i<3;i++)
	{          
		gets(str[i]);
	}

	//4.处理数据
	if (strcmp(str[0],str[1])>0)
	{
		strcpy(string,str[0]);
	}
	else 
	{
		strcpy(string,str[1]);
	}
	if (strcmp(str[2],string)>0)
	{
		strcpy(string,str[2]);
	}

	//5.输出数据
	printf("\nThe largest string is : \n%s\n ",string);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输入一行字符，统计其中有多少个单词，单词之间用空格分开  p134
一般形式：void exercise1()
参数说明：
			int s[100];
			int i;
			int x;
			double m;
			int n;
			int p;
返回值：  整数，数组
调用形式：exercise1()
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include <math.h>
int exercise6_1()
{
	//1.习题6.1	用筛选法求100之内的素数 p138
	printf("1.习题6.1	用筛选法求100之内的素数 p138\n");

	//1.定义变量类型
	int s[101];
	int i;
	int j;
	int n;

	//2.变量赋初值
	for (i=1;i<=100;i++)
	{
		s[i]=i;
	}
	s[0]=0;
	j=0;
	n=0;

	//3.获取数据
	
	//4.处理数据
	for (i=2;i<sqrt(100);i++)
	{
		for (j=i+1;j<=100;j++)
		{
			if (s[i]!=0&&s[j]!=0)
			{
				if (s[j]%s[i]==0)
				{
					s[j]=0;
				}
			}
		}
	}
	printf("\n");

	//5.输出数据
	for (i=2,n=0;i<=100;i++)
	{
		if (s[i]!=0)
		{
			printf("%5d",s[i]);
		}
		n++;
	}
	if (n==10)
	{
		printf("\n");
		n=0;
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输入一行字符，统计其中有多少个单词，单词之间用空格分开  p134
一般形式：void exercise2()
参数说明：
		  	int s[10];
			int i;
			int j;
			int x;
			int min;
返回值：  整数，数组
调用形式：exercise2()
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
int exercise6_2()
{
	//2.习题6.2	用选择法对10个整数排序	p138
	printf("2.习题6.2	用选择法对10个整数排序	p138\n");

	//1.定义变量类型
	int i;
	int j;
	int s[11];
	int min;
	int temp;
	char ch;

	//2.变量赋初值
	min=0;
	temp=0;

	//3.获取数据
	printf("请输入十个整数的值:\n");
	for (i=1;i<=10;i++)
	{
		printf("s[%d]=",i);
		scanf("%d",&s[i]);
		ch=getchar();
	}
	printf("\n");
	printf("The original numbers:\n");
	for (i=1;i<=10;i++)
	{
		printf("%5d",s[i]);
	}
	printf("\n");

	//4.处理数据
	for (i=1;i<=9;i++)
	{
		min=i;
		for (j=i+1;j<=10;j++)
		{
			if (s[min]>s[j])
			{
				min=j;
				temp=s[i];
				s[i]=s[min];
				s[min]=temp;
			}
		}
	}

	//5.输出数据
	printf("\nThe sorted numbers :\n");
	for (i=1;i<=10;i++)
	{
		printf("%5d",s[i]);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：求一个3*3的整型二维数组对角线元素之和
一般形式：void exercise3()
参数说明：
			int i;
			int j;
			int sum;
			int sz[3][3];
返回值：  整数，数组
调用形式：exercise3()
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
int exercise6_3()
{
	//3.习题6.3	求一个3*3的整型二维数组对角线元素之和	P138
	printf("3.习题6.3	求一个3*3的整型二维数组对角线元素之和	P138\n");

	//1.定义变量类型
	int i;
	int j;
	int sum;
	int sz[3][3];

	//2.变量赋初值
	sum=0;

	//3.获取数据
	printf("请输入一个3*3维整型数组\n");
	fflush(stdin);
	fflush(stdout);
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("sz[%d][%d]=",i,j);
			scanf ("%d",&sz[i][j]);
		}
		printf("\n");
	}

	//4.处理数据
	sum=sz[0][0]+sz[1][1]+sz[2][2];

	//5.输出数据
	printf("该数组对角线元素之和为%d",sum);
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：有一个已排好的数组，要求输入一个数后，按原来数的规律将它插入数组中
一般形式：void exercise4()
参数说明：
		  	int sz[N];
			int x;
			int i;
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
int exercise6_4()
{
	//4.习题6.4	有一个已排好的数组，要求输入一个数后，按原来数的规律将它插入数组中	p138
	printf("4.习题6.4	有一个已排好的数组，要求输入一个数后，按原来数的规律将它插入数组中	p138\n");

	//1.定义变量类型
	int sz[10];
	int x;
	int i;
	char ch;
	int temp_1;
	int temp_2;

	//2.变量赋初值
	x=0;
	temp_1=0;
	temp_2=0;

	//3.获取数据
	printf("请按升序或降序输入一个含十个整数的数组\n");
	for (i=1;i<=10;i++)
	{
		scanf("%d",&sz[i]);
		ch=getchar();
	}
	printf("请再输入一个整数x=");
	scanf("%d",&x);

	//4.处理数据

	//5.输出数据
	if (sz[1]>sz[10])
	{
		for (i=2;i<=9;i++)
		{
			if (x<=sz[i-1]&&x>=sz[i])
			{
				printf("后输入的数应插入原数组的位数为%d\n",i);
			}
		}
	}
	if (sz[1]<sz[10])
	{
		for (i=2;i<=9;i++)
		{
			if (x>=sz[i-1]&&x<=sz[i])
			{
				printf("后输入的数应插入原数组的位数为%d\n",i);
			}
		}
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：将一个数组中的值按逆序排列	p138
一般形式：void exercise5()
参数说明：
			int sz[N];
			int i;
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#define F 10
int exercise6_5()
{
	//5.习题6.5	将一个数组中的值按逆序排列	p138
	printf("5.习题6.5	将一个含有%d数的数组中的值按逆序排列	p138\n",F);

	//1.定义变量类型
    int sz[F];							//一个含十个数的数组
	int i;
	int m;								//交换值时用作中间变量

	//2.变量赋初值
	m=0;
	i=0;

	//3.获取数据
	printf("请按升序或降序输入一个含10个整数的数组\n");
	for (i=0;i<F;i++)					//输入一个含十个数的数组
	{
		scanf("%d",&sz[i]);
		getchar();
	}

	//4.处理数据
	for (i=0;i<(F/2);i++)				//***交换中间值两侧对称的值
	{
		m=sz[i];
		sz[i]=sz[F-1-i];
		sz[F-1-i]=F;
	}

	//5.输出数据
	printf("原数组按逆序输出为：\n");
	for (i=0;i<F;i++)
	{
		printf("%5d",sz[i]);
	}
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
==================================================================
函数功能：输出十行的杨辉三角数	p138
一般形式：void exercise6()
参数说明：
		  int s[i][j];
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#define M  10
#define N  10
int exercise6_6()
{
	//6.习题6.6 输出十行的杨辉三角数	p138
	printf("6.习题6.6 输出十行的杨辉三角数	p138\n");

	//1.定义变量类型
	int s[M][N];								
	int i;
	int j;

	//2.变量赋初值
	i=0;
	j=0;

	//3.获取数据
	for (i=0;i<M;i++)					//***输入杨辉三角第一列和对角线的元素
	{
		s[i][0]=1;
		s[i][i]=1;
	}													
	for (i=2;i<M;i++)					//输入杨辉三角其他行列的元素
	{	
		for (j=1;j<i;j++)
		{			
			s[i][j]=s[i-1][j]+s[i-1][j-1];
		}		
	}

	//4.处理数据

	//5.输出数据
	printf("杨辉三角数前十行的数为：\n");
	for (i=0;i<M;i++)					//输出杨辉三角前十行十列的数
	{
		for (j=0;j<=i;j++)
		{
			printf("%6d",s[i][j]);
		}
		printf("\n");
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输入一行字符，统计其中有多少个单词，单词之间用空格分开  p138
一般形式：void exercise7()
参数说明：
		  char string[81];
		  int i;
		  int num;
		  int word;
		  char c;
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
备注：参考答案（受数学思想影响导致算法错误---应该运用计算机工程思想做题，注意运用数学归纳等方法找出规律，进而抽象为算法）
==================================================================
*/
#define M 4
#define N 5
int exercise6_7()
{
	//7.习题6.8 找出一个二维数组中的鞍点（即该位置上的元素在该行上最大、在该列上最小），也可能没有鞍点。	p138
	printf("8.习题6.8 找出一个二维数组中的鞍点（即该位置上的元素在该行上最大、在该列上最小），也可能没有鞍点。	p138\n");

	//1.定义变量类型
	int s[M][N];						//定义一个数组								
	int max;							//鞍点处的最大值
	int maxl;							//鞍点处的列标
	int i;								//行标
	int j;								//列标
	int flag;							//虚拟鞍点处

	//2.变量赋初值
	max=0;
	maxl=0;
	i=0;
	j=0;

	//3.获取数据
	printf("请输入一个%d行%d列的数组\n\b",M,N);
	for(i=0;i<M;i++)					//***输入一个m行n列的二维数组								
	{
		for (j=0;j<N;j++)
		{
			scanf("%d",&s[i][j]);		//***注意此法的应用
		}
	}

	//4.处理数据	//5.输出数据
	for (i=0;i<=M-1;i++)
	{	
		max=s[i][1];
		maxl=0;
		for (j=0;j<=N-1;j++)			//先找出行最大值
		{
			if (max<s[i][j])
			{
				max=s[i][j];
				maxl=j;
			}
			flag=1;						//先假设是鞍点，以flag为1来代表
		}
		for (j=0;j<N;j++)				//用行最大值与其所在列进行比较
		{
			if(max>s[i][maxl])
			{
				flag=0;
				continue;
			}
		}
		if (flag)						//条件判断选鞍点
		{
			printf("s[%d][%d]=%d\n",i,maxl,max);
			break;
		}
		if (!flag)
		{
			printf("该二维数组的鞍点不存在！\n");
		}
	
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输出魔方阵  p139
一般形式：void exercise8()
参数说明：
			int s[15][15];
			int i;
			int j;
			int k;
			int p;
			int n;
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
int exercise6_8()
{
	//1.习题6.1	输出魔方阵 p138
	printf("7.习题6.7	输出魔方阵 p138\n");

	//1.定义变量类型
	int s[15][15];
	int i;
	int j;
	int k;
	int p;
	int n;

	//2.变量赋初值
	i=0;
	j=0;
	k=0;
	p=1;
	n=0;

	//3.获取数据


	//4.处理数据
	while (p==1)
	{
		printf("Please enter n(n=1--15):");
		scanf("%d",&n);
		if ((n!=0)&&(n<=15)&&(n%2!=0))
		{
			p=0;
		}
	}
	for (i=0;i<n;i++)//魔方阵初始化
	{
		for (j=0;j<n;j++)
		{
			s[i][j]=0;
		}
	}
	j=n/2+1;
	s[i][j]=1;
	for (k=2;k<=n*n;k++)
	{
		i=i-1;
		j=j+1;
		if ((i<1)&&(i>n))
		{
			i=i+2;
			j=j-1;
		}
		else
		{
			if (i<1)
			{
				i=n;
			}
			if (j>n)
			{
				j=1;
			}
		}
		if (s[i][j]==0)
		{
			s[i][j]=k;
		}
		else
		{
			i=i+2;
			j=j-1;
			s[i][j]=k;
		}
	}

	//5.输出数据
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%5d",s[i][j]);
		}
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：在一个含15个数的数组中折半查找某数是否在这其中  p139
一般形式：void exercise9()
参数说明：
		  	int s[15];
			int i;
			int j;
			int top;
			int bott;
			int flag;
			int sign;
			int loca;
			int number;
			int mid;
			char c;
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#define N 15
int exercise6_9()
{
	//9.习题6.9	在一个含15个数的数组中折半查找某数是否在这其中 p138
	printf("9.习题6.9	在一个含15个数的数组中折半查找某数是否在这其中 p138\n");

	//1.定义变量类型
	int s[15];
	int i;
	int j;
	int top;
	int bott;
	int flag;
	int sign;
	int loca;
	int number;
	int mid;
	char c;

	//2.变量赋初值
	top=0;
	bott=0;
	flag=1;
	loca=0;
	number=0;
	mid=0;

	//3.获取数据
	printf("enter data:\n");
	scanf("%d",&s[0]);
	i=1;
	while (i<N)
	{
		scanf("%d",&s[i]);
		if (s[i]>s[i-1])
		{
			i++;
		}
		else
		{
			printf("enter this data again:\n");
		}
	}
	printf("\n");
	printf("the data of %d:",N);
	for (i=0;i<N;i++)
	{
		printf("%5d",s[i]);
	}
	printf("\n");

	//4.处理数据	//5.输出数据
	while (flag)
	{
		printf("input number to look for :");
		scanf("%d",&number);
		sign=0;
		top=0;
		bott=N-1;
		if ((number<s[0])||(number>s[N-1]))
		{
			loca=-1;
		}
		while ((!sign)&&(top<=bott))
		{
			mid=(top+bott)/2;
			if (number==s[mid])
			{
				loca=mid;
				printf("has found %d,its position is %d\n",number,loca+1);
				sign=1;
			}
			else if (number<s[mid])
			{
				bott=mid-1;
			}
			else
			{
				top=mid+1;
			}
		}
		if (!sign||loca==-1)
		{
			printf("cannot find %d.\n",number);
			printf("continue or not(Y/N)?");
			scanf(" %c",&c);
			if (c=='N'||c=='n')
			{
				flag=0;
			}
		}
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：统计出一篇文章中所含的英文大写字母、小写字母、数字、空格、以及其他字符数  p138
一般形式：void exercise10()
参数说明：
		 	char text[3][80];
			int i;
			int j;
			int upp;
			int low;
			int dig;
			int spa;
			int oth;
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include <string.h>
int exercise6_10()
{

	//10.习题6.10	统计出一篇文章中所含的英文大写字母、小写字母、数字、空格、以及其他字符数 p138
	printf("10.习题6.10	统计出一篇文章中所含的英文大写字母、小写字母、数字、空格、以及其他字符数 p138\n");

	//1.定义变量类型
	char text[3][80];
	int i;
	int j;
	int upp;
	int low;
	int dig;
	int spa;
	int oth;

	//2.变量赋初值
	upp=0;
	low=0;
	dig=0;
	spa=0;
	oth=0;

	//3.获取数据
	for (i=0;i<3;i++)
	{
		printf("Please input line %d:\n",i+1);
		gets(text[i]);
		for (j=0;j<80&&text[i][j]!='\0';j++)
		{
			if (text[i][j]>='A'&&text[i][j]<='Z')
			{
				upp++;
			}
			else if (text[i][j]>='0'&&text[i][j]<='9')
			{
				dig++;
			}
			else if (text[i][j]==' ')
			{
				spa++;
			}
			else if (text[i][j]>='a'&&text[i][j]<='z')
			{
				low++;
			}
			else
			{
				oth++;
			}
		}
	}

	//4.处理数据


	//5.输出数据
	printf("\nupp:%d\n",upp);
	printf("low:%d\n",low);
	printf("dig:%d\n",dig);
	printf("spa:%d\n",spa);
	printf("oth:%d\n\n",oth);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：输出以下图案	p138
一般形式：void exercise11()
参数说明：
			int i;
			int j;
			int k;
			char space=' ';
			char a[5]={'*','*','*','*','*',};
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include <string.h>
int exercise6_11()
{
	//11.习题6.11 输出以下图案	p138
	printf("11.习题6.11	输出以下图案 p138\n");

	//1.定义变量类型
	int i;
	int j;
	int k;
	char space=' ';
	char a[5]={'*','*','*','*','*',};

	//2.变量赋初值
	i=0;
	j=0;
	k=0;

	//3.获取数据


	//4.处理数据	//5.输出数据
	for (i=0;i<5;i++)
	{
		printf("\n");
		printf("     ");
		for (j=1;j<=i;j++)
		{
			printf("%c",space);
		}
		for (k=0;k<5;k++)
		{
			printf("%c",a[k]);
		}
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：编一个程序，用来解密文件 p138
一般形式：void exercise12()
参数说明：
			int j;
			int n;
			char ch[80];
			char tran[80];
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include <string.h>
int exercise6_12()
{
	//12.习题6.12	编一个程序，用来解密文件 p138
	printf("12.习题6.12	编一个程序，用来解密文件 p138\n");
	
	//1.定义变量类型
	int j;
	int n;
	char ch[80];
	char tran[80];

	//2.变量赋初值
	j=0;
	n=0;

	//3.获取数据
	printf("input cipher code :");
	gets(ch);
	printf("\ncipher code :%s",ch);

	//4.处理数据
	while (ch[j]!='\0')
	{
		if ((ch[j]>='A')&&(ch[j]<='Z'))
		{
			tran[j]=155-ch[j];
		}
		else if ((ch[j]>='a')&&(ch[j]<='z'))
		{
			tran[j]=219-ch[j];
		}
		else
		{
			tran[j]=ch[j];
		}
		j++;
	}

	//5.输出数据
	n=j;
	printf("\noriginal text :");
	for (j=0;j<n;j++)
	{
		putchar((tran[j]));
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：	编一个程序，将两个字符串连接起来	 p138
一般形式：void exercise13()
参数说明：
			char s1[80];
			char s2[40];
			int i;
			int j;
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include <string.h>
int exercise6_13()
{
	//13.习题6.13	编一个程序，将两个字符串连接起来	 p138
	printf("13.习题6.13		编一个程序，将两个字符串连接起来 p138\n");

	//1.定义变量类型
	char s1[80];
	char s2[40];
	int i;
	int j;

	//2.变量赋初值
	i=0;
	j=0;

	//3.获取数据
	printf("input string1:");
	scanf("%s",s1);
	printf("input string2:");
	scanf("%s",s2);

	//4.处理数据
	while (s1[i]!='\0')
	{
		i++;
	}
	while (s2[j]!='\0')
	{
		s1[i++]=s2[j++];
	}
	s1[i]='\0';

	//5.输出数据
	printf("\nThe new string is :%s\n\n",s1);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：编一个程序，将两个字符串比较 p138
一般形式：void exercise14()
参数说明：
			int i;
			int resu;
			char s1[100];
			char s2[100];
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include <string.h>
int exercise6_14()
{
	//14.习题6.14	 编一个程序，将两个字符串比较 p138
	printf("14.习题6.14	 编一个程序，将两个字符串比较 p138\n");

	//1.定义变量类型
	int i;
	int resu;
	char s1[100];
	char s2[100];

	//2.变量赋初值
	i=0;
	resu=0;

	//3.获取数据
	printf("Please input string1:" );
	gets(s1);
	printf("Please input string2:" );
	gets(s2);

	//4.处理数据
	while ((s1[i]==s2[i])&&(s1[i]!='0'))
	{
		i++;
	}
	if ((s1[i]=='\0')&&(s2[i]=='\0'))
	{
		resu=0;
	}
	else
	{
		resu=s1[i]-s2[i];
	}

	//5.输出数据
	printf("%d\n\n",resu);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
函数功能：编一个程序，将一个程序复制到另一个程序上	 p138
一般形式：void exercise15()
参数说明：
		  	int i;
			char s1[80];
			char s2[80];
返回值：  整数，数组
调用形式：
时间：	  2012_12.11
作者：	  李伟康
创建、修改内容：
==================================================================
*/
#include <string.h>
int exercise6_15()
{
	//1.习题6.15	编一个程序，将一个程序复制到另一个程序上	 p138
	printf("15.习题6.15		编一个程序，将一个程序复制到另一个程序上 p138\n");

	//1.定义变量类型
	int i;
	char s1[80];
	char s2[80];

	//2.变量赋初值
	i=0;

	//3.获取数据
	printf("Please input string2:");
	scanf("%s",s2);

	//4.处理数据
	for (i=0;i<=strlen(s2);i++)
	{
		s1[i]=s2[i];
	}

	//5.输出数据
	printf("Out string2:%s\n",s1);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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


  
 