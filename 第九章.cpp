/*
=======================================================
						��ΰ��_1240069
//1.����9.1	�Խṹ�������ʼ��	p253
//2.����9.2 �Ժ�ѡ�˵�Ʊ��ͳ��	
//3.
========================================================
*/

#include "head.h"
#include "ninth.h"
#include <windows.h>
int system(const char *string);
int choose9;//����ȫ�ֱ���
int choos9;//����ȫ�ֱ���
int number_9()
{
start:
	//�û���ʾ��Ϣ
	printf("�ӭ���롶C������ƽ̡̳��ھ��£���\n");
	printf("***************************************************************************\n");
	printf("*1.����9.1 �Խṹ�������ʼ�� p253                                        *\n");
	printf("*2.����9.2 �Ժ�ѡ�˵�Ʊ��ͳ�� p253                                        *\n");
	printf("*3.�������˵���                                                           *\n");
	printf("*4.�˳���                                                                 *\n");
	printf("***************************************************************************\n");
	printf("����������ѡ��");
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
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
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
���ݣ��ṹ������ĳ�ʼ��
��Ŀ������9.1
===============================================================================
*/
int example9_1()
{
	printf("1.����9.1	�Խṹ�������ʼ��	p253");

	//1.�����������
	struct student		//�ṹ�����Ͷ���
	{
		long int num;
		char name[20];
		char sex;
		char addr[20];
	}a={1240069,"liweikang",'M',"henanluoyang"};
		
	//2.��������ֵ
	//	a={1240069,"liweikang",'M',"henanluoyang"}
	
	//3.��ȡ����

	//4.��������

	//5.�������
	printf("num:%d\n",a.num);
	printf("name:%s\n",a.name);
	printf("sex:%c\n",a.sex);
	printf("addr:%s\n\n",a.addr);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
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
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
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
���ݣ��ṹ�������Ӧ�þ���
��Ŀ������9.2
===============================================================================
*/
#include <string.h>
int example9_2()
{
	printf("2.����9.2 �Ժ�ѡ�˵�Ʊ��ͳ��	p253\n");
	
	//1.�����������
	struct person
	{
		char name[20];
		int count;
	}leader[3]={"li",0,"zhang",0,"fang",0};
//	struct person leader[3]={"li",0,"zhang",0,"fang",0};
	char leader_name[20];
	int i;
	int j;

	//2.��������ֵ
	i=0;
	j=0;

	//3.��ȡ����
	
	//4.��������
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

	//5.�������
	printf("\nResult:\n");
	for (i=0;i<3;i++)
	{
		printf("%5s:%d\n",leader[i].name,leader[i].count);
	}
	printf("\n\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
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
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
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