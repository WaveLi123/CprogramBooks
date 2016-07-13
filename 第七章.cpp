/*
**************************************************************************************************************************************************
															��ΰ��_1240069
//���ݣ�������
//ʱ�䣺2012_12_21
//1.����7.1	�������õļ����ӡ�p140
//2.����7.2	��������������Ҫ����һ������������еĴ��ߣ������������������ֵ��p144
//3.����7.3	����ֵ�����뺯��ֵ���Ͳ�ͬ��p146
//4.����7.4	�Ա����õĺ�����������p149
//5.����7.5	�����ĸ��������ҳ�������������p152
//6.����7.6	�����������һ�𣬴ӵ�����˿�ʼ�����α���һ���˴����ꡣ��֪��һ������ʮ�ꡣ�ʵ�����˶��p154
//7.����7.7	�õݹ鷨��n����p156
//8.����7.8	Hanoi�����⡣p157
//9.����7.9	����������a��b������ʮ��Ԫ�أ������Ƕ�Ӧ������Ƚϡ��ҳ����еĽϴ����飬���ֱ�ͳ�Ƴ�����������ӦԪ�ش��ڡ����ں�С�ڵĴ�����p160
//10.����7.10��һ��һά����score,�ڷ�ʮ��ѧ���ɼ��� ��һ����������ƽ���ɼ���p161
//11.����7.11��дһ�������������ֱ�������score_1����5��Ԫ�أ�������score_2����ʮ��Ԫ�أ���Ԫ�ص�ƽ��ֵ��	p162
//12.����7.12	
//13.����7.13
//14.����7.14
//15.����7.15
//16.����7.16
//17.����7.17
//18.����7.18
//19.����7.19
//20.����7.20
//1.ϰ��7.1
//2.ϰ��7.2
//3.ϰ��7.3
//4.ϰ��7.4
//5.ϰ��7.5
//6.ϰ��7.6
//7.ϰ��7.7
//8.ϰ��7.8
//9.ϰ��7.8
//10.ϰ��7.10
//11.ϰ��7.11
//12.ϰ��7.12
//13.ϰ��7.13
//14.ϰ��7.14
//15.ϰ��7.15
//16.ϰ��7.16
//17.ϰ��7.17
//18.ϰ��7.18
//��ע������ʱ����ȣ����µ���Ŀû����
**************************************************************************************************************************************************
*/
//����1������ʱ�����⣬����˵���еĲ�׼ȷ


