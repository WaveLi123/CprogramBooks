/*
****************************************************************************************************************************************
												   1240068  ���³�
//2012.11.18 18.30-22.30
//1.����������4.1  ��������ʵ����������ֵ��С�����˳�������������  p80-81
//2.����������4.2  ����������a,b,c,Ҫ����С�����˳�����  p80-81
//3.����������4.3  ������Ϻ�����ֵ  p82-83
//4.����������4.4  ����һ���ַ����б����Ƿ��Ǵ�д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��������õ����ַ�  p86-87
//5.����������4.5  д�����ж�ĳһ���Ƿ�������  p89-90
//6.����������4.6  ��ax^2+bx+c=0���̵Ľ�  p90-91
//7.����������4.7  ���乫˾���û������˷�  p92-93

//2012.11.18 19:00-22:00
//8. ������ϰ���3��  д��������߼����ʽ��ֵ����a=3,b=4,c=5  p94-95
//9. ������ϰ���4��  ����������a,b,c,�ɼ������룬������е���������������  p95
//10.������ϰ���5��  ����������x��ֵ������ֶκ���y��ֵ  p95
//11.������ϰ���6��  ����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ�'A','B','C','D','E'  p95
//12.������ϰ���7��  ��һ����������λ����������Ҫ��(1)������Ǽ�λ��(2)�ֱ����ÿһ������(3)�����������λ����  p95
//13.������ϰ���8��  �Ӽ������뵱������I����Ӧ����������  p95
//14.������ϰ���9��  �����ĸ�������Ҫ����С�����˳�����  p95
//15.������ϰ���10�� ��������һ������꣬��õ�Ľ����߶�  p95
****************************************************************************************************************************************
*/
//˵����
//****************************************
//����1������ʱ�����⣬����˵���еĲ�׼ȷ*(�����ѽ��)
//���⣺��������ʱ��û����tab��			 *(�����ѽ��)
//****************************************
//������ϰ�⣨8���������⣨7����

#include "head.h"
#include "fourth.h"
#include <windows.h>
int system(const char *string);
int choose4=0;//����ȫ�ֱ���
int choos4=0;//����ȫ�ֱ���


