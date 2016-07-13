/*
***************************************************************************************
时间：2012_12_27_9_21:00
作者：李伟康_1240069
内容：C程序设计基础第十章例题
题目：
1.例题10.1	从键盘输入一些字符，逐个把他们送到磁盘上去，直到输入一个'#'为止。	p290	
2.例题10.2	建一个磁盘文件中的信息复制到另一个磁盘中。	P291
***************************************************************************************
*/

#include "head.h"
#include "tenth.h"
#include <windows.h>
int system(const char *string);
int choose10;//定义全局变量
int choos10;//定义全局变量
int number_10()
{
start:
	//用户提示信息
	printf("☆欢迎进入《C程序设计教程》第十章！☆\n");
	printf("***************************************************************************\n");
	printf("*1.例题10.1 从键盘输入一些字符,逐个把他们送到磁盘上去,直到输入一个'#'为止.*\n");
	printf("*2.例题10.2 建一个磁盘文件中的信息复制到另一个磁盘中.                     *\n");
	printf("*3.返回主菜单。                                                           *\n");
	printf("*4.退出。                                                                 *\n");
	printf("***************************************************************************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose10);
	switch (choose10)
	{
		case 1:	system("cls");
				example10_1();
				break;

		case 2:	system("cls");
				example10_2();
				break;

		case 3:	system("cls");
				main();
				break;

		case 4:	system("cls");
				goto end;	
				break;
		
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos10);
				if (choos10=='y'||choos10=='Y')
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
==================================================================================
内容：读写字符举例
题目：例题10.1、10.2
==================================================================================
*/
#include <stdlib.h>
int example10_1()
{
	printf("1.例题10.1	从键盘输入一些字符，逐个把他们送到磁盘上去，直到输入一个'#'为止。	p290\n");
	
	//1.定义变量类型
	FILE *fp;
	char ch;
	char filename[10];

	//2.变量赋初值


	//3.获取数据
	printf("请输入一个文件名：（后缀为.dat）\n");
	scanf("%s",filename);
	ch=getchar();

	//4.处理数据
	if ((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open the file\n");
		exit (0);
	}
	printf("请输入一串字符：（输入'#'）结束\n");
	ch=getchar();
	while (ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	fclose(fp);
	putchar(10);
	putchar(10);

	//5.输出数据

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose10);
	switch(choose10)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_10();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos10);
				if (choos10=='y'||choos10=='Y')
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
==================================================================================
内容：读写字符举例
题目：例题10.1、10.2
==================================================================================
*/
#include <stdlib.h>
int example10_2()
{
	printf("2.例题10.2	建一个磁盘文件中的信息复制到另一个磁盘中。	P291\n");
	//1.定义变量类型
	FILE *in;
	FILE *out;
	char infile[10];
	char outfile[10];
	char ch;

	//2.变量赋初值

	//3.获取数据
	printf("请输入文件infile的文件名：（后缀为.dat）\n");
	scanf("%s",infile);
	ch=getchar();
	printf("请输入文件outfile的文件名：\n");
	scanf("%s",outfile);
	ch=getchar();

	//4.处理数据
	if ((in=fopen(infile,"r"))==NULL)
	{
		printf("cannot open the file!\n");
		exit (0);
	}
	if ((out=fopen(outfile,"w"))==NULL)
	{
		printf("cannot open the file!\n");
		exit (0);
	}
	while (!feof(in))
	{
		fputc(fgetc(in),out);
	}
	fclose(in);
	fclose(out);
	//5.输出数据

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose10);
	switch(choose10)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_10();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos10);
				if (choos10=='y'||choos10=='Y')
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
