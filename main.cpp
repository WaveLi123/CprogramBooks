#include "head.h"
#include <windows.h>
int system(const char *string);
int main ()
{
//�û���ʾ��Ϣ
	int choose;
	char choos;

	choose=0;
	choose=0;
start:
	printf("�ӭʹ�á�C������ƽ̡̳�����һ�ϣ�����\n");
	printf("*******************************\n");
	printf("*1. ��һ��.                   *\n");
	printf("*2. �ڶ���.                   *\n");
	printf("*3. ������.                   *\n");
	printf("*4. ������.                   *\n");
	printf("*5. ������.                   *\n");
	printf("*6. ������.                   *\n");
	printf("*7. ������.                   *\n");
	printf("*8. �ڰ���.                   *\n");
	printf("*9. �ھ���.                   *\n");
	printf("*10.��ʮ��.                   *\n");
	printf("*11.�˳�.                     *\n");
	printf("*******************************\n");
	printf("����������ѡ��");
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

		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
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
