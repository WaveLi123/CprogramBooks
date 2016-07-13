#include "head.h"
#include <windows.h>
int system(const char *string);
int main ()
{
//用户提示信息
	int choose;
	char choos;

	choose=0;
	choose=0;
start:
	printf("☆欢迎使用《C程序设计教程》（大一上）！☆\n");
	printf("*******************************\n");
	printf("*1. 第一章.                   *\n");
	printf("*2. 第二章.                   *\n");
	printf("*3. 第三章.                   *\n");
	printf("*4. 第四章.                   *\n");
	printf("*5. 第五章.                   *\n");
	printf("*6. 第六章.                   *\n");
	printf("*7. 第七章.                   *\n");
	printf("*8. 第八章.                   *\n");
	printf("*9. 第九章.                   *\n");
	printf("*10.第十章.                   *\n");
	printf("*11.退出.                     *\n");
	printf("*******************************\n");
	printf("请输入您的选择：");
	scanf("%d",&choose);
	switch (choose)
	{
		case 1:	system("cls");
				number_1();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	system("cls");
				number_3();
				break;

		case 4:	system("cls");
				number_4();
				break;

		case 5:	system("cls");
				number_5();
				break;
		
		case 6:	system("cls");
				number_6();
				break;
		
		case 7:	system("cls");
				number_7();
				break;
		
		case 8:	system("cls");
				number_8();
				break;
		
		case 9:	system("cls");
				number_9();
				break;
	
		case 10:system("cls");
				number_10();
				break;

		case 11:return 0;

		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
				getchar();
				scanf("%c",&choos);
				if (choos=='y'||choos=='Y')
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