int number_4()
{
start:
	//�û���ʾ��Ϣ

	printf("�ӭ���롶C������ƽ̡̳������£���\n");
	printf("*****************************************************************************\n");
	printf("*1. ����������4.1 ��������ʵ��,������ֵ��С�����˳�������������  p80-81   *\n");
	printf("*2. ����������4.2 ����������a,b,c,Ҫ����С�����˳�����  p80-81          *\n");
	printf("*3. ����������4.3 ������Ϻ�����ֵ  p82-83                                  *\n");                                                
	printf("*4. ����������4.4 ����һ���ַ�,�б����Ƿ��Ǵ�д��ĸ,�����,����ת����Сд�� *\n");
	printf("*   ĸ,��֮��ת��,����õ����ַ�  p86-87                                    *\n");                             
	printf("*5. ����������4.5 д����,�ж�ĳһ���Ƿ�������  p89-90                       *\n"); 
	printf("*6. ����������4.6 ��ax^2+bx+c=0���̵Ľ�  p90-91                             *\n");                                                           
	printf("*7. ����������4.7 ���乫˾���û������˷�  p92-93                            *\n");                                                            
	printf("*8. ������ϰ��4.3 д��������߼����ʽ��ֵ ��a=3,b=4,c=5  p94-95            *\n");
	printf("*9. ������ϰ��4.4 ����������a,b,c,�ɼ�������,������е�������,������ p95*\n");
	printf("*10.������ϰ��4.5 ����������x��ֵ,����ֶκ���y��ֵ  p95                    *\n");
	printf("*11.������ϰ��4.6 ����һ�ٷ��Ƴɼ�,Ҫ������ɼ��ȼ�'A','B','C','D','E'  p95 *\n");
	printf("*12.������ϰ��4.7 ��һ����������λ��������,Ҫ��(1)������Ǽ�λ��(2)�ֱ���� *\n");
	printf("*   ÿһ������(3)�����������λ����  p95                                    *\n");
	printf("*13.������ϰ��4.8 �Ӽ������뵱������I,��Ӧ����������  p95                   *\n");
	printf("*14.������ϰ��4.9 �����ĸ�����,Ҫ����С�����˳�����  p95                *\n");
	printf("*15.������ϰ��4.10��������һ�������,��õ�Ľ����߶�  p95                  *\n");
	printf("*16.�������˵���                                                            *\n");
	printf("*17.�˳���                                                                  *\n");
	printf("*****************************************************************************\n");

	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch (choose4)
	{
		case 1:	system("cls");
				example4_1();
				break;

		case 2:	system("cls");
				example4_2();
				break;

		case 3:	system("cls");
				example4_3();
				break;

		case 4:	system("cls");
				example4_4();
				break;

		case 5:	system("cls");
				example4_5();
				break;

		case 6:	system("cls");
				example4_6();
				break;

		case 7:	system("cls");
				example4_7();
				break;

		case 8:	system("cls");
				exercise4_1();
				break;

		case 9:	system("cls");
				exercise4_2();
				break;

		case 10: system("cls");
				exercise4_3();
				break;

		case 11: system("cls");
				exercise4_4();
				break;

		case 12:system("cls");
				exercise4_5();
				break;

		case 13:system("cls");
				exercise4_6();
				break;

		case 14:system("cls");
				exercise4_7();
				break;
				
		case 15:system("cls");
				exercise4_8();
				break;

		case 16:system("cls");
				main();
				break;

		case 17:system("cls");
				goto end;	
				break;
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos4);
				if (choos4=='y'||choos4=='Y')
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
��������:	��������������������ֵ��С�����˳�������������
һ����ʽ��	example4_1()
����˵����			
�� �� ֵ��	����
������ʽ��	example4_1()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int example4_1()
{
	//1. ����������4.1	��������������������ֵ��С�����˳�������������  p80-81
	printf("1.����4.1  ��������������������ֵ��С�����˳�������������\n");

	//3.��ȡ����
	printf("������һ������a=");
	scanf("%d",&a);
	printf("������һ������b=");
	scanf("%d",&b__);

	//4.��������
	if (a>b__)
	{
	  c__=a;
	  d=b__;
	}
	else 
	{
	  c__=b__;
	  d=a;
	}

	//5.�������
	printf("%d,%d\n",d,c__);
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos4);
				if (choos4=='y'||choos4=='Y')
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
��������:	����������a,b,c,Ҫ����С�����˳�����
һ����ʽ��	example4_2()
����˵����			
�� �� ֵ��	����
������ʽ��	example4_2()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int example4_2()
{
	//2. ����������4.2	����������a,b,c,Ҫ����С�����˳����� p80-81
	printf("2.����4.2  ����������a,b,c,Ҫ����С�����˳�����\n");

	//3.��ȡ����
	printf("������һ������a=");
	scanf("%d",&a);
	printf("������һ������b=");
	scanf("%d",&b__);
	printf("������һ������c=");
	scanf("%d",&c__);
	

	//4.��������
	if (a>b__)
	{
		t=a;
		a=b__;
		b__=t;
	}
	if (a>c__)
	{
		t=a;
		a=c__;
		c__=t;
	}
	if (b__>c__)
	{
		t=b__;
		b__=c__;
		c__=t;
	}

	//5.�������
	printf("��С�����������������ֵ%d,%d,%d\n",a,b__,c__);
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	������Ϻ�����ֵ
һ����ʽ��	example4_3()
����˵����			
�� �� ֵ��	ʵ��
������ʽ��	example4_3()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int example4_3()
{
	//3. ����������4.3	������Ϻ�����ֵ
	printf("3.����4.3  ������Ϻ�����ֵ\n");

	//3.��ȡ����
	printf("������һ������x=");
	scanf("%d",&x);
	
	//4.��������
	if (x<0)
	{ 
		y=-1;
	}
	else
	if(x==0)
	{
		y=0;
	}
	else
	{
		y=1;
	}
	
	//5.�������
	printf("x=%d,y=%d\n",x,y);
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	����һ���ַ����б����Ƿ��Ǵ�д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��������õ����ַ�
һ����ʽ��	example4_4()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example4_4()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int example4_4()
{
	//4. ����������4.4  ����һ���ַ����б����Ƿ��Ǵ�д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��������õ����ַ�
	printf("4.����4.4  ����һ���ַ����б����Ƿ��Ǵ�д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��������õ����ַ�\n");

	//3.��ȡ����
	printf("������һ���ַ�������ch= ");
	//	    scanf("%c",& ch);
	getchar();
	ch=getchar();
	
	//4.��������
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;//���������"a?b:c"������aִ��b����ִ֮��c
	
	//5.�������
	printf("%c\n",ch);
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	д�����ж�ĳһ���Ƿ�������
һ����ʽ��	example4_5()
����˵����			
�� �� ֵ��	����
������ʽ��	example4_5()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int example4_5()
{
	//5. ����������4.5 д�����ж�ĳһ���Ƿ�������
	printf("5.����4.5  д�����ж�ĳһ���Ƿ�������\n");

	//3.��ȡ����
	printf("������һ�����year= ");
	scanf("%d",&year);
	//4.��������	//5.�������
	if (year%4==0)
	{
		if(year%100==0)
		{
			if(year%400==0)
			{
				leap=1;
			}
			else
			{
				leap=0;
			}
		}
		else
		{
			leap=1;
		}
	}
	else
	{
		leap=0;
	}
	if(leap)
	{
		printf("%d is ",year);
	}
	else
	{
		printf("%d is not ",year);
		printf("a leap year.\n");
	}
		printf("\n");
	//����ѭ������	
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	��ax^2+bx+c=0���̵Ľ�
һ����ʽ��	example4_6()
����˵����			
�� �� ֵ��	ʵ��
������ʽ��	example4_6()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int example4_6()
{
	//6. ����������4.6 ��ax^2+bx+c=0���̵Ľ�
	printf("6.����4.6  ��ax^2+bx+c=0���̵Ľ� \n");

	//3.��ȡ����
	printf("�������Ԫһ�η��̶������ϵ��g=");
	scanf("%f",&g);
	printf("�������Ԫһ�η���һ�����ϵ��h=");
	scanf("%f",&h_);	  
	printf("�������Ԫһ�η��̳��������ϵ��i=");
	scanf("%f",&i);
	printf("�ö�Ԫһ�η��̵Ľ�");
	
	//4.��������	//5.�������
	if(fabs(g)<=1e-6)
	{
		printf("is not a quadratic\n");
	}
	else
	{
		disc_=h_*h_-4*g*i;
		if (fabs(disc_)<=1e-6)
		{
			printf("�÷�����������ȸ���%8.4f\n",-h_/(2*g));
		}
		else if(disc_>1e-6)
		{
			x1_=(-h_+sqrt(disc_))/(2*g);
			x2_=(-h_-sqrt(disc_))/(2*g);
			printf("�÷������������ȸ���%8.4fand%8.4f\n",x1_,x2_);
		}
		else 
		{
			realpart=-h_/(2*g);
			imagpart=sqrt(-disc_)/(2*g);
			printf("�÷����и�������\n");
			printf("%8.4f+%8.4fi\n",realpart,imagpart);
			printf("%8.4f-%8.4fi\n",realpart,imagpart);
		}
	printf("\n");
	}
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	���乫˾���û������˷�
һ����ʽ��	example4_7()
����˵����			
�� �� ֵ��	ʵ��
������ʽ��	example4_7()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int example4_7()
{
	//7. ����������4.7  ���乫˾���û������˷�p92-93
	printf("7.����4.7  ���乫˾���û������˷�\n");
	
	//3.��ȡ����
	printf("please enter price:(����������)");
	scanf("%f",&p__);
	printf("please enter weight:(����������)");
	scanf("%f",&w);
	printf("please enter distance:(��������)");
	scanf("%d",&s_);
	
	//4.��������
	if(s_>=3000) 
	{
		c1=12;
	}
	else
	{
		c1=s_/250;
	}  
	switch(c1)
	{
		case 0:d1=0;break;
		case 1:d1=2;break;
		case 2:
		case 3:d1=5;break;
		case 4:
		case 5:
		case 6:
		case 7:d1=8;break;
		case 8:
		case 9:
		case 10:
		case 11:d1=10;break;
		case 12:d1=15;break;
	}
	f1=p__*w*s_;
	
	//5.�������	  
	printf("freight=%10.2f\n",f1);
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	д��������߼����ʽ��ֵ����a=3,b=4,c=5
һ����ʽ��	exercise4_1()
����˵����			
�� �� ֵ��	����
������ʽ��	exercise4_1()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*///���������������������У�С������	
int exercise4_1()
{	  
	//8.������ϰ���3��	д��������߼����ʽ��ֵ����a=3,b=4,c=5
	printf("8.ϰ���3��  д��������߼����ʽ��ֵ����a=3,b=4,c=5\n");

	//2.��������ֵ
	a=3;
	b__=4;
	c__=5;
	
	//3.��ȡ����
	
	//4.��������
	
	//5.�������
	printf("1. a+b__ > c__ && b__ ==c__    => %d\n",a+b__ > c__ && b__ ==c__);	
	printf("1. ((a+b__) > c__) && (b__ == c__)    => %d\n",((a+b__) > c__) && (b__ == c__));	
	printf("2. a||b__ + c__ && b__ - c__   => %d\n",a||b__ + c__ && b__ - c__);	
	printf("3. !(a>b__) && !c__ || 1   => %d\n",!(a>b__) && !c__ || 1);	
	printf("4. !(x=a) && (y=b__) && 0  => %d\n",!(x=a) && (y=b__) && 0);	
	printf("5. !(a+b__)+c__-1 && b__+c__-1  => %d\n",!(a+b__)+c__-1 && b__+c__-1);	
	printf("\n");
//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	����������a,b,c,�ɼ������룬������е���������������
һ����ʽ��	exercise4_2()
����˵����			
�� �� ֵ��	����
������ʽ��	exercise4_2()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int exercise4_2()
{
	//9.������ϰ���4��	����������a,b,c,�ɼ������룬������е���������������
	printf("9.ϰ���4��  ����������a,b,c,�ɼ������룬������е���������������\n");

	//3.��ȡ����
	printf("������һ������a=");
	scanf("%d",&a);
	printf("������һ������b=");
	scanf("%d",&b__);
	printf("������һ������c=");
	scanf("%d",&c__);
	
	//4.��������
	if(a>b__)
	{
		iMax=a;
	}
	else 
	{
		iMax=b__;
	}
	if(iMax<c__)
	{
		iMax=c__;
	}
	
	//5.�������
	printf("iMax = %d\n",iMax);	 
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	����������x��ֵ������ֶκ���y��ֵ
һ����ʽ��	exercise4_3()
����˵����			
�� �� ֵ��	����
������ʽ��	exercise4_3()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int exercise4_3()
{
	//10. ������ϰ���5��	����������x��ֵ������ֶκ���y��ֵ	
	printf("10.ϰ���5��  ����������x��ֵ������ֶκ���y��ֵ \n");
	
	//3.��ȡ����
	printf("������һ������ x = ");
	scanf("%d",&x);
	
	//4.��������	//5.�������
	if(x<1)
	{
		y=x;
	}
	if( (x>=1) && (x<10) )
	{
		y = 2*x -1 ;
	}
	if(x>=10)
	{
		y=3*x-11;
	}
	printf("y = %d\n",y);
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ�'A'(>=90),'B'(80-89),'C'(70-79),'D'(60-69),'E'(<60)
һ����ʽ��	exercise4_4()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	exercise4_4()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int exercise4_4()
{	
	//11.������ϰ���6��  ����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ�'A'(>=90),'B'(80-89),'C'(70-79),'D'(60-69),'E'(<60)p95
	printf("11.ϰ���6��  ����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ�'A'(>=90),'B'(80-89),'C'(70-79),'D'(60-69),'E'(<60)\n");

	//3.��ȡ����
	printf("������һ���ٷ��Ƴɼ�d=");
	scanf("%d",&d);
	
	//4.��������   5.�������
	if (d>=90)
	{
		printf("����ɼ��ȼ�=A\n");
	}
	if ((d>=80)&(d<=89))
	{
		printf("����ɼ��ȼ�=B\n");
	}
	if ((d>=70)&(d<=79))
	{
		printf("����ɼ��ȼ�=C\n");
	}
	if ((d>=60)&(d<=69))
	{
		printf("����ɼ��ȼ�=D\n");
	}
	if (d<60)
	{
		printf("����ɼ��ȼ�=E\n");
	}
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	��һ����������λ����������Ҫ��(1)������Ǽ�λ��(2)�ֱ����ÿһ������(3)�����������λ����
һ����ʽ��	exercise4_5()
����˵����			
�� �� ֵ��	����
������ʽ��	exercise4_5()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int exercise4_5()
{
	//12.������ϰ���7��  ��һ����������λ����������Ҫ��(1)������Ǽ�λ��(2)�ֱ����ÿһ������(3)�����������λ����p95
	printf("12.ϰ���7��  ��һ����������λ����������Ҫ��(1)������Ǽ�λ��(2)�ֱ����ÿһ������(3)�����������λ����\n");

	//3.��ȡ����
	printf("������һ����������λ����������a=");
	scanf("%d",&a);
	
	//4.��������    //5.�������
	if (a/10000!=0)
	{
		b1_=a/10000;
		a=a-b1_*10000;
		b2=a/1000;
		a=a-b2*1000;
		b3=a/100;
		a=a-b3*100;
		b4=a/10;
		a=a-b4*10;
		b5=a;
		printf("���������a�ĸ�λ����Ϊ=%d%d%d%d%d\n",b5,b4,b3,b2,b1_);
		printf("a��һ��5λ��������\n");
		printf("a���ҵ�5λ=%d\n",b1_);
		printf("a���ҵ�4λ=%d\n",b2);
		printf("a���ҵ�3λ=%d\n",b3);
		printf("a���ҵ�2λ=%d\n",b4);
		printf("a���ҵ�1λ=%d\n",b5);	  
	}
	else if((a/10000==0)&(a/1000!=0))
	{
		b2=a/1000;
		a=a-b2*1000;
		b3=a/100;
		a=a-b3*100;
		b4=a/10;
		a=a-b4*10;
		b5=a;
		printf("���������a�ĸ�λ����Ϊ=%d%d%d%d\n",b5,b4,b3,b2);
		printf("a��һ��4λ��������\n");
		printf("a���ҵ�4λ=%d\n",b2);
		printf("a���ҵ�3λ=%d\n",b3);
		printf("a���ҵ�2λ=%d\n",b4);
		printf("a���ҵ�1λ=%d\n",b5);
	}
	else if((a/1000==0)&(a/100!=0))
	{
		b3=a/100;
		a=a-b3*100;
		b4=a/10;
		a=a-b4*10;
		b5=a;
		printf("���������a�ĸ�λ����Ϊ=%d%d%d\n",b5,b4,b3);
		printf("a��һ��3λ��������\n");
		printf("a���ҵ�3λ=%d\n",b3);
		printf("a���ҵ�2λ=%d\n",b4);
		printf("a���ҵ�1λ=%d\n",b5);
	}
	else if((a/100==0)&(a/10!=0))
	{
		b4=a/10;
		a=a-b4*10;
		b5=a;
		printf("���������a�ĸ�λ����Ϊ=%d%d\n",b5,b4);
		printf("a��һ��2λ��������\n");
		printf("a���ҵ�2λ=%d\n",b4);
		printf("a���ҵ�1λ=%d\n",b5);
	}
	else 
	{
		b5=a;
		printf("���������a�ĸ�λ����Ϊ=%d%d\n",b5,b4);
		printf("a��һ��1λ��������\n");
		printf("a���ҵ�1λ=%d\n",b5);
	}
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	�Ӽ������뵱������I����Ӧ����������
һ����ʽ��	exercise4_6()
����˵����			
�� �� ֵ��	ʵ��
������ʽ��	exercise4_6()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int exercise4_6()
{
	//13.������ϰ���8��(1)  �Ӽ������뵱������I����Ӧ���������� p95
	printf("13.1ϰ���8��  �Ӽ������뵱������I����Ӧ���������� \n");
	printf("13.1��if�������\n");

	//3.��ȡ����
	printf("�����뵱������I=");
	scanf("%f",&I);      
	
	//4.��������
	if (I<=100000)
	{
		P_=I*(0.1);
	}
	if ((I>100000)&&(I<=200000))
	{
		P_=10000.0+(I-100000.0)*(0.075);
	}
	if ((I>200000)&&(I<=400000))
	{
		P_=17500.0+(I-200000.0)*(0.05);
	}
	if ((I>400000)&&(I<=600000))
	{
		P_=27500.0+(I-400000.0)*(0.03);
	}
	if ((I>600000)&&(I<=1000000))
	{
		P_=33500.0+(I-600000.0)*(0.015);
	}
	if (I>1000000)
	{
		P_=39500.0+(I-1000000.0)*(0.001);
	}
	
	//5.�������
	printf("Ӧ��������P=");
	printf("%f",P_);
	printf("\n\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	��switch�������
һ����ʽ��	exercise4_7()
����˵����			
�� �� ֵ��	ʵ��
������ʽ��	exercise4_7()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int exercise4_7()
{
	//3.������ϰ���8��(2) ��switch�������  p95
	printf("13.2ϰ��8	��switch�������\n");

	//3.��ȡ����
	printf("�����뵱������I=");
	scanf("%f",&I); 
	
	//4.��������
	if (I>1000000)
	{
		c__=10;
	}
	else 
	{
		c__=int (I)/100000;
	}
	switch (c__)
	{
		case 0: P_=I*(0.1);
		break;
		case 1: P_=10000+(I-100000)*(0.075);
		break;
		case 2: P_=17500+(I-200000)*(0.05);
		break;
		case 3: P_=17500+(I-200000)*(0.05);
		break;
		case 4: P_=27500+(I-400000)*(0.03);
		break;
		case 5: P_=27500+(I-400000)*(0.03);
		break;
		case 6: P_=33500+(I-600000)*(0.015);
		break;
		case 7: P_=33500+(I-600000)*(0.015);
		break;
		case 8: P_=33500+(I-600000)*(0.015);
		break;
		case 9: P_=33500+(I-600000)*(0.015);
		break;
		case 10: P_=39500+(I-1000000)*(0.001);
		break;
	}
	
	//5.�������
	printf("Ӧ��������P_=");
	printf("%f\n\n",P_);
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	�����ĸ�������Ҫ����С�����˳�����
һ����ʽ��	exercise4_8()
����˵����			
�� �� ֵ��	����
������ʽ��	exercise4_8()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int exercise4_8()
{
	//14.������ϰ���9��  �����ĸ�������Ҫ����С�����˳����� p95
	printf("14.ϰ���9��  �����ĸ�������Ҫ����С�����˳�����\n");

	//3.��ȡ����
	printf("����������a=");
	scanf("%d",&a);
	printf("����������b=");
	scanf("%d",&b__);
	printf("����������c=");
	scanf("%d",&c__);
	printf("����������d=");
	scanf("%d",&d);
	
	//4.��������
	if (a<b__)
	{
		t1=b__;
		t2=a;
	}
	else 
	{
		t1=a;
		t2=b__;
	}
	if (t1<c__)
	{
		t2=t1;
		t1=c__;
		t3=b__;
	}
	else if (t2<c__)
	{
		t3=t2;
		t2=c__;
	}   
	else 
	{
		t3=c__;
	}
	if (t1<d)
	{
		t1=d;
		t2=t1;
		t3=t2;
		t4=t3;
	}
	else if (t2<d)
	{
		t3=t2;
		t2=d;
		t4=t3;
	}
	else if (t3<d)
	{
		t4=t3;
		t3=d;
	}
	else 
	{
		t4=d;
	}

	//5.������� 
	printf("����С�����˳�����a,b,c,d:");
	printf("%d ",t4);
	printf("%d ",t3);
	printf("%d ",t2);
	printf("%d \n",t1);
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
��������:	��������һ������꣬��õ�Ľ����߶�
һ����ʽ��	exercise4_9()
����˵����			
�� �� ֵ��	ʵ��
������ʽ��	exercise4_9()
Date		Name		Create/Correct
2012_11_18	liweikang	create
2013_1_6	liweikang	correct(��ʽ�޸�)
===============================================================================
*/
int exercise4_9()
{
	//15.������ϰ���10�� ��������һ������꣬��õ�Ľ����߶� p95
	printf("15.ϰ���10�� ��������һ������꣬��õ�Ľ����߶�\n");

	//3.��ȡ����
	printf("�������ĺ�����m=");
	scanf("%f",&m_);
	printf("��������������n=");
	scanf("%f",&n_);
	
	//4.��������
	a2=(m_-2)*(m_-2)+(n_-2)*(n_-2);
	b6=(m_+2)*(m_+2)+(n_-2)*(n_-2);
	c2=(m_+2)*(m_+2)+(n_+2)*(n_+2);
	d2=(m_-2)*(m_-2)+(n_+2)*(n_+2);
	if ((a2==1)||(b6==1)||(c2==1)||(d2==1))
	{
		printf("��(m,n)��������ĸ߶�Ϊ100��\n");
	}
	else
	{
		printf("��(m,n)��������ĸ߶�Ϊ0��\n");
	}
	
	//5.������� 
	printf("\n");
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose4);
	switch(choose4)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_4();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choose4);
				if (choos4=='y'||choos4=='Y')
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
