/*
****************************************************************************************************************************
												��ΰ��_1240069
//2012-11-6 8:00-12:00
//1.�ڶ�������2.1	�ڳ�����ʹ�÷��ű���  p18
//2.�ڶ�������2.2	���ͱ����Ķ�����ʹ��  p22
//3.�ڶ�������2.3	�������ݵ����        p23
//4.�ڶ�������2.4	���������ݵ��������  p26
//5.�ڶ�������2.5	ת���ַ���ʹ��        p27
//6.�ڶ�������2.6	���ַ�������������    
//7.�ڶ�������2.7	��С��ĸ��ת��        p29
//8.�ڶ�������2.8	ǿ������ת��          p35
//9.�ڶ���ϰ��6		������china�������  p39
****************************************************************************************************************************
*/
//˵����
//*******************************************
//����1:	����ʱ�����⣬����˵���еĲ�׼ȷ*(�����ѽ��)
//����2:	��������ʱ��û����tab��			*(�����ѽ��)
//*******************************************

#include "head.h"
#include "second.h"
#include <windows.h>
int system(const char *string);
int choose2;//����ȫ�ֱ���
int choos2;//����ȫ�ֱ���
#define  PI  30 
int number_2()
{
start:
	//�û���ʾ��Ϣ
	choose2=0;
	choos2=0;

	printf("�ӭ���롶C������ƽ̡̳��ڶ��£���\n");
	printf("************************************************\n");
	printf("*1.�ڶ�������2.1 �ڳ�����ʹ�÷��ű���	    p18*\n");
	printf("*2.�ڶ�������2.2 ���ͱ����Ķ�����ʹ��	    p22*\n");
	printf("*3.�ڶ�������2.3 �������ݵ����             p23*\n");
	printf("*4.�ڶ�������2.4 ���������ݵ��������	    p26*\n");
	printf("*5.�ڶ�������2.5 ת���ַ���ʹ��             p27*\n");
	printf("*6.�ڶ�������2.6 ���ַ�������������         p28*\n");
	printf("*7.�ڶ�������2.7 ��С��ĸ��ת��             p29*\n");
	printf("*8.�ڶ�������2.8 ǿ������ת��               p35*\n");
	printf("*9.�ڶ���ϰ��6	 ������china�������    p39*\n");
	printf("*10.�������˵���                               *\n");
	printf("*11.�˳���                                     *\n");
	printf("************************************************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch (choose2)
	{
		case 1:	system("cls");
				example2_1();
				break;

		case 2:	system("cls");
				example2_2();
				break;

		case 3:	system("cls");
				example2_3();
				break;

		case 4:	system("cls");
				example2_4();
				break;

		case 5:	system("cls");
				example2_5();
				break;

		case 6:	system("cls");
				example2_6();
				break;

		case 7:	system("cls");
				example2_7();
				break;

		case 8:	system("cls");
				example2_8();
				break;

		case 9:	system("cls");
				exercise2_1();
				break;

		case 10:system("cls");
				main();
				break;

		case 11:system("cls");
				goto end;	
				break;
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	�ڳ�����ʹ�÷��ű���
һ����ʽ��	example2_1()
����˵����	int num;  
			int total;
�� �� ֵ��	����
������ʽ��	example2_1()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/						
int example2_1()
{
	//1.�ڶ�������2.1	�ڳ�����ʹ�÷��ű���
	printf("1.����2.1  �ڳ�����ʹ�÷��ű���\n");

	//1.�����������
	int num;                //p18  �ڶ�������2.1
	int total;              //p18  �ڶ�������2.1

	//2.��������ֵ
	num=10;                 //p18  �ڶ�������2.1          
	total=0;                //p18  �ڶ�������2.1

	//3.��ȡ����

	//4.��������
	total=num*PI;

	//5.�������
	printf("total=%d\n",total);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	���ͱ����Ķ�����ʹ��
һ����ʽ��	example2_2()
����˵����	int a;     
			int b;     
			int c;     
			int d;     
			unsigned u;
�� �� ֵ��	����
������ʽ��	example2_2()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_2()
{
	//2.�ڶ�������2.2	���ͱ����Ķ�����ʹ��
	printf("2.����2.2  ���ͱ����Ķ�����ʹ��\n");

	//1.�����������
	int a;                  //p22  �ڶ�������2.2
	int b;                  //p22  �ڶ�������2.2
	int c;                  //p22  �ڶ�������2.2        
	int d;                  //p22  �ڶ�������2.2        
	unsigned u;             //p22  �ڶ�������2.2

	//2.��������ֵ
	a=12;                   //p22  �ڶ�������2.2
	b=-24;                  //p22  �ڶ�������2.2
	c=32767;                //p22  �ڶ�������2.2			
	d=0;                    //p22  �ڶ�������2.2			
	u=10;                   //p22  �ڶ�������2.2

	//3.��ȡ����

	//4.��������
	c=a+u;
	d=b+u;

	//5.�������
	printf("a+u=%d,b+u=%d\n",c,d);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	�������ݵ����
һ����ʽ��	example2_3()
����˵����	int c5;                 
			int d6;  
�� �� ֵ��	����
������ʽ��	example2_3()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_3()
{
	//3.�ڶ�������2.3	�������ݵ����
	printf("3.����2.3  �������ݵ����\n");

	//1.����������� 
	int c5;                 
	int d6;                 

	//2.��������ֵ
	c5=32767;					
	d6=0;

	//3.��ȡ����

	//4.��������
	d6=c5+1;

	//5.�������
	printf("%d,%d\n",c5,d6);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	���������ݵ��������
һ����ʽ��	example2_4()
����˵����	float e;		
�� �� ֵ��	����
������ʽ��	example2_4()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_4()
{
	//4.�ڶ�������2.4	���������ݵ��������
	printf("4.����2.4  ���������ݵ��������\n");
 
	//1.�����������
	float e;

	//2.��������ֵ
	e=3.141592612;

	//3.��ȡ����
 
	//4.��������
 
	//5.�������
	printf("e=%f\n",e);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	ת���ַ���ʹ��
һ����ʽ��	example2_5()
����˵����			
�� �� ֵ��	����
������ʽ��	example2_5()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_5()
{
	//5.�ڶ�������2.5  ת���ַ���ʹ��
	printf("5.����2.5  ת���ַ���ʹ��\n");
	
	//1.�����������
	
	//2.��������ֵ

	//3.��ȡ����

	//4.��������

	//5.�������
	printf("ab c\t de\rf\tg\n");
	printf("h\ti\b\bj k\n");
	printf("\n");                

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	���ַ�������������
һ����ʽ��	example2_6()
����˵����	char c1;              
			char c2;		
�� �� ֵ��	����
������ʽ��	example2_6()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_6()
{
	//6.�ڶ�������2.6	���ַ�������������
	printf("6.����2.6  ���ַ�������������\n");

	//1.�����������
	char c1;              
	char c2; 

	//2.��������ֵ
	c1=97;                  
	c2=98; 

	//3.��ȡ����

	//4.��������

	//5.�������
	printf("%c %c\n",c1,c2);
	printf("%d %d\n",c1,c2);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	��С��ĸ��ת��
һ����ʽ��	example2_7()
����˵����	char c3;					
			char c4;		
�� �� ֵ��	����
������ʽ��	example2_7()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_7()
{
	//7.�ڶ�������2.7	��С��ĸ��ת��
	printf("7.����2.7  ��С��ĸ��ת��\n");

	//1.�����������
	char c3;					
	char c4;

	//2.��������ֵ
	c3='a';                
	c4='b'; 

	//3.��ȡ����

	//4.��������
	c3=c3-32;
	c4=c4-32;

	//5.�������
	printf("%c %c\n",c3,c4);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	ǿ������ת��
һ����ʽ��	example2_8()
����˵����	float x;					
			int i;			
�� �� ֵ��	����
������ʽ��	example2_8()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int example2_8()
{

	//8.�ڶ�������2.8	ǿ������ת��
	printf("8.����2.8  ǿ������ת��\n");

	//1.�����������
	float x;					
	int i;	

	//2.��������ֵ
	x=3.6;

	//3.��ȡ����

	//4.��������
	i=(int)x;

	//5.�������
	printf("x=%f,i=%d\n",x,i);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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
��������:	������china�������
һ����ʽ��	exercise2_1()
����˵����	char d1;                         
			char d2;                
			char d3;                
			char d4;                                       
			char d5; 		
�� �� ֵ��	�ַ�
������ʽ��	exercise2_1()
Date		Name		Create/Correct
2013_1_5	liweikang	create
===============================================================================
*/
int exercise2_1()
{
	//9.�ڶ���ϰ��6	������china�������	
	printf("9.ϰ��6  ������china�������\n");

	//1.�����������
	char d1;                         
	char d2;                
	char d3;                
	char d4;                                       
	char d5; 

	//2.��������ֵ
	d1='C';                            
	d2='h';                 
	d3='i';                 
	d4='n';                 
	d5='a'; 

	//3.��ȡ����

	//4.��������
	d1=d1+4;
	d2=d2+4;
	d3=d3+4;
	d4=d4+4;
	d5=d5+4;

	//5.�������
	printf("%c%c%c%c%c\n",d1,d2,d3,d4,d5);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose2);
	switch(choose2)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_2();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos2);
				if (choos2=='y'||choos2=='Y')
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


