/*
*************************************************************************************************************
											��ΰ��_1240069
//2012_11.08_7:00-9:00
//1.p4          ��һ������1.1  ����Ļ����ʾ��һ����Ϣ:"This is a C program."
//2.p5          ��һ������1.2  ����������֮��
//3.p5          ��һ������1.3  �����������еĴ���
//4.p16         ��һ��ϰ��4    ����ձ������⣬��дһ��C�������������Ϣ(Very good)
//5.p16         ��һ��ϰ��5    ��дһ��C��������a,b,c����ֵ��������е����ֵ
*************************************************************************************************************
*/
//˵����
//****************************************
//����1������ʱ�����⣬����˵���еĲ�׼ȷ&&�����ѽ��
//����2����������ʱ��û����tab��         &&�����ѽ��
//****************************************



#include "head.h"
#include "first.h"
#include <windows.h>
int system(const char *string);
int choose1;//����ȫ�ֱ���
int choos1;//����ȫ�ֱ���
int number_1()
{
start:
	//�û���ʾ��Ϣ

	printf("�ӭ���롶C������ƽ̡̳���һ�£���\n");
	printf("****************************************************************************\n");
	printf("*1.��һ������1.1  ����Ļ����ʾ��һ����Ϣ:'This is a C program'p4          *\n");
	printf("*2.��һ������1.2  ����������֮��p5                                        *\n");
	printf("*3.��һ������1.3  �����������еĴ���p5                                    *\n");
	printf("*4.��һ��ϰ��4    ����ձ������⣬��дһ��C�������������Ϣ(Very good)  *\n");
	printf("*5.��һ��ϰ��5    ��дһ��C��������a,b,c����ֵ��������е����ֵp16     *\n");
	printf("*6.�������˵���                                                           *\n");
	printf("*7.�˳���                                                                 *\n");
	printf("***************************************************************************\n");
	printf("����������ѡ��");
	scanf("%d",&choose1);
	switch (choose1)
	{
		case 1:	system("cls");
				example1_1();
				break;

		case 2:	system("cls");
				example1_2();
				break;
				
		case 3:	system("cls");
				example1_3();
				break;

		case 4:	system("cls");
				exercise1_1();
				break;

		case 5:	system("cls");
				exercise1_2();
				break;

		case 6:	system("cls");
				main();
				break;

		case 7:	system("cls");
				goto end;	
				break;
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
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
��������:	��Ϥc���Ի���
һ����ʽ��	example1_1()
����˵����			
�� �� ֵ��	
������ʽ��	example1_1()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
int example1_1()
{
	printf("1.����1.1	����Ļ����ʾ��һ����Ϣ:'This is a C program.'\n");
	printf("This is a c program\n\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
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
��������:	����������֮��
һ����ʽ��	example1_2()
����˵����	int a;
			int b; 
			int sum;		
�� �� ֵ��	����
������ʽ��	example1_2()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
int example1_2()
{
	printf("2.����1.2	 ����������֮��\n");
	
	//1.�����������
	int a;
	int b; 
	int sum;

	//2.��������ֵ
	a=123;
	b=456;
	sum=0;

	//3.��ȡ����

	//4.��������
	sum=a+b;

	//5.�������
	printf("sum is %d\n\n",sum);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
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
��������:	�����������еĴ���
һ����ʽ��	example1_3()
����˵����	int a; 
			int b; 
			int d; 
�� �� ֵ��	����
������ʽ��	example1_3()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
//int max(int x,int y);
/*int max(int x,int y)            //nxxxxxxxxxxxxxx//
{
	int z;                          //ddddddddddddddd//
	if (x>y) z=x;                   //ssssssssssssssj//
	else z=y;                       //hhhhhhhhhhhhhhh//
	return(z);                      //fffffffffffffff//  	
}*/
int example1_3()
{
	printf("3.����1.3	 �����������еĴ���\n");

	//1.�������//
	int a;                       //mmmmmmmmmmmmmmmm
	int b;                       //kkkkkkkkkkkkkkk
	int d;                       //nnnnnnnnnnnnnnn

	//2.��ʼ����ֵ//
	
	//3.��������//
	printf("����һ������a=");    //vbnhhhhhhhhhhhh
	scanf("%d",&a);              //vbnhhhhhhhhhhhh
	printf("����һ������b=");    //vbnhhhhhhhhhhhh
	scanf("%d",&b);              //vbnhhhhhhhhhhhh

	//4.��������//
	d=max(a,b);                     //hhhhhhhhhhhhhhh//

	//5.�������//
	printf("max=%d\n\n",d);           //aaaaaaaaaaaaaaa//

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
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
��������:	��Ϥc���Ի���
һ����ʽ��	example1_4()
����˵����			
�� �� ֵ��	
������ʽ��	example1_4()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
int exercise1_1()
{
	//p16   ��һ��ϰ��4
	printf("4.ϰ��4		����ձ������⣬��дһ��C�������������Ϣ(Very good)\n");

	//1.�����������

	//2.��������ֵ

	//3.��ȡ����

	//4.��������

	//5.�������
	printf("very good !\n\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
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
��������:	���������е����ֵ
һ����ʽ��	example1_5()
����˵����	int a;   
			int b;   
			int c;   
			int d;   
�� �� ֵ��	����
������ʽ��	example1_5()
Date		Name		Create/Correct
2012_11_08	liweikang	creat
2013_1_5	liweikang	correct
===============================================================================
*/
int max1(int x,int y);        //ggggggggggggggg
int exercise1_2()
{
	//p16   ��һ��ϰ��5
	printf("5.ϰ��5	 ��дһ��C��������a,b,c����ֵ��������е����ֵ\n");

	//1.�������//
	int a;                       //mmmmmmmmmmmmmmmm
	int b;                       //kkkkkkkkkkkkkkk
	int c;                       //nnnnnnnnnnnnnnn
	int d;                       //ggggggggggggggg

	//2.��ʼ����ֵ//
	
	//3.��������//
	printf("����һ������a=");    //vbnhhhhhhhhhhhh
	scanf("%d",&a);              //vbnhhhhhhhhhhhh
	printf("����һ������b=");    //vbnhhhhhhhhhhhh
	scanf("%d",&b);              //vbnhhhhhhhhhhhh
	printf("����һ������c=");    //vbnhhhhhhhhhhhh
	scanf("%d",&c);              //vbnhhhhhhhhhhhh
	
	//4.��������//
	d=max(a,b);                     //hhhhhhhhhhhhhhh//
	d=max(c,d);                     //hhhhhhhhhhhhhhh//
	
	//5.�������//
	printf("max=%d\n",d);           //aaaaaaaaaaaaaaa//

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose1);
	switch(choose1)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_1();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos1);
				if (choos1=='y'||choos1=='Y')
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
int max1(int x,int y)            //nxxxxxxxxxxxxxx//
{
	int z;                          //ddddddddddddddd//
	if (x>y) z=x;                   //ssssssssssssssj//
	else z=y;                       //hhhhhhhhhhhhhhh//
	return(z);                      //fffffffffffffff//  	
}



