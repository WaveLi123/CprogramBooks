/*
***************************************************************************************
ʱ�䣺2012_12_27_9_21:00
���ߣ���ΰ��_1240069
���ݣ�C������ƻ�����ʮ������
��Ŀ��
1.����10.1	�Ӽ�������һЩ�ַ�������������͵�������ȥ��ֱ������һ��'#'Ϊֹ��	p290	
2.����10.2	��һ�������ļ��е���Ϣ���Ƶ���һ�������С�	P291
***************************************************************************************
*/

#include "head.h"
#include "tenth.h"
#include <windows.h>
int system(const char *string);
int choose10;//����ȫ�ֱ���
int choos10;//����ȫ�ֱ���
int number_10()
{
start:
	//�û���ʾ��Ϣ
	printf("�ӭ���롶C������ƽ̡̳���ʮ�£���\n");
	printf("***************************************************************************\n");
	printf("*1.����10.1 �Ӽ�������һЩ�ַ�,����������͵�������ȥ,ֱ������һ��'#'Ϊֹ.*\n");
	printf("*2.����10.2 ��һ�������ļ��е���Ϣ���Ƶ���һ��������.                     *\n");
	printf("*3.�������˵���                                                           *\n");
	printf("*4.�˳���                                                                 *\n");
	printf("***************************************************************************\n");
	printf("����������ѡ��");
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
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
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
���ݣ���д�ַ�����
��Ŀ������10.1��10.2
==================================================================================
*/
#include <stdlib.h>
int example10_1()
{
	printf("1.����10.1	�Ӽ�������һЩ�ַ�������������͵�������ȥ��ֱ������һ��'#'Ϊֹ��	p290\n");
	
	//1.�����������
	FILE *fp;
	char ch;
	char filename[10];

	//2.��������ֵ


	//3.��ȡ����
	printf("������һ���ļ���������׺Ϊ.dat��\n");
	scanf("%s",filename);
	ch=getchar();

	//4.��������
	if ((fp=fopen(filename,"w"))==NULL)
	{
		printf("cannot open the file\n");
		exit (0);
	}
	printf("������һ���ַ���������'#'������\n");
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

	//5.�������

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
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
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
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
���ݣ���д�ַ�����
��Ŀ������10.1��10.2
==================================================================================
*/
#include <stdlib.h>
int example10_2()
{
	printf("2.����10.2	��һ�������ļ��е���Ϣ���Ƶ���һ�������С�	P291\n");
	//1.�����������
	FILE *in;
	FILE *out;
	char infile[10];
	char outfile[10];
	char ch;

	//2.��������ֵ

	//3.��ȡ����
	printf("�������ļ�infile���ļ���������׺Ϊ.dat��\n");
	scanf("%s",infile);
	ch=getchar();
	printf("�������ļ�outfile���ļ�����\n");
	scanf("%s",outfile);
	ch=getchar();

	//4.��������
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
	//5.�������

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
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
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
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
