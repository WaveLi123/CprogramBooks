/*
************************************************************************************************************************************
														��ΰ��_1240069
//2012-11-6 19:00-22:00
//1.  ����������3.1   �з������������޷������ͱ��������ݻ�ʧ��
//2.  ����������3.2   �з������������޷������ͱ�����ע����ֵ��Χ
//3.  ����������3.3   ��������ַ�
//4.  ����������3.4   ���뵥���ַ�
//5.  ����������3.5   �ַ����ݵ����
//6.  ����������3.6   ���ʵ��ʱ����Ч��λ
//7.  ����������3.7   ���˫������ʱ����Чλ��
//8.  ����������3.8   scanf������������
//9.  ����������3.9   �޷������ݵ����
//10. ����������3.10  �ַ��������
//11. ����������3.11  ���ʵ��ʱָ��С��λ��
//12. ����������3.12  ������Բ���ܳ���������ʱ���°�С������룬ȡ��λС��
//13. ����������3.13  ���������ε����߳��������������
//14. ����������3.14  �Ӽ���������һ����д��ĸ��Ҫ�����Сд��ĸ���
//15. ����������3.15  ��ax^2+bx+c=0���̵ĸ���a,b,c�ɼ������룬��b^2-4ac>0
//16. ������ϰ��6     ��Բ�뾶r=1.5,Բ����h=3ʱ��Բ�ܳ���Բ�����Բ��������Բ�������Բ�����
//17. ������ϰ��7     ����һ�������¶ȣ�Ҫ����������¶�
//18. ������ϰ��8     ��getchar�������������ַ���c1,c2,Ȼ����putchar,printf�ֱ�����������ַ�
************************************************************************************************************************************
*/


#include "head.h"
#include "third.h"
#include <windows.h>
int system(const char *string);

#define PI 3.1415926        
int choose3=0;//����ȫ�ֱ���
int choos3=0;//����ȫ�ֱ���




int number_3()
{
start:
	//�û���ʾ��Ϣ

	printf("�ӭ���롶C������ƽ̡̳������£���\n");
	printf("*******************************************************************************\n");
	printf("*1. ����������3.1 �з������������޷������ͱ���,���ݻ�ʧ��                     *\n");
	printf("*2. ����������3.2 �з������������޷������ͱ���,ע����ֵ��Χ                   *\n");
	printf("*3. ����������3.3 ��������ַ�                                                *\n");
	printf("*4. ����������3.4 ���뵥���ַ�                                                *\n");
	printf("*5. ����������3.5 �ַ����ݵ����                                              *\n");
	printf("*6. ����������3.6 ���ʵ��ʱ����Ч��λ                                        *\n");
	printf("*7. ����������3.7 ���˫������ʱ����Чλ��                                    *\n");
	printf("*8. ����������3.8 scanf������������                                           *\n");
	printf("*9. ����������3.9 �޷������ݵ����                                            *\n");
	printf("*10.����������3.10�ַ��������                                                *\n");
	printf("*11.����������3.11���ʵ��ʱָ��С��λ��                                      *\n");
	printf("*12.����������3.12������Բ���ܳ�,������ʱ���°�С�������,ȡ��λС��        *\n");
	printf("*13.����������3.13���������ε����߳�,�����������                             *\n");
	printf("*14.����������3.14�Ӽ���������һ����д��ĸ,Ҫ�����Сд��ĸ���               *\n");
	printf("*15.����������3.15��ax^2+bx+c=0���̵ĸ�.a,b,c�ɼ�������,��b^2-4ac>0           *\n");
	printf("*16.������ϰ��6   ��Բ�뾶r=1.5,Բ����h=3ʱ,Բ�ܳ�|Բ���|Բ������|Բ��     *\n");
	printf("*   ��|Բ�����                                                               *\n");
	printf("*17.������ϰ��7   ����һ�������¶�,Ҫ����������¶�                           *\n");
	printf("*18.������ϰ��8   ��getchar�������������ַ���c1,c2,Ȼ����putchar,printf�ֱ��� *\n");
	printf("*   ���������ַ�                                                              *\n");
	printf("*19.�������˵�                                                                *\n");
	printf("*20.�˳�                                                                      *\n");
	printf("*******************************************************************************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch (choose3)
	{
		case 1:	system("cls");
				example3_1();
				break;

		case 2:	system("cls");
				example3_2();
				break;

		case 3:	system("cls");
				example3_3();
				break;

		case 4:	system("cls");
				example3_4();
				break;

		case 5:	system("cls");
				example3_5();
				break;

		case 6:	system("cls");
				example3_6();
				break;

		case 7:	system("cls");
				example3_7();
				break;

		case 8:	system("cls");
				example3_8();
				break;

		case 9:	system("cls");
				example3_9();
				break;

		case 10:system("cls");
				example3_10();
				break;

		case 11:system("cls");
				example3_11();
				break;

		case 12:system("cls");
				example3_12();
				break;

		case 13:system("cls");
				example3_13();
				break;

		case 14:system("cls");
				example3_14();
				break;

		case 15:system("cls");
				example3_15();
				break;

		case 16:system("cls");
				exercise3_1();
				break;

		case 17:system("cls");
				exercise3_2();
				break;

		case 18:system("cls");
				exercise3_3();
				break;

		case 19:system("cls");
				main();
				break;

		case 20:system("cls");
				goto end;	
				break;
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	�з������������޷������ͱ��������ݻ�ʧ��
һ����ʽ��	example3_1()
����˵����			
�� �� ֵ��	����
������ʽ��	example3_1()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_1()
{
	//1.����������3.1	�з������������޷������ͱ��������ݻ�ʧ��
	printf("1.����3.1   �з������������޷������ͱ��������ݻ�ʧ��\n"); 	

	//3.��ȡ����
	
	//4.��������
	a1=b;
	
	//5.�������
	printf("%u\n",a1);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	�з������������޷������ͱ�����ע����ֵ��Χ
һ����ʽ��	example3_2()
����˵����			
�� �� ֵ��	����
������ʽ��	example3_2()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_2()
{

	//2.����������3.2	�з������������޷������ͱ�����ע����ֵ��Χ
	printf("2.����3.2   �з������������޷������ͱ�����ע����ֵ��Χ\n");
	//3.��ȡ����
 
	//4.��������
	c_=a;

	//5.�������
	printf("%u\n",c_);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	��������ַ�
һ����ʽ��	example3_3()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example3_3()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_3()
{
	//3.����������3.3	 ��������ַ�
	printf("3.����3.3   ��������ַ�\n");
 
	//3.��ȡ����
 
	//4.��������
	d='B';
	e='O';
	f='Y';
 
	//5.�������
	putchar(d);putchar(e);putchar(f);putchar('\n');
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	���뵥���ַ�
һ����ʽ��	example3_4()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example3_4()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_4()
{
	//4.����������3.4	���뵥���ַ�
	printf("4.����3.4   ���뵥���ַ�\n");

	//3.��ȡ����
	d=getchar();

	//4.��������

	//5.�������
	putchar(d);
	putchar('\n');
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	�ַ����ݵ����
һ����ʽ��	example3_5()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example3_5()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_5()
{
	//5.����������3.5	�ַ����ݵ����
	printf("5.����3.5   �ַ����ݵ����\n");

	//3.��ȡ����
	
	//4.��������
	
	//5.�������
	printf("%c,%d\n",g,g);
	printf("%c,%d\n",i,i);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	���ʵ��ʱ����Ч��λ
һ����ʽ��	example3_6()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example3_6()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_6()
{
	//6.����������3.6	 ���ʵ��ʱ����Ч��λ
	printf("6.����3.6   ���ʵ��ʱ����Ч��λ\n");

	//3.��ȡ����
	
	//4.��������
	
	//5.�������
	printf("%f\n",x+y);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	���˫������ʱ����Чλ��
һ����ʽ��	example3_7()
����˵����			
�� �� ֵ��	ʵ��
������ʽ��	example3_7()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_7()
{
	//7.����������3.7	���˫������ʱ����Чλ��
	printf("7.����3.7   ���˫������ʱ����Чλ��\n");
	
	//3.��ȡ����
	
	//4.��������
	
	//5.�������
	printf("%f\n",m+n);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	scanf������������
һ����ʽ��	example3_8()
����˵����			
�� �� ֵ��	����
������ʽ��	example3_8()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_8()
{
	//8.����������3.8	scanf������������
	printf("8.����3.8   scanf������������\n");
	
	//3.��ȡ����
	printf("����������b=");
	scanf("%d",&b);
	printf("����������c=");
	scanf("%d",&c_);
	printf("����������i=");
	scanf("%d",&i);
	
	//4.��������
	
	//5.�������
	printf("b=%d\n",b);
	printf("c=%d\n",c_);
	printf("i=%d\n",i);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	�޷������ݵ����
һ����ʽ��	example3_9()
����˵����			
�� �� ֵ��	�޷�������
������ʽ��	example3_9()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_9()
{
	//9.����������3.9	�޷������ݵ����
	printf("9.����3.9   �޷������ݵ����\n");
	
	//3.��ȡ����
	
	//4.��������
	
	//5.�������
	printf("a=%d\n",a);
	printf("a=%o\n",a);
	printf("a=%x\n",a);
	printf("a=%u\n",a);
	printf("b1=%d\n",b1);
	printf("b1=%o\n",b1);
	printf("b1=%x\n",b1);
	printf("b1=%u\n",b1);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	�ַ����������
һ����ʽ��	example3_10()
����˵����			
�� �� ֵ��	�ַ���
������ʽ��	example3_10()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/	
int example3_10()
{
	//10.����������3.10	�ַ��������
	printf("10.����3.10  �ַ��������\n");
	
	//3.��ȡ����
	
	//4.��������
	
	//5.�������
	printf("%3s\n","CHINA");
	printf("%7.2s\n","CHINA");
	printf("%.4s\n","CHINA");
	printf("%-5.3s\n","CHINA");
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	���ʵ��ʱָ��С��λ��
һ����ʽ��	example3_11()
����˵����			
�� �� ֵ��	ʵ��
������ʽ��	example3_11()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_11()
{
	//11.����������3.11	 ���ʵ��ʱָ��С��λ��
	printf("11.����3.11  ���ʵ��ʱָ��С��λ��\n");

	//3.��ȡ����
	
	//4.��������
	
	//5.�������
	printf("%f  %10f %10.2f  %.2f  %-10.2f\n",h2,h2,h2,h2,h2);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	������Բ���ܳ���������ʱ���°�С������룬ȡ��λС��
һ����ʽ��	example3_12()
����˵����			
�� �� ֵ��	����������
������ʽ��	example3_12()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_12()
{
	//12.����������3.12		������Բ���ܳ���������ʱ���°�С������룬ȡ��λС��
	printf("12.����3.12  ������Բ���ܳ���������ʱ���°�С������룬ȡ��λС��\n");

	//3.��ȡ����
	
	//4.��������
	s1=2.0*PI*r1;
	s2=2.0*PI*r2;
	s3=2.0*PI*r3;
	
	//5.�������
	printf("s1=%10.2f\n",s1);
	printf("s2=%10.2f\n",s2);
	printf("s3=%10.2f\n",s3);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	���������ε����߳��������������
һ����ʽ��	example3_13()
����˵����			
�� �� ֵ��	�ַ�������
������ʽ��	example3_13()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_13()
{
	//13.����������3.13		���������ε����߳��������������
	printf("13.����3.13  ���������ε����߳��������������\n");

	//3.��ȡ����
	printf("�����������ε�һ�߳�x=");
	scanf("%f",&x);
	printf("�����������ε�һ�߳�y=");
	scanf("%f",&y);
	printf("�����������ε�һ�߳�h=");
	scanf("%f",&h);
	
	//4.��������
	s=(x+y+h)/2.0;
	area=sqrt(s*(s-x)*(s-y)*(s-h));
	
	//5.�������
	printf("x=%f\n",x);
	printf("y=%f\n",y);
	printf("h=%f\n",h);
	printf("area=%f\n",area);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	�Ӽ���������һ����д��ĸ��Ҫ�����Сд��ĸ���
һ����ʽ��	example3_14()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	example3_14()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_14()
{
	//14.����������3.14		�Ӽ���������һ����д��ĸ��Ҫ�����Сд��ĸ���
	printf("14.����3.14  �Ӽ���������һ����д��ĸ��Ҫ�����Сд��ĸ���\n");

	//3.��ȡ����
	getchar();
	c1=getchar();
	printf("%c,%d\n",c1,c1);
	
	//4.��������
	c2=c1+32;
	
	//5.�������
	printf("%c,%d\n",c2,c2);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	��ax^2+bx+c=0���̵ĸ���a,b,c�ɼ������룬��b^2-4ac>0
һ����ʽ��	example3_15()
����˵����			
�� �� ֵ��	�ַ�������
������ʽ��	example3_15()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int example3_15()
{
	//15.����������3.15		��ax^2+bx+c=0���̵ĸ���a,b,c�ɼ������룬��b^2-4ac>0
	printf("15.����3.15  ��ax^2+bx+c=0���̵ĸ���a,b,c�ɼ������룬��b^2-4ac>0\n");

	//3.��ȡ����
	printf("�������Ԫһ�η��̶������ֵx=");
	scanf("%f",&x);
	printf("�������Ԫһ�η��̶������ֵy=");
	scanf("%f",&y);
	printf("�������Ԫһ�η��̶������ֵh=");
	scanf("%f",&h);
	
	//4.��������
	disc=y*y-4*x*h;
	p=(-b)/(2*x);
	q=(sqrt(disc))/(2*x);
	x1=p+q;
	x2=p-q;
	
	//5.�������
	printf("x1=%5.2f\n",x1);
	printf("x2=%5.2f\n",x2);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	��Բ�뾶r=1.5,Բ����h=3ʱ��Բ�ܳ���Բ�����Բ��������Բ�������Բ�����
һ����ʽ��	exercise3_1()
����˵����			
�� �� ֵ��	�ַ�������
������ʽ��	exercise3_1()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int exercise3_1()
{	
	//16.������ϰ��6	��Բ�뾶r=1.5,Բ����h=3ʱ��Բ�ܳ���Բ�����Բ��������Բ�������Բ�����
	printf("16.ϰ��6  ��Բ�뾶r=1.5,Բ����h=3ʱ��Բ�ܳ���Բ�����Բ��������Բ�������Բ�����\n");
	
	//3.��ȡ����
	printf("������Բ�뾶r=");
	scanf("%f",&r);
	printf("������Բ����h1=");
	scanf("%f",&h1);
	
	//4.��������
	c3=2*PI*r;
	s4=PI*r*r;
	s5=4*PI*r*r;
	v1=(3.0/4.0)*PI*r*r*r;
	v2=PI*r*r*h1;

	//5.�������
	printf("Բ�ܳ�c3=%.2f\n",c3);
	printf("Բ���s4=%.2f\n",s4);
	printf("Բ������s5=%.2f\n",s5);
	printf("Բ�����v1=%.2f\n",v1);
	printf("Բ�����v2=%.2f\n",v2);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	����һ�������¶ȣ�Ҫ����������¶�
һ����ʽ��	exercise3_2()
����˵����			
�� �� ֵ��	�ַ�������
������ʽ��	exercise3_2()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int exercise3_2()
{	
	//17.������ϰ��7	����һ�������¶ȣ�Ҫ����������¶�
	printf("17.ϰ��7  ����һ�������¶ȣ�Ҫ����������¶�\n");
	
	//3.��ȡ���� 
	printf("������һ�������¶�F=");
	scanf("%f",&F);
	
	//4.��������
	c4=5*(F-32)/9;
	
	//5.�������
	printf("���һ�������¶�c4=%.2f\n",c4);
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
��������:	��getchar�������������ַ���c1,c2,Ȼ����putchar,printf�ֱ�����������ַ�
һ����ʽ��	exercise3_3()
����˵����			
�� �� ֵ��	�ַ�
������ʽ��	exercise3_3()
Date		Name		Create/Correct
2012_11_06	liweikang	create
2013_1_5	liweikang	correct
===============================================================================
*/
int exercise3_3()
{
	//18.������ϰ��8	��getchar�������������ַ���c1,c2,Ȼ����putchar,printf�ֱ�����������ַ�
	printf("18.ϰ��8  ��getchar�������������ַ���c1,c2,Ȼ����putchar,printf�ֱ�����������ַ�\n");
	
	//3.��ȡ����
	printf("������һ���ַ�c1=");
	getchar ();
	c1=getchar();
	printf("������һ���ַ�c2=");
	getchar();
	c2=getchar();

	//4.��������

	//5.�������
	printf("��putchar���������Ϊ��\n");
	putchar(c1);
	putchar(c2);
	putchar('\n');
	printf("��printf���������Ϊ��\n");
	printf("%c\n",c1);
	printf("%c\n",c2);
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose3);
	switch(choose3)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_3();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos3);
				if (choos3=='y'||choos3=='Y')
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