#include "head.h"
#include "seventh.h"
#include <windows.h>
int system(const char *string);
int choose7;//����ȫ�ֱ���
int choos7;//����ȫ�ֱ���
int number_7()
{
start:
	printf("�ӭ���롶C������ƽ̡̳������£���\n");
	printf("*******************************************************************************\n");
	printf("*1. ����7.1 �������õļ�����p140                                            *\n");
	printf("*2. ����7.2 ������������,Ҫ����һ������������еĴ���,�����������������ֵp144*\n");
	printf("*3. ����7.3 ����ֵ�����뺯��ֵ���Ͳ�ͬp146                                    *\n");
	printf("*4. ����7.4 �Ա����õĺ���������p149                                          *\n");
	printf("*5. ����7.5 �����ĸ�����,�ҳ�����������p152                                 *\n");
	printf("*6. ����7.6 �����������һ��,�ӵ�����˿�ʼ,���α���һ���˴�����.��֪��һ���� *\n");
	printf("*   ʮ��.�ʵ�����˶��p154                                                   *\n");
	printf("*7. ����7.7 �õݹ鷨��n��p156                                                 *\n");
	printf("*8. ����7.8 Hanoi������ p157                                                  *\n");
	printf("*9. ����7.9 ����������a��b,��ʮ��Ԫ��,�����Ƕ�Ӧ������Ƚ�.�ҳ����еĽϴ�����,*\n");
	printf("*   ���ֱ�ͳ�Ƴ�����������ӦԪ�ش���|���ں�С�ڵĴ���p160                     *\n");
	printf("*10.����7.10��һ��һά����score,�ڷ�ʮ��ѧ���ɼ�, ��һ����������ƽ���ɼ�p161  *\n");
	printf("*11.����7.11��дһ������,����������score_1(��5��Ԫ��)������score_2(��ʮ��Ԫ   *\n");
	printf("*   ��)��Ԫ�ص�ƽ��ֵp162                                                     *\n");
	printf("*12.����7.12                                                                  *\n");																		  
	printf("*13.����7.13                                                                  *\n");																		  
	printf("*14.����7.14                                                                  *\n");																		  
	printf("*15.����7.15                                                                  *\n");																		  
	printf("*16.����7.16                                                                  *\n");																		  
	printf("*17.����7.17                                                                  *\n");																		  
	printf("*18.����7.18                                                                  *\n");																		  
	printf("*19.����7.19                                                                  *\n");																	      
	printf("*20.����7.20                                                                  *\n");
	printf("*21.ϰ��7.1                                                                   *\n");
	printf("*22.ϰ��7.2                                                                   *\n");
	printf("*23.ϰ��7.3                                                                   *\n");
	printf("*24.ϰ��7.4                                                                   *\n");
	printf("*25.ϰ��7.5                                                                   *\n");
	printf("*26.ϰ��7.6                                                                   *\n");
	printf("*27.ϰ��7.7                                                                   *\n");
	printf("*28.ϰ��7.8                                                                   *\n");
	printf("*29.ϰ��7.9                                                                   *\n");
	printf("*30.ϰ��7.10                                                                  *\n");
	printf("*31.ϰ��7.11                                                                  *\n");
	printf("*32.ϰ��7.12                                                                  *\n");
	printf("*33.ϰ��7.13                                                                  *\n");
	printf("*34.ϰ��7.14                                                                  *\n");
	printf("*35.ϰ��7.15                                                                  *\n");
	printf("*36.ϰ��7.16                                                                  *\n");
	printf("*37.ϰ��7.17                                                                  *\n");
	printf("*38.ϰ��7.18                                                                  *\n");
	printf("*39.�������˵�                                                                *\n");
	printf("*40.�˳�                                                                      *\n");
	printf("*******************************************************************************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch (choose7)
	{

		case 1:	system("cls");
				example7_1();
				break;

		case 2:	system("cls");
				example7_2();
				break;

		case 3:	system("cls");
				example7_3();
				break;

		case 4:	system("cls");
				example7_4();
				break;

		case 5:	system("cls");
				example7_5();
				break;

		case 6:	system("cls");
				example7_6();
				break;
		case 7:	system("cls");
				example7_7();
				break;

		case 8:	system("cls");
				example7_8();
				break;

		case 9:	system("cls");
				example7_9();
				break;

		case 10:system("cls");
				example7_10();
				break;

		case 11:system("cls");
				example7_11();
				break;

		case 12:system("cls");
				example7_12();
				break;

		case 13:system("cls");
				example7_13();
				break;

	
		case 14:system("cls");
				example7_14();;
				break;

		case 15:system("cls");
				example7_15();
				break;

		case 16:system("cls");
				example7_16();
				break;

		case 17:system("cls");
				example7_17();
				break;

		case 18:system("cls");
				example7_18();
				break;

		case 19:system("cls");
				example7_19();
				break;
		case 20:system("cls");
				example7_20();
				break;
		case 21:system("cls");
				exercise7_1();
				break;

		case 22:system("cls");
				exercise7_2();
				break;

		case 23:system("cls");
				exercise7_3();
				break;

		case 24:system("cls");
				exercise7_4();
				break;

		case 25:system("cls");
				exercise7_5();
				break;

		case 26:system("cls");
				example7_6();
				break;
		case 27:system("cls");
				exercise7_7();
				break;

		case 28:system("cls");
				exercise7_8();
				break;

		case 29:system("cls");
				exercise7_9();
				break;

		case 30:system("cls");
				exercise7_10();
				break;

		case 31:system("cls");
				exercise7_11();
				break;

		case 32:system("cls");
				exercise7_12();
				break;

		case 33:system("cls");
				exercise7_13();
				break;

	
		case 34:system("cls");
				exercise7_14();;
				break;

		case 35:system("cls");
				exercise7_15();
				break;

		case 36:system("cls");
				exercise7_16();
				break;

		case 37:system("cls");
				exercise7_17();
				break;

		case 38:system("cls");
			    exercise7_18();
				break;

		case 39:system("cls");
				main();	
				break;

		case 40:system("cls");
				goto end;	
				break;
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int example7_1()
{
	//1.����7.1	�������õļ����ӡ�	p140
	printf("1.����7.1	�������õļ����ӡ�	p140\n");
	void printstar();
	void print_message();
	printstar();
	print_message();
	printstar();
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void printstar()
{
	printf("*********************************************\n");
}
void print_message()
{
	printf("Welcome to the world of computers!\n");
}






/*
===============================================================================
��������:	��������������Ҫ��Ҫ����һ������������еĴ��ߣ������������������ֵ
һ����ʽ��	example2()
����˵����	int a;
			int b;
			int c;
�� �� ֵ��	����
������ʽ��	example2()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int max_x(int x,int y);	
int example7_2()
{
	//2.����7.2	��������������Ҫ��Ҫ����һ������������еĴ��ߣ������������������ֵ�� p144
	printf("2.����7.2	��������������Ҫ��Ҫ����һ������������еĴ��ߣ������������������ֵ�� p144\n");
							
	//1.�����������
	int a;
	int b;
	int c;

	//2.��������ֵ
	a=0;
	b=0;
	c=0;

	//3.��ȡ����
	printf("����������a=");
	scanf("%d",&a);
	printf("����������b=");
	scanf("%d",&b);

	//4.��������
	c=max(a,b);

	//5.�������
	printf("������%d,%d���еĽϴ���Ϊ��%d\n\n",a,b,c);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int max_x(int x,int y)
{
	//1.�����������
	int z;

	//2.��������ֵ
	z=0;

	//3.��ȡ����

	//4.��������
	z=x>y?x:y;

	//5.�������
	return z;
}





/*
===============================================================================
��������:	��������������Ҫ��Ҫ����һ������������еĴ��ߣ������������������ֵ��
һ����ʽ��	example3()
����˵����	float a;
			float b;
			int c;		
�� �� ֵ��	����
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int max2(float x,float y);							//������������
int example7_3()
{
	//2.����7.2	��������������Ҫ��Ҫ����һ������������еĴ��ߣ������������������ֵ�� p144
	printf("3.����7.2	��������������Ҫ����һ������������еĴ��ߣ������������������ֵ�� p144\n");


	//1.�����������
	float a;
	float b;
	int c;

	//2.��������ֵ
	a=0;
	b=0;
	c=0;

	//3.��ȡ����
	printf("����������a=");
	scanf("%f",&a);
	printf("����������b=");
	scanf("%f",&b);

	//4.��������
	c=max2(a,b);

	//5.�������
	printf("������%f,%f���еĽϴ���Ϊ��%d\n\n",a,b,c);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int max2(float x,float y)
{
	//1.�����������
	float z;

	//2.��������ֵ
	z=0;

	//3.��ȡ����

	//4.��������
	z=x>y?x:y;

	//5.�������
	return z;
}





/*
===============================================================================
��������:	�Ա����õĺ���������
һ����ʽ��	example4()
����˵����		float a;
				float b;
				float c;		
�� �� ֵ��	����
������ʽ��	example4()
Date		Name		Create/Correct
2012_12_21	liweikang	create
=============================================================================
*/
float add(float x,float y)
{
	float z;
	z=x+y;
	return z;
}
int example7_4()
{
	//4.����7.4	�Ա����õĺ�����������	p149
	printf("4.����7.4	�Ա����õĺ�����������	p149\n");

	//1.�����������
	float a;
	float b;
	float c;

	//2.��������ֵ
	a=0.0;
	b=0.0;
	c=0.0;

	//3.��ȡ����
	printf("������ʵ��a��ֵ��");
	scanf("%f",&a);
	printf("������ʵ��b��ֵ��");
	scanf("%f",&b);

	//4.��������
	c=add(a,b);

	//5.�������
	printf("����ʵ����%f,%f���ĺ�Ϊ��%f\n\n",a,b,c);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
��������:	�����ĸ��������ҳ�������������
һ����ʽ��	example5()
����˵����	int a;
			int b;
			int c;
			int d;
			int max;		
�� �� ֵ��	����
������ʽ��	example5()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int max_4(int a,int b,int c,int d);
int example7_5()
{
	//5.����7.5	�����ĸ��������ҳ�������������p152
	printf("5.����7.5	�����ĸ��������ҳ�������������p152\n");

	//1.�����������
	int a;
	int b;
	int c;
	int d;
	int max;

	//2.��������ֵ
	a=0;
	b=0;
	c=0;
	d=0;
	max=0;

	//3.��ȡ����
	printf("����������a=");
	scanf("%d",&a);		
	printf("����������b=");
	scanf("%d",&b);
	printf("����������c=");
	scanf("%d",&c);
	printf("����������d=");
	scanf("%d",&d);

	//4.��������
	max=max_4(a,b,c,d);

	//5.�������
	printf("�ĸ�����%d,%d,%d,%d���нϴ����Ϊ%d\n\n",a,b,c,d,max);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int max_4(int a,int b,int c,int d)
{	int max_2(int x,int y);
	int m;
	m=0;
	m=max_2(a,b);
	m=max_2(m,c);
	m=max_2(m,d);
	return m;
}
int max_2(int x,int y)
{
	int z;
	z=x>y?x:y;
	return z;
}





/*
===============================================================================
��������:	�����������һ�𣬴ӵ�����˿�ʼ�����α���һ���˴����ꡣ��֪��һ������ʮ�ꡣ�ʵ�����˶��
һ����ʽ��	example6()
����˵����			
�� �� ֵ��	����
������ʽ��	example6()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int age(int n );
int example7_6()
{
	//6.����7.6	�����������һ�𣬴ӵ�����˿�ʼ�����α���һ���˴����ꡣ��֪��һ������ʮ�ꡣ�ʵ�����˶��p154
	printf("6.����7.6	�����������һ�𣬴ӵ�����˿�ʼ�����α���һ���˴����ꡣ��֪��һ������ʮ�ꡣ�ʵ�����˶��p154\n");

	//1.�����������

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	
	//5.�������
	printf("������˵�����Ϊ��%d\n\n",age(5));

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int age(int n)
{
	int c;
	if (n==1)
	{
		c=10;
	}
	else
	{
		c=age(n-1)+2;
	}
	return c;
}






/*
===============================================================================
��������:	�õݹ鷨��n��
һ����ʽ��	example7()
����˵����		int n;
				int y;	
�� �� ֵ��	����
������ʽ��	example7()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/	
int fac(int n);
int example7_7()
{
	//7.����7.7	�õݹ鷨��n����p156
	printf("7.����7.7	�õݹ鷨��n����p156\n");

	//1.�����������
	int n;
	int y;

	//2.��������ֵ
	n=0;
	y=0;

	//3.��ȡ����
	printf("Please input an interger number:");
	scanf("%d",&n);

	//4.��������
	y=fac(n);

	//5.�������
	printf("%d��=%d\n\n",n,y);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int fac(int n)
{
	int c;
	c=0;
	if (n<0)
	{
		printf("n<0,data error");
	}
	else if (n==0||n==1)
	{
		c=1;
	}
	else
	{
		c=fac(n-1)*n;
	}
	return (c);
}






/*
===============================================================================
��������:	Hanoi�����⡣
һ����ʽ��	example8()
����˵����	int n;		
�� �� ֵ��	������100�����ĺ�
������ʽ��	example8()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
void hanoi(int n, char one,char two,char three);
int example7_8()
{
	//8.����7.8	Hanoi�����⡣p157
	printf("8.����7.8	Hanoi�����⡣p157\n");
	
	//1.�����������
	int n;

	//2.��������ֵ
	n=0;

	//3.��ȡ����
	printf("Please input the number of the dishes:");
	scanf("%d",&n);

	//4.��������
	
	//5.�������
	printf("The steps to move the %d dishes are:\n",n);
	hanoi(n,'A','B','C');
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void hanoi(int n,char one,char two,char three)
{
	void move(char x,char y);
	if (n==1)
	{
		move(one,three);
	}
	else
	{
		hanoi(n-1,one,three,two);
		move(one,three);
		hanoi(n-1,two,one,three);
	}
}
void move(char x,char y)
{
	printf("%c--->>%c\n",x,y);
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int large(int x,int y);
int example7_9()
{
	//9.����7.9	����������a��b������ʮ��Ԫ�أ������Ƕ�Ӧ������Ƚϡ��ҳ����еĽϴ����飬���ֱ�ͳ�Ƴ�����������ӦԪ�ش��ڡ����ں�С�ڵĴ�����p160
	printf("9.����7.9	����������a��b������ʮ��Ԫ�أ������Ƕ�Ӧ������Ƚϡ��ҳ����еĽϴ����飬���ֱ�ͳ�Ƴ�����������ӦԪ�ش��ڡ����ں�С�ڵĴ�����p160\n");

	//1.�����������
	int i;
	int n;
	int m;
	int k;
	int a[10];
	int b[10];
	char ch;

	//2.��������ֵ
	m=0;
	n=0;
	i=0;
	k=0;

	//3.��ȡ����
	printf("please input an array of a:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		ch=getchar();
	}
	printf("Please input an array of b:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
		ch=getchar();
	}

	//4.��������
	for (i=0;i<10;i++)
	{
		if (large(a[i],b[i])==1)
		{
			m++;					//����a��������b�Ĵ���
		}
		if (large(a[i],b[i])==0)
		{
			n++;					//����a��������b�Ĵ���
		}
		if (large(a[i],b[i])==-1)
		{
			k++;					//����aС������b�Ĵ���
		}
	}

	//5.�������
	printf("a[i]>b[i] %d times\n",m);
	printf("a[i]=b[i] %d times\n",n);
	printf("a[i]<b[i] %d times\n",k);
	if (m>k)
	{
		printf("Array a is larger than array b\n\n");
	}
	if (m==k)
	{
		printf("Array a is equal to array b\n\n");
	}
	if (m<k)
	{
		printf("Array a is smaller than array b\n\n");
	}

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int large(int x,int y)
{
	int flag;
	flag=0;
	if (x>y)
	{
		flag=1;
	}
	if (x==y)
	{
		flag=0;
	}
	if (x<y)
	{
		flag=-1;
	}
	return (flag);
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
float	average(float array[]);
int example7_10()
{
	//10.����7.10	��һ��һά����score,�ڷ�ʮ��ѧ���ɼ��� ��һ����������ƽ���ɼ���p161
	printf("10.����7.10	��һ��һά����score,�ڷ�ʮ��ѧ���ɼ��� ��һ����������ƽ���ɼ���p161\n");

	//1.�����������
	float score[10];
	int i;
	float aver;
	char ch;

	//2.��������ֵ
	aver=0.0;
	i=0;

	//3.��ȡ����
	printf("Please input 10 students' grades:\n");
	for (i=0;i<10;i++)
	{
		scanf("%f",&score[i]);
		ch=getchar();
	}

	//4.��������
	aver=average(score);

	//5.�������
	printf("Averge score is %5.2f\n\n",aver);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
float	average(float array[])
{
	float sum;
	int j;
	float aver;
	sum=array[0];
	for (j=1;j<10;j++)
	{
		sum=sum+array[j];
	}
	aver=sum/10.0;
	return (aver);
}




/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
float averge(float array[],int n);
int example7_11()
{
	//1.����7.1	�������õļ����ӡ�	p140
	printf("11.����7.11	\n");

	//1.�����������
	int i;
	float score_1[5]={98.5,97,91.5,60,55};
	float score_2[10]={67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};
	float aver_1;
	float aver_2;

	//2.��������ֵ
	i=0;
	aver_1=0;
	aver_2=0;

	//3.��ȡ����

	//4.��������
	aver_1=averge(score_1,5);
	aver_2=averge(score_2,10);

	//5.�������
	printf("The average of class A is %6.2f\n",aver_1);
	printf("The average of class b is %6.2f\n\n",aver_2);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
float averge(float array[],int n)
{
	int i;
	float sum;
	float aver;
	sum=array[0];
	aver=0;
	for (i=1;i<n;i++)
	{
		sum=sum+array[i];
	}
	aver=sum/n;
	return (aver);
}




/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
void sort(int array[],int n);
int example7_12()
{
	//1.����7.1	�������õļ����ӡ�	p140
	printf("12.����7.12	�������õļ����ӡ�	p140\n");

	//1.�����������
	int a[10];
	int i;
	char ch;

	//2.��������ֵ
	i=0;

	//3.��ȡ����
	printf("Please input an array of 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		ch=getchar();
	}

	//4.��������
	sort(a,10);

	//5.�������
	printf("The order of the array is:\n");
	for (i=0;i<10;i++)
	{
		printf("%5d",a[i]);
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
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void sort(int array[],int n)
{
	int i;
	int j;
	int k;
	int t;
	for (i=0;i<n-1;i++)
	{
		k=i;
		for (j=i+1;j<n;j++)
		{
			if (array[i]>array[j])
			{
				k=j;
				t=array[k];
				array[k]=array[i];
				array[i]=t;
			}
		}
	}
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int max_value(int array[][4]);
int example7_13()
{
	//1.����7.1	�������õļ����ӡ�	p140
	printf("13.����7.13	�������õļ����ӡ�	p140\n");

	//1.�����������
	int a[3][4]={{1,3,5,7},{2,4,6,8},{15,17,34,12}};

	//2.��������ֵ

	//3.��ȡ����

	//4.��������

	//5.�������
	printf("���3*4�Ķ�ά��������ֵΪ��%d\n\n",max_value(a));

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int max_value(int array[][4])
{
	int j;
	int i;
	int max;
	i=0;
	j=0;
	max=array[0][0];
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			if (max<array[i][j])
			{
				max=array[i][j];
			}
		}
	}
	return (max);
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
float average_1(float array[],int n);
float Max=0;
float Min=0;
int example7_14()
{
	//1.����7.1	�������õļ����ӡ�	p140
	printf("14.����7.14	�������õļ����ӡ�	p140\n");

	//1.�����������
	int i;
	float aver;
	float score[10];
	char ch;

	//2.��������ֵ
	i=0;
	aver=0;

	//3.��ȡ����
	printf("please input 10 students' grades:\n");
	for (i=0;i<10;i++)
	{
		scanf("%f",&score[i]);
		ch=getchar();
	}

	//4.��������
	aver=average_1(score,10);

	//5.�������
	printf("Max=%5.2f\nMin=%5.2f\naverage=%5.2f\n\n",Max,Min,aver);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
float average_1(float array[],int n)
{
	int i;
	float aver;
	float sum;
	i=0;
	sum=array[0];
	aver=0;
	Max=array[0];
	Min=array[0];
	for (i=1;i<n;i++)
	{
		if (Max<array[i])
		{
			Max=array[i];
		}
		if (Min>array[i])
		{
			Min=array[i];
		}
		sum=sum+array[i];
	}
	aver=sum/n;
	return (aver);
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int max_1(int a_,int b_);
int a_=3;
int b_=5;
int example7_15()
{
	//1.����7.1	�������õļ����ӡ�	p140
	printf("15.����7.15	�������õļ����ӡ�	p140\n");
	
	//1.�����������
	int a_;
	
	//2.��������ֵ
	a_=8;
	
	//3.��ȡ����

	//4.��������

	//5.�������
	printf("max is %d\n\n",max_1(a_,b_));

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int max_1(int a_,int b_)
{
	int max;
	max=a_>b_?a_:b_;
	return (max);
}
/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
ѵ���ص㣺	��̬�ֲ�������ֵ
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int f(int);
int example7_16()
{
	//1.����7.1	�������õļ����ӡ�	p140
	printf("16.����7.16		p140\n");

	//1.�����������
	int i;
	int a;
	//2.��������ֵ
	a=2;
	i=0;
	//3.��ȡ����

	//4.��������

	//5.�������
	for (i=0;i<3;i++)
	{
		printf("%d\n\n",f(a));
	}

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int f(int a)
{	
	//1.�����������
	auto int b=0;
	static int c=3;

	//2.��������ֵ
//	b=0;
//	c=3;
	
	//3.��ȡ����
	
	//4.��������
	b++;
	c++;
	
	//5.�������
	return(a+b+c);

}
/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int fac1(int m);
int example7_17()
{
	//17.����7.17	�������õļ����ӡ�	p140
	printf("17.����7.17		p140\n");

	//1.�����������
	int i;
	//2.��������ֵ

	//3.��ȡ����

	//4.��������	//5.�������
	for (i=1;i<=5;i++)
	{
		printf("%d!=%d\n",i,fac(i));
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
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int fac1(int m)
{
	//1.�����������
	static int f=1;
	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	f=f*m;
	//5.�������
	return(f);
}






/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int max3();
int example7_18()
{
	//1.����
	printf("18.����7.18		\n");

	//1.�����������
	extern	int A;
	extern	int B;
	extern	int C;

	//2.��������ֵ
	A=0;
	B=0;
	C=0;

	//3.��ȡ����
	printf("Please input A:");
	scanf("%d",&A);
	printf("Please input B:");
	scanf("%d",&B);
	printf("Please input C:");
	scanf("%d",&C);

	//4.��������
	
	//5.�������
	printf("Max is %d\n\n",max3());

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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

int A;				//�����ⲿ����
int B;
int C;
int max3()
{
	int m;
	m=0;
	m=A>B?A:B;
	if (m<C)
	{
		m=C;
	}
	return(m);
}






/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int D;
int power(int n);
int example7_19()
{
	//1.����
	printf("19.����7.19		\n");

	//1.�����������
	int b;
	int c;
	int d;
	int m;
	
	//2.��������ֵ
	b=3;
	c=0;
	d=0;
	m=0;
	
	//3.��ȡ����
	printf("Please input the number of D:");
	scanf("%d",&D);
	printf("Please input the number of m:");
	scanf("%d",&m);
	//4.��������
	c=D*b;
	d=power(m);
	
	//5.�������
	printf("%d*%d=%d\n",D,b,c);
	printf("%d^%d=%d\n\n",D,m,d);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int power(int n)
{
	int i;
	int y;
	y=1;
	for (i=1;i<=n;i++)
	{
		y*=D;
	}
	return(y);
}



/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
extern void enter_string(char str[]);
extern void delete_string(char str[],char ch);
extern void print_string(char str[]);
int example7_20()
{
	//1.����
	printf("20.����7.20		\n");

	//1.�����������
	char c;
	char str[80];
	
	//2.��������ֵ
	c=0;
	
	//3.��ȡ����
	enter_string(str);
	scanf("%c",&c);
	
	//4.��������
	delete_string(str,c);
	
	//5.�������
	print_string(str);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void print_string(char str[])
{
	printf("%s\n",str);
}
void enter_string(char str[80])
{
	gets(str);
}
void delete_string(char str[],char ch)
{
	int i;
	int j;
	for (i=j=0;str[i]!=0;i++)
	{
		if (str[i]!=ch)
		{
			str[j++]=str[i];
		}
		str[j]='\0';
	}
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int hcf(int x,int y);
int lcd(int x,int y,int z);
int exercise7_1()
{
	//1.ϰ��
	printf("1.ϰ��7.1		\n");

	//1.�����������
	int u;
	int v;
	int h;
	int l;

	//2.��������ֵ
	u=0;
	v=0;
	h=0;
	l=0;
	
	//3.��ȡ����
	printf("Please input an interger u:");
	scanf("%d",&u);
	printf("Please input an interger v:");
	scanf("%d",&v);

	//4.��������
	h=hcf(u,v);
	l=lcd(u,v,h);
	
	//5.�������
	printf("H.C.F(���Լ��)=%d\n",h);
	printf("L.C.D(��С������)=%d\n\n",l);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int hcf(int x,int y)
{
	//1.�����������
	int t;
	int r;
	
	//2.��������ֵ
	t=0;
	r=0;
	
	//3.��ȡ����

	//4.��������
	if (x<y)
	{
		t=y;
		y=x;
		x=t;
	}
	while ((r=x%y)!=0)
	{
		x=y;
		y=r;
	}

	//5.�������
	return(y);
}
int lcd(int x,int y,int z)
{
	int s;
	s=x*y/z;
	return(s);
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
float x_1;
float x_2;
float di_sc;
float p_;
float q_;
void greater_than_zero(float,float);
void equal_to_zero(float,float);
void smaller_than_zero(float,float);
#include <math.h>
int exercise7_2()
{
	//1.����
	printf("2.ϰ��7.2		\n");

	//1.�����������
	float a;
	float b;
	float c;
	
	//2.��������ֵ
	a=0.0;
	b=0.0;
	c=0.0;
	
	//3.��ȡ����
	printf("������һԪ���η��̵�ϵ����\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	printf("equation:%fx^2+%fx+%f=0\n",a,b,c);

	//4.��������	//5.�������
	di_sc=b*b-4*a*c;
	printf("The roots are:\n");

	if (di_sc>0)
	{
		greater_than_zero(a,b);
		printf("x_1=%f\t\tx_2=%f\n\n",x_1,x_2);
	}
	else if (di_sc==0)
	{
		equal_to_zero(a,b);
		printf("x_1=x_2=%f\n\n",x_1);
	}
	else
	{
		smaller_than_zero(a,b);
		printf("x_1=%f+%fi\tx_2=%f-%fi\n\n",p_,q_,p_,q_);
	}

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void greater_than_zero(float a,float b)
{
	x_1=(-b+sqrt(di_sc))/(2*a);
	x_2=(-b-sqrt(di_sc))/(2*a);
}
void equal_to_zero(float a,float b)
{
	x_1=x_2=(-b)/(2*a);
}
void smaller_than_zero(float a,float b)
{
	p_=-b/(2*a);
	q_=sqrt(-di_sc)/(2*a);
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int prime(int );
int exercise7_3()
{
	//1.����
	printf("3.ϰ��7.3		\n");

	//1.�����������
	int n;
	
	//2.��������ֵ
	n=0;
	
	//3.��ȡ����
	printf("Please input an interger n:");
	scanf("%d",&n);
	
	//4.��������	//5.�������
	if (prime(n))
	{
		printf("%d is a prime.\n\n",n);
	}
	else 
	{
		printf("%d is not a prime.\n\n",n);
	}	

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int prime(int n)
{
	int flag;
	int i;
	flag=1;
	for (i=2;i<n/2&&flag==1;i++)
	{
		if (n%i==0)
		{
			flag=0;
		}
	}
	return(flag);
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
void convert(int array[3][3]);
int exercise7_4()
{
	//1.����
	printf("4.ϰ��7.4		\n");

	//1.�����������
	int i;
	int j;
	int array[3][3];
	
	//2.��������ֵ
	i=0;
	j=0;
	
	//3.��ȡ����
	printf("Please input an array of(3*3):(ע�������ʽ)\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}

	//4.��������
	convert(array);
	
	//5.�������
	printf("Covert array:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%5d",array[i][j]);
		}
		printf("\n");
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
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void convert(int array[3][3])
{
	int t;
	int i;
	int j;
	t=0;
	for (i=0;i<3;i++)
	{
		for (j=i+1;j<3;j++)
		{
			t=array[i][j];
			array[i][j]=array[j][i];
			array[j][i]=t;
		}
	}
}




/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
#include <string.h>
void inverse(char str[]);
int exercise7_5()
{
	//1.����
	printf("5.ϰ��7.5		\n");

	//1.�����������
	char str[100];
	
	//2.��������ֵ
	
	//3.��ȡ����
	printf("Please input string:\n");
	scanf("%s",str);
	
	//4.��������
	inverse(str);
	
	//5.�������
	printf("Inverse string:\n");
	printf("%s\n\n",str);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void inverse(char str[])
{
	int i;
	int j;
	char t;
	i=0;
	j=0;
	for (i=0,j=strlen(str);i<(strlen(str)/2);i++,j--)
	{
		t=str[i];
		str[i]=str[j-1];
		str[j-1]=t;
	}
}






/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
void concatenate(char string1[],char string2[],char string[]);
int exercise7_6()
{
	//1.����
	printf("6.ϰ��7.6		\n");

	//1.�����������
	char string1[100];
	char string2[100];
	char string[100];

	//2.��������ֵ

	//3.��ȡ����
	printf("Input string1:\n");
	scanf("%s",string1);
	printf("Input string2:\n");
	scanf("%s",string2);
	
	//4.��������
	concatenate(string1,string2,string);

	//5.�������
	printf("\nThe new string :\n");
	printf("%s\n\n",string);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void concatenate(char string1[],char string2[],char string[])
{
	//1.�����������
	int i;
	int j;

	//2.��������ֵ
	i=0;
	j=0;

	//3.��ȡ����

	//4.��������
	for (i=0;string1[i]!='\0';i++)
	{
		string[i]=string1[i];
	}
	for (j=0;string2[j]!='\0';j++)
	{
		string[i+j]=string2[j];
	}
	string[i+j]='\0';
	
	//5.�������
}







/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
void copy(char s[],char c[]);
#include <string.h>
int exercise7_7()
{
	//1.����
	printf("7.ϰ��7.7		\n");

	//1.�����������
	char str[80];	
	char c[80];

	//2.��������ֵ

	//3.��ȡ����
	printf("please input a string:\n");
//	gets(str);
	scanf("%s",str);

	//4.��������
	copy(str,c);

	//5.�������
	printf("\nThe vowel letters are :\n");
	puts(c);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void copy(char s[],char c[])
{
	//1.�����������
	int i;
	int j;
	
	//2.��������ֵ
	i=0;
	j=0;
	
	//3.��ȡ����	//4.��������
	for (i=0,j=0;s[i]!='\0';i++)
	{
		if (s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
		{
			c[j]=s[i];
			j++;
		}
	}
	c[j]='\0';
	
	//5.�������
}




/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
void insert(char s[]);
#include <string.h>
int exercise7_8()
{
	//1.����
	printf("8.ϰ��7.8		\n");

	//1.�����������
	char str[80];
	
	//2.��������ֵ

	//3.��ȡ����
	printf("Please input 4 digits:\n");
	scanf("%s",str);
	
	//4.��������
	insert(str);

	//5.�������

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void insert(char s[])
{
	//1.�����������
	int i;
	
	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	for (i=strlen(s);i>0;i--)
	{
		s[2*i]=s[i];
		s[2*i-1]=' ';
	}
	
	//5.�������
	printf("output :%s\n\n",s);
}







/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int letter;															//����ȫ�ֱ���
int	digit;
int space;
int others;
void count(char s[]);
#include <string.h>												//��������
int exercise7_9()
{
	//1.����
	printf("9.ϰ��7.9		\n");

	//1.�����������
	char text[80];

	//2.��������ֵ
	letter=0;
	digit=0;
	space=0;
	others=0;

	//3.��ȡ����
	fflush(stdin);
	fflush(stdout);
	printf("Please input string :\n");
	gets(text);
	//scanf("%s",text);

	//4.��������
	printf("String:\n");
	printf("%s",text);
//	puts(text);
	count(text);

	//5.�������
	printf("\nletter:%d\n",letter);
	printf("digit:%d\n",digit);
	printf("space:%d\n",space);
	printf("others:%d\n\n",others);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void count(char s[])
{
	//1.�����������
	int i;

	//2.��������ֵ
	
	//3.��ȡ����

	//4.��������
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]==32)
		{
			space++;
		}
		else if ((s[i]<='9')&&(s[i]>='0'))
		{
			digit++;
		}
		else if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
			letter++;
		}
		else 
		{
			others++;
		}
	}

	//5.�������

}






/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int alphbetic(char c);
int longst(char string[]);
#include <string.h>
int exercise7_10()
{
	//1.����
	printf("10.ϰ��7.10		\n");

	//1.�����������
	int i;
	char line[100];

	//2.��������ֵ

	//3.��ȡ����
	fflush(stdin);
	fflush(stdout);
	printf("Input a line:\n");
//	scanf("%s",line);
	gets(line);
	printf("%s\n\n",line);

	//4.��������
	
	//5.�������
	printf("The longst word is:\n");
	for (i=longst(line);alphbetic(line[i]);i++)
	{
		printf("%c",line[i]);
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
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int alphbetic(char c)
{
	//1.�����������

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		return(1);
	}
	else
	{
		return(0);
	}

	//5.�������
}
int longst(char string[])
{
	
	//1.�����������
	int len;
	int length;
	int flag;
	int place;
	int point;
	int i;

	//2.��������ֵ
	len=0;
	length=0;
	flag=0;
	place=0;
	point=0;
	i=0;

	//3.��ȡ����

	//4.��������
	for (i=0;i<=strlen(string);i++)
	{	
		if (alphbetic(string[i]))
		{
			if (flag)
			{
				point=i;
				flag=0;
			}
			else
			{
				len++;
			}
		}
		else
		{
			flag=1;
			if (len>=length)
			{
				length=len;
				place=point;
				len=0;
			}
		}
	}

	//5.�������
	return(place);
}




/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
char str[10];
void sort(char s[]);
#include <string.h>
int exercise7_11()
{
	//1.����
	printf("11.ϰ��7.11		\n");

	//1.�����������
	int i;
	int flag;

	//2.��������ֵ
	i=0;

	//3.��ȡ����
	fflush(stdin);
	fflush(stdout);
	for (flag=1;flag==1;)
	{
		printf("Input string:\n");
//		scanf("%s",str);
		gets(str);
		if (strlen(str)>10)
		{
			printf("The string's longth is too long!\nREPUT AGAIN\n");
			flag=0;
		}
	}

	//4.��������
	sort(str);
	
	//5.�������
	printf("The sorted string is:\n");
	for (i=0;i<10;i++)
	{
		printf("%c",str[i]);
	}

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void sort(char s[])
{
	//1.�����������
	int i;
	int j;
	char t;

	//2.��������ֵ
	i=0;
	j=0;
	
	//3.��ȡ����

	//4.��������
	for (j=1;j<10;j++)
	{
		for (i=0;(i<10-j)&&(s[i]!='\0');i++)
		{
			if (s[i]>s[i+1])
			{
				t=s[i];
				s[i]=s[i+1];
				s[i+1]=t;
			}
		}
	}
	
	//5.�������
}






/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
float solut(float a,float b,float c,float d);
int exercise7_12()
{
	//1.����
	printf("12.ϰ��7.12		\n");

	//1.�����������
	float a;
	float b;
	float c;
	float d;

	//2.��������ֵ
	a=0.0;
	b=0.0;
	c=0.0;
	d=0.0;

	//3.��ȡ����
	printf("Please input an float a:");
	scanf("%f",&a);
	printf("Please input an float b:");
	scanf("%f",&b);
	printf("Please input an float c:");
	scanf("%f",&c);
	printf("Please input an float d:");
	scanf("%f",&d);
	printf("\n������ĺ����ǣ�f(x)=%dx^3+%dx^2+%dx%d",a,b,c,d);
	printf("\n������ĺ����ĵ����ǣ�f'(x)=3x^2+6x+3");

	//4.��������

	//5.�������
	printf("The answer is :%f\n\n",solut(a,b,c,d));

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
float solut(float a,float b,float c,float d)
{
	//1.�����������
	float x;
	float x0;
	float f;
	float f1;

	//2.��������ֵ
	x=1;
	x0=0.0;
	f=0.0;
	f1=0.0;

	//3.��ȡ����

	//4.��������
	do 
	{
		x0=x;
		f=a*x0*x0*x0+b*x0*x0+c*x0+d;
		f1=3*a*x0*x0+2*b*x0+c;
		x=x0-f/f1;
	}
	while (fabs(x-x0)>=1e-3);

	//5.�������
	return (x);
}







/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
float score[10][5];
float a_stu[10];
float a_cour[5];
int r;
int c;
float s_var();//void
float highest();
void input_stu();//void
void aver_stu();//void
void aver_cour();//void
int exercise7_13()
{
	//1.����
	printf("13.ϰ��7.13		\n");

	//1.�����������
	int i;
	int j;
	float h;
	
	//2.��������ֵ
	i=0;
	j=0;
	h=0.0;

	//3.��ȡ����
	input_stu();
	
	//4.��������	//5.�������
	aver_stu();
	aver_cour();
	printf("\nNO.	court1 court2 court3	court4 court5 aver\n");
	for (i=0;i<10;i++)
	{
		printf("\nNO%2d",i+1);
		for (j=0;j<5;j++)
		{
			printf("%8.2f",score[i][j]);
		}
		printf("%8.2f",a_stu[i]);
	}
	printf("\nAverge:");
	for (j=0;j<5;j++)
	{
		printf("%8.2f",a_cour[j]);
	}
	printf("\n");
	h=highest();
	printf("highest:%7.2f		NO.%2d		course%2d\n",h,r,c);
	printf("variance%8.2f\n\n",s_var());

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void input_stu()//void
{
	//1.�����������
	int i;
	int j;

	//2.��������ֵ
	i=0;
	j=0;

	//3.��ȡ����
	
	//4.��������
	for (i=0;i<10;i++)
	{
		printf("\ninput the score of %2d:\n",i+1);
		for (j=0;j<5;j++)
		{
			scanf("%f",&score[i][j]);
		}
	}
	//5.�������
}
void aver_stu()//void
{
	//1.�����������
	int i;
	int j;
	float s;

	//2.��������ֵ
	i=0;
	j=0;
	s=0;

	//3.��ȡ����

	//4.��������
	for (i=0;i<10;i++)
	{
		for (j=0,s=0;j<5;j++)
		{
			s+=score[i][j];
			a_stu[i]=s/5.0;
		}
	}

	//5.�������
}
void aver_cour()//void
{
	//1.�����������
	int i;
	int j;
	float s;

	//2.��������ֵ
	i=0;
	j=0;

	//3.��ȡ����

	//4.��������
	for (j=0;j<5;j++)
	{
		s=0;
		for (i=0;i<10;i++)
		{
			s+=score[i][j];
		}
		a_cour[j]=s/10.0;
	}

	//5.�������
	
}
float highest()
{
	//1.�����������
	int i;
	int j;
	float high;

	//2.��������ֵ
	i=0;
	j=0;
	high=score[0][0];

	//3.��ȡ����
	
	//4.��������
	for (i=0;i<10;i++)
	{
		for (j=0;j<5;j++)
		{
			if(high<score[i][j])
			{
				high=score[i][j];
				r=i+1;
				c=j+1;
			}
		}
	}
	
	//5.�������
	return (high);
}
float s_var()//void
{
	//1.�����������
	int i;
	float sumx;
	float sumxn;

	//2.��������ֵ
	sumx=0.0;
	sumxn=0.0;

	//3.��ȡ����

	//4.��������
	for (i=0;i<10;i++)
	{
		sumx+=a_stu[i]*a_stu[i];
		sumxn+=a_stu[i];
	}
	
	//5.�������
	return(sumx/10-(sumxn/10)*(sumxn/10));
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
void input(int num[10],char name[10][8]);
void sort(int num[10],char name[10][8]);
void search(int n,int num[10],char name[10][8]);
int exercise7_14()
{
	//1.����
	printf("14.ϰ��7.14		\n");

	//1.�����������
	int num[10];
	int number;
	int flag;
	int c;
	char name[10][8];

	//2.��������ֵ
	flag=1;

	//3.��ȡ����
	input(num,name);

	//4.��������	//5.�������
	sort(num,name);
	while (flag==1)
	{
		printf("\nPlease input the number to look for :");
		scanf("%d",&number);
		search(number,num,name);
		printf("Continue or Not(Y/N)?\n");
		getchar();
		c=getchar();
	}
	if (c=='N'||c=='n')
	{
		flag=0;
	}

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void input(int num[10],char name[10][8])
{
	//1.�����������
	int i;

	//2.��������ֵ

	//3.��ȡ����
	for (i=0;i<10;i++)
	{
		printf("input NO.:");
		scanf("%d",&num[i]);
		printf("input name:");
		getchar();
		gets(name[i]);
	}

	//4.��������

	//5.�������
}
void sort(int num[10],char name[10][8])
{
	//1.�����������
	int i;
	int j;
	int min;
	int temp1;
	char temp2[8];

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	for (i=0;i<9;i++)
	{
		min=i;
		for (j=i;j<10;j++)
		{
			if (num[min]>num[j])
			{
				min=j;
				temp1=num[i];
				strcpy(temp2,name[i]);
				num[i]=num[min];
				strcpy(name[i],name[min]);
				num[min]=temp1;
				strcpy(name[min],temp2);
			}
		}
	}

	//5.�������
	printf("\nResult:\n");
	for (i=0;i<10;i++)
	{
		printf("\n%5d%10s",num[i],name[i]);
	}
	printf("\n");
}
void search(int n,int num[10],char name[10][8])
{
	//1.�����������
	int top;
	int bott;
	int mid;
	int sign;
	int loca;

	//2.��������ֵ
	top=0;
	bott=9;
	loca=0;
	sign=1;

	//3.��ȡ����

	//4.��������
	if ((n<num[0])||(n>num[9]))
	{
		loca=-1;
	}
	while ((sign==1)||(top<=bott))
	{
		mid=(top+bott)/2;
		if (n==num[mid])
		{
			loca=mid;
			printf("NO.%d,his name is %s.\n",n,name[loca]);
			sign=-1;
		}
		else if (n<num[mid])
		{
			bott=mid-1;
		}
		else
		{
			top=mid+1;
		}
	}
	if (sign==1||loca==-1)
	{
		printf("%d not been found.\n\n",n);
	}

	//5.�������
}






/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int htoi(char s[]);
int exercise7_15()
{
	//1.����
	printf("15.ϰ��7.15		\n");

	//1.�����������
	int i;
	int c;
	int flag;
	int flag1;
	char t[1000];

	//2.��������ֵ
	i=0;
	flag=0;
	flag1=0;

	//3.��ȡ����	//4.��������	//5.�������
	printf("Please input a hex number:");
	while ((c=getchar())!='\0'&&(i<1000)&&(flag1))
	{
		if(c>='0'&&c<='9'||c>='a'&&c<='f'||c>='A'&&c<='F')
		{
			flag=1;
			t[i++]=c;
		}
		else if (flag)
		{
			t[i]='\0';
			printf("decimal number %d\n",htoi(t));
			printf("continue or not?\n");
			c=getchar();
			if (c=='N'||c=='n')
			{
				flag1=0;
			}
			else 
			{
				flag=0;
				i=0;
				printf("\ninput a hex number:");
			}
		}
	}

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int htoi(char s[])
{
	//1.�����������
	int i;
	int n;

	//2.��������ֵ
	i=0;
	n=0;

	//3.��ȡ����

	//4.��������
	for (i=0;s[i]!='\0';i++)
	{
		if (s[i]>='0'&&s[i]<='9')
		{
			n=n*16+s[i]-'0';
		}
		if (s[i]>='a'&&s[i]<='f')
		{
			n=n*16+s[i]+10-'a';
		}
		if (s[i]>='A'&&s[i]<='F')
		{
			n=n*16+s[i]+10-'A';
		}
	}

	//5.�������

	return (n);
}







/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int max1_4(int a,int b,int c,int d);
int exercise7_16()
{
	//1.����
	printf("16.ϰ��7.16		\n");

	//1.�����������
	int a;
	int b;
	int c;
	int d;
	int max;

	//2.��������ֵ
	a=0;
	b=0;
	c=0;
	d=0;
	max=0;

	//3.��ȡ����
	printf("Please input an interger number a=\n");
	scanf("%d",&a);
	printf("Please input an interger number b=\n");
	scanf("%d",&b);
	printf("Please input an interger number c=\n");
	scanf("%d",&c);
	printf("Please input an interger number d=\n");
	scanf("%d",&d);

	//4.��������
	max=max_4(a,b,c,d);

	//5.�������
	printf("Max is %d\n\n",max);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int max1_2(int a,int b);
int max1_4(int a,int b,int c,int d)
{
	//1.�����������
	int m;

	//2.��������ֵ
	m=0;

	//3.��ȡ����

	//4.��������
	m=max_2(max_2(max_2(a,b),c),d);

	//5.�������
	return (m);

}
int max1_2(int a,int b)
{
	//1.�����������

	//2.��������ֵ

	//3.��ȡ����

	//4.��������

	//5.�������
	return(a>b?a:b);
}





/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
void convert(int n);
int exercise7_17()
{
	//1.����
	printf("17.ϰ��7.17		\n");

	//1.�����������
	int number;

	//2.��������ֵ
	number=0;

	//3.��ȡ����
	printf("Please input an interger:");
	scanf("%d",&number);
	printf("output:");

	//4.��������
	if (number<0)
	{
		putchar('-');
		putchar(' ');
		number=-number;
	}
	convert(number);

	//5.�������
	printf("\n\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
void convert(int n)
{
	//1.�����������
	int i;

	//2.��������ֵ
//	i=0;

	//3.��ȡ����

	//4.��������
	if ((i=n/10)!=0)
	{
		convert(i);
		putchar(n%10+'0');
		putchar(32);
	}

	//5.�������
}






/*
===============================================================================
��������:	�������õļ����ӡ�
һ����ʽ��	example1()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example1()
Date		Name		Create/Correct
2012_12_21	liweikang	create
===============================================================================
*/
int sum_day(int month,int day);
int leap(int year);
int exercise7_18()
{
	//1.����
	printf("18.ϰ��7.18		\n");

	//1.�����������
	int year;
	int month;
	int day;
	int days;

	//2.��������ֵ
	year=0;
	month=0;
	day=0;
	days=0;

	//3.��ȡ����
	printf("Please input the date(year,month,day):\n");
	printf("year:");
	scanf("%d",&year);
	printf("month:");
	scanf("%d",&month);
	printf("day:");
	scanf("%d",&day);
	printf("%d/%d/%d",year,month,day);

	//4.��������
	days=sum_day(month,day);
	if (leap(year)&&month>=3)
	{
		days=days+1;
	}

	//5.�������
	printf("is the %dth day in this year.\n",days);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose7);
	switch(choose7)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_7();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos7);
				if (choos7=='y'||choos7=='Y')
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
int sum_day(int month,int day)
{
	//1.�����������
	int day_tab[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i;

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	for (i=1;i<month;i++)
	{
		day+=day_tab[i];
	}

	//5.�������
	return(day);
}
int leap(int year)
{
	//1.�����������
	int leap;

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	if ((year%4==0&year%100!=0)||(year%400==0))
	{
		leap=1;
	}
	else
	{
		leap=0;
	}
	
	//5.�������
	return(leap);
}








