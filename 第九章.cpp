/*
=======================================================
						李伟康_1240069
//1.例题9.1	对结构体变量初始化	p253
//2.例题9.2 对候选人得票的统计	
//3.
========================================================
*/

#include "head.h"
#include "ninth.h"
#include <windows.h>
int system(const char *string);
int choose9;//定义全局变量
int choos9;//定义全局变量
int number_9()
{
start:
	//用户提示信息
	printf("☆欢迎进入《C程序设计教程》第九章！☆\n");
	printf("***************************************************************************\n");
	printf("*1.例题9.1 对结构体变量初始化 p253                                        *\n");
	printf("*2.例题9.2 对候选人得票的统计 p253                                        *\n");
	printf("*3.返回主菜单。                                                           *\n");
	printf("*4.退出。                                                                 *\n");
	printf("***************************************************************************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose9);
	switch (choose9)
	{
		case 1:	system("cls");
				example9_1();
				break;

		case 2:	system("cls");
				example9_2();
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
				scanf("%c",&choos9);
				if (choos9=='y'||choos9=='Y')
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
内容：结构体变量的初始化
题目：例题9.1
===============================================================================
*/
int example9_1()
{
	printf("1.例题9.1	对结构体变量初始化	p253");

	//1.定义变量类型
	struct student		//结构体类型定义
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}a={1240069,"liweikang",'M',"henanluoyang"};
		
	//2.变量赋初值
	//	a={1240069,"liweikang",'M',"henanluoyang"}
	
	//3.获取数据

	//4.处理数据

	//5.输出数据
	printf("num:%d\n",a.num);
	printf("name:%s\n",a.name);
	printf("sex:%c\n",a.sex);
	printf("addr:%s\n\n",a.addr);

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose9);
	switch(choose9)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_9();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos9);
				if (choos9=='y'||choos9=='Y')
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
内容：结构体数组的应用举例
题目：例题9.2
===============================================================================
*/
#include <string.h>
int example9_2()
{
	printf("2.例题9.2 对候选人得票的统计	p253\n");
	
	//1.定义变量类型
	struct person
	{
		char name[20];
		int count;
	}leader[3]={"li",0,"zhang",0,"fang",0};
//	struct person leader[3]={"li",0,"zhang",0,"fang",0};
	char leader_name[20];
	int i;
	int j;

	//2.变量赋初值
	i=0;
	j=0;

	//3.获取数据
	
	//4.处理数据
	for (i=0;i<10;i++)
	{
		scanf("%s",leader_name);
		for (j=0;j<3;j++)
		{
			if (strcmp(leader_name,leader[j].name)==0)
			{
				leader[j].count++;
			}
		}
	}

	//5.输出数据
	printf("\nResult:\n");
	for (i=0;i<3;i++)
	{
		printf("%5s:%d\n",leader[i].name,leader[i].count);
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
	scanf("%d",&choose9);
	switch(choose9)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_9();
				break;

		case 3:	goto end;
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos9);
				if (choos9=='y'||choos9=='Y')
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