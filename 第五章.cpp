/*
**************************************************************************************************************************************************************
													1240069_��ΰ��_������
//ʱ��:	2012_11.23_6:30
//1.��5.1	��1+2+3+.....+100��while ��䣩  p97
//2.��5.2	��1+2+3+.....+100��do   while ��䣩  p99
//3.��5.3��1��	whileѭ����do...whileѭ���ıȽ�  p100
//4.��5.3��2��	whileѭ����do...whileѭ���ıȽ�
//5.��5.4	��PAI�Ľ���ֵ  p101
//6.��5.5	��Fibonacci���е�ǰ��ʮ����  p105
//7.��5.6	��100-200֮�䲻�ܱ�3�����������  p109
//8.��5.7	�ж�m�Ƿ�Ϊ����  p109
//9.��5.8	��100-200֮���ȫ������  p110
//10.��5.9	�����롣����ĳһ��ĸ������ĵ��ĸ���ĸ��
//1.ϰ��5.1	��������������m��n,�������Լ������С������  p113
//2.ϰ��5.2	����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����֡��������ַ��ĸ���  p113
//3.ϰ��5.3	��sn=a+aa+aaa+aaaa+...+aa...aֵ֮������a��һ�����֣�n��ʾa��λ����n�ɼ������룩  p113
//4.ϰ��5.4	��1��+2��+3��+...+20!  p113
//5.ϰ��5.5	��k(k:1-100)+k^2(1-50)+1/k(1-10)  p113
//6.ϰ��5.6	������е�ˮ�ɻ���	p113
//7.ϰ��5.7	������ҳ�1000֮�ڵ����е�����	p113
//8.ϰ��5.8	��һ����������2/1+3/2+5/3+8/5+13/8...���������е�ǰ20��֮��		p113
//9.ϰ��5.9		һ�����100�׵ĸ߶��������£�ÿ����غ󷴵���ԭ�߶ȵ�һ �룬�����£��ڷ����������ڵ�ʮ�����ʱ���������˶����ף���ʮ�η�����ߣ�	p113
//10.ϰ��5.10	���ӳ�������	p113
//11.ϰ��5.11	�õ�������x=a^(1/2)��Ҫ��ǰ�����������x�Ĳ�ľ���ֵС��E-005  p113
//12.ϰ��5.12	��ţ�ٵ����������淽����1.5�����ĸ���2x^3-4x^2+3x-6=0	p113
//13.ϰ��5.13	�ö��ַ������淽���ڣ�-10,10��֮��ĸ���2x^3-4x^2+3x-6=0	p113
//14.ϰ��5.14	���һ��ͼ��	p114
//15.ϰ��5.15	�ҳ��������ֵ�����	p114	
**************************************************************************************************************************************************************
*/


#include "head.h"
#include "forth.h"
#include <windows.h>
int system(const char *string);
int choose;//����ȫ�ֱ���
int choos;//����ȫ�ֱ���
int number_5()
{
start:
	//�û���ʾ��Ϣ
	printf("�ӭ���롶C������ƽ̡̳������£���  \n");
	printf("************************************************************************\n");
	printf("*1. ��5.1��1+2+3+������+100(while ���)  p97                           *\n");
	printf("*2. ��5.2��1+2+3+������+100(do   while ���)  p99                      *\n");
	printf("*3. ��5.3(1)whileѭ����do...whileѭ���ıȽ�  p1                        *\n");
	printf("*4. ��5.3(2)	whileѭ����do...whileѭ���ıȽ�                        *\n");
	printf("*5. ��5.4��PAI�Ľ���ֵ  p101                                           *\n");
	printf("*6. ��5.5��Fibonacci���е�ǰ��ʮ����  p105                             *\n");
	printf("*7. ��5.6��100-200֮�䲻�ܱ�3�����������  p109                        *\n");
	printf("*8. ��5.7�ж�m�Ƿ�Ϊ����  p109                                         *\n");
	printf("*9. ��5.8��100-200֮���ȫ������  p110                                 *\n");
	printf("*10.��5.9�����롣(��ĳһ��ĸ������ĵ��ĸ���ĸ)                      *\n");
	printf("*11.ϰ��5.1��������������m��n,�������Լ������С������  p113         *\n");
	printf("*12.ϰ��5.2����һ���ַ����ֱ�ͳ�Ƴ�����                                *\n");
	printf("*   Ӣ����ĸ���ո����֡��������ַ��ĸ���  p113                       *\n");
	printf("*13.ϰ��5.3��sn=a+aa+aaa+aaaa+...+aa...aֵ֮                           *\n");
	printf("*   (����a��һ�����֣�n��ʾa��λ����n�ɼ�������)  p113                 *\n");
	printf("*14.ϰ��5.4��1!+2!+3!+...+20!  p113                                    *\n");
	printf("*15.ϰ��5.5��k(k:1-100)+k^2(1-50)+1/k(1-10)  p113                      *\n");
	printf("*16.ϰ��5.6������е�ˮ�ɻ���	p113                                   *\n");
	printf("*17.ϰ��5.7������ҳ�1000֮�ڵ����е�����   p113                       *\n");
	printf("*18.ϰ��5.8��һ����������2/1+3/2+5/3+8/5+13/8...                       *\n");
	printf("*   ���������е�ǰ20��֮��        p113                               *\n");
	printf("*19.ϰ��5.9һ�����100�׵ĸ߶��������£�ÿ����غ�                     *\n");
	printf("*   ������ԭ�߶ȵ�һ �룬�����£��ڷ���                                *\n");
	printf("*   �����ڵ�ʮ�����ʱ�������˶����ף���ʮ�η������                   *\n");
	printf("*20.ϰ��5.10���ӳ�������    p113                                       *\n");
	printf("*21.ϰ��5.11�õ�������x=a^(1/2)��                                      *\n");
	printf("*   Ҫ��ǰ�����������x�Ĳ�ľ���ֵС��E-005  p113                     *\n");
	printf("*22.ϰ��5.12��ţ�ٵ����������淽����1.5�����ĸ�:                       *\n");
	printf("*   2x^3-4x^2+3x-6=0	p113                                           *\n");
	printf("*23.ϰ��5.13�ö��ַ������淽����(-10,10)֮��ĸ�:                      *\n");
	printf("*   2x^3-4x^2+3x-6=0	p113                                           *\n");
	printf("*24.ϰ��5.14���һ��ͼ��    p114                                       *\n");
	printf("*25.ϰ��5.15�ҳ��������ֵ�����  p114                                   *\n");
	printf("*26.�������˵���                                                       *\n");
	printf("*27.�˳���                                                             *\n");
	printf("************************************************************************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	
	switch (choose)
	{
		case 1:	system("cls");
				example5_1();
				break;

		case 2:	system("cls");
				example5_2();
				break;

		case 3:	system("cls");
				example5_3_1();
				break;

		case 4:	system("cls");
				example5_3_2();
				break;

		case 5:	system("cls");
				example5_4();
				break;

		case 6:	system("cls");
				example5_5();
				break;

		case 7:	system("cls");
				example5_6();
				break;

		case 8:	system("cls");
				example5_7();
				break;

		case 9:	system("cls");
				example5_8();
				break;

		case 10:system("cls");
				example5_9();
				break;

		case 11:system("cls");
				exercise5_1();
				break;

		case 12:system("cls");
				exercise5_2();
				break;

		case 13:system("cls");
				exercise5_3();
				break;

		case 14:system("cls");
				exercise5_4();
				break;

		case 15:system("cls");
				exercise5_5();
				break;

		case 16:system("cls");
				exercise5_6();
				break;

		case 17:system("cls");
				exercise5_7();
				break;

		case 18:system("cls");
				exercise5_8();
				break;

		case 19:system("cls");
				exercise5_9();
				break;

		case 20:system("cls");
				exercise5_10();
				break;

		case 21:system("cls");
				exercise5_11();
				break;

		case 22:system("cls");
				exercise5_12();
				break;

		case 23:system("cls");
				exercise5_13();
				break;

		case 24:system("cls");
				exercise5_14();
				break;

		case 25:system("cls");
				exercise5_15();
				break;

		case 26:system("cls");
				main();
				break;

		case 27:system("cls");
				goto end;	
				break;
		
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




/*
===============================================================================
��������:	��1+2+3+������+100��while ��䣩
һ����ʽ��	example1()
����˵����	int i;
			int sum;		
�� �� ֵ��	������100�����ĺ�
������ʽ��	example1()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_1()
{
	//1.��5.1  ��1+2+3+������+100��while ��䣩  p97
	printf("1.��5.1  ��1+2+3+������+100��while ��䣩  p97\n");

	//1.�����������
	int i;
	int sum;

	//2.��������ֵ
	i=1;
	sum=0;

	//3.��ȡ����

	//4.��������
	while (i<=100)
	{
		sum=sum+i;
		i++;
	}
	
	//5.�������
	printf("%d\n",sum);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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








/*
===============================================================================
��������:	��1+2+3+������+100��do   while ��䣩
һ����ʽ��	example2()
����˵����	int i;
			int sum;			
�� �� ֵ��	������100�����ĺ�
������ʽ��	example2()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_2()
{
	//2.��5.2  ��1+2+3+������+100��do   while ��䣩  p99
	printf("2.��5.2  ��1+2+3+������+100��do   while ��䣩  p99\n");

	//1.�����������
	int i;
	int sum;

	//2.��������ֵ
	i=1;
	sum=0;

	//3.��ȡ����


	//4.��������
	do 
	{
		sum=sum+i;
		i++;
	}
	while(i<=100);

	//5.�������
	printf("%d\n",sum);
	printf("\n");


	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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







/*
===============================================================================
��������:	whileѭ����do...whileѭ���ıȽ�  p100
һ����ʽ��	example3_1()
����˵����	int sum;
			int i;		
�� �� ֵ��	����
������ʽ��	example3_1()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_3_1()
{
	//3.��5.3��1�� whileѭ����do...whileѭ���ıȽ�  p100
	printf("3.��5.3��1�� whileѭ����do...whileѭ���ıȽ�  p100\n");

	//1.�����������
	int sum;
	int i;

	//2.��������ֵ
	sum=0;
	i=0;

	//3.��ȡ����
	printf("������i��ֵ\n");
	scanf("%d",&i);

	//4.��������
	while (i<=10)
	{
		sum=sum+i;
		i++;
	}

	//5.�������
	printf("sum=%d\n",sum);
	printf("\n");


	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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





/*
===============================================================================
��������:	whileѭ����do...whileѭ���ıȽ�  p100
һ����ʽ��	example3_2()
����˵����	int sum;
			int i;			
�� �� ֵ��	����
������ʽ��	example3_2()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_3_2()
{
	//3.��5.3��2�� whileѭ����do...whileѭ���ıȽ�  p100
	printf("3.��5.3��1�� whileѭ����do...whileѭ���ıȽ�  p100\n");

	//1.�����������
	int sum;
	int i;
	
	//2.��������ֵ
	sum=0;
	i=0;

	//3.��ȡ����
	printf("������i��ֵ\n");
	scanf("%d",&i);

	//4.��������
	do
	{
		sum=sum+i;
		i++;
	}
	while (i<=10);

	//5.�������
	printf("sum=%d\n",sum);
	printf("\n");


	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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






/*
===============================================================================
��������:	��PAI�Ľ���ֵ
һ����ʽ��	example4()
����˵����  int s;
			float n;
			float t;
			float pi;			
�� �� ֵ��	����
������ʽ��	example4()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#include <math.h>
int example5_4()
{
	//4.��5.4  ��PAI�Ľ���ֵ  p101
	printf("4.��5.4  ��PAI�Ľ���ֵ  p101\n");

	//1.�����������
	int s;
	float n;
	float t;
	float pi;

	//2.��������ֵ
	s=1;
	t=1.0;
	pi=0.0;
	n=1.0;

	//3.��ȡ����

	//4.��������
	while (fabs(t)>1e-6)
	{
		pi=pi+t;
		n=n+2;
		s=-s;
		t=s/n;
	}
	pi=pi*4;

	//5.�������
	printf("pi=%10.6f\n",pi);
	printf("\n");


	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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







/*
===============================================================================
��������:	��Fibonacci���е�ǰ��ʮ����
һ����ʽ��	example5()
����˵����  long int f1;
			long int f2;
			int i;
�� �� ֵ��	����
������ʽ��	example5()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_5()
{
	//5.��5.5  ��Fibonacci���е�ǰ��ʮ����  p105
	printf("5.��5.5  ��Fibonacci���е�ǰ��ʮ����  p105\n");

	//1.�����������
	long int f1;
	long int f2;
	int i;
	
	//2.��������ֵ
	f1=1;
	f2=1;

	//3.��ȡ����  //4.��������	//5.�������
	for (i=1;i<=20;i++)
	{
		printf("%12d %12d",f1,f2);
		if(i%2==0)
		{
			printf("\n");
		}
		f1=f1+f2;
		f2=f2=f1;
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
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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






/*
===============================================================================
��������:	��100-200֮�䲻�ܱ�3�����������
һ����ʽ��	example6()
����˵����	int n;			
�� �� ֵ��	����
������ʽ��	example6()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_6()
{
	//6.��5.6  ��100-200֮�䲻�ܱ�3�����������  p109	
	printf("6.��5.6  ��100-200֮�䲻�ܱ�3�����������  p109\n");
	
	//1.�����������
	int n;
	//2.��������ֵ //3.��ȡ����	//4.�������� //5.�������
	for (n=100;n<=200;n++)
	{
		if (n%3==0)
		{
			continue;
		}
		printf("%d ",n);	
	}
	printf("\n");
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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






/*
===============================================================================
��������:	 �ж�m�Ƿ�Ϊ���� 
һ����ʽ��		example7()
����˵����		int i;
				int m;
				int k;
�� �� ֵ��	����
������ʽ��	example7()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#include <math.h>
int example5_7()
{
	//7.��5.7  �ж�m�Ƿ�Ϊ����  p109
	printf("7.��5.7  �ж�m�Ƿ�Ϊ����  p109\n");
	
	//1.�����������
	int i;
	int m;
	double k;

	//2.��������ֵ
	m=0;
	k=0.0;

	//3.��ȡ����
	printf("Please enter an integer number:");
	scanf("%d",&m);

	//4.��������
	k=sqrt(m);
	for (i=2;i<=k;i++)
	{
		if (m%i==0)
			break;
	}

	//5.�������
	if (i>k)
	{
		printf("%d is a prime number.\n",m);
	}
	else
	{
		printf("%d is not a prime number.\n",m);
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
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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







/*
===============================================================================
��������:	��100-200֮���ȫ������
һ����ʽ��	example8()
����˵����	int m;
			int n;
			int i;
			int k;		
�� �� ֵ��	����
������ʽ��	example8()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_8()
{
	//8.��5.8  ��100-200֮���ȫ������  p110
	printf("8.��5.8  ��100-200֮���ȫ������  p110\n");

	//1.�����������
	int m;
	int n;
	int i;
	double k;

	//2.��������ֵ
	n=0;
	k=0;
	i=0;
	
	//3.��ȡ����

	//4.��������

	//5.�������
	fflush(stdin);
	fflush(stdout);
	for (m=101;m<=200;m=m+2)
	{
		k=sqrt(m);
		for (i=2;i<=k;i++)
		{
			if (m%i==0)
			{
				break;
			}
		}
		if (i>=k)
		{
			printf("%d ",m);
			n=n+1;
		}
	}
	printf("\n");
	printf("\n");


	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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






/*
===============================================================================
��������:	������
һ����ʽ��	example9()
����˵����	char c			
�� �� ֵ��	����
������ʽ��	example9()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_9()
{
	//9.��5.9  �����롣����ĳһ��ĸ������ĵ��ĸ���ĸ��
	printf("9.��5.9  �����롣����ĳһ��ĸ������ĵ��ĸ���ĸ��\n");

	//1.�����������
	char c;

	//2.��������ֵ

	//3.��ȡ����
	
	//4.��������

	//5.�������
	while ((c=getchar())!='\n')
	{
		if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			c=c+4;
			if ((c>'Z'&&c<='Z'+4)||c>'z')
			{
				c=c-26;
			}
		}
		printf("%c",c);
	}
	printf("\n");
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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







/*
===============================================================================
��������:	��������������m��n,�������Լ������С������
һ����ʽ��	exercise1()
����˵����	int m;
			int n;
			int d;
			int i;			
�� �� ֵ��	����
������ʽ��	exercise1()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_1()
{
	//1.ϰ��5.1  ��������������m��n,�������Լ������С������  p113
	printf("1.ϰ��5.1  ��������������m��n,�������Լ������С������  p113\n");
	
	//1.�����������
	int m;
	int n;
	int d;
	int i;
	
	//2.��������ֵ
	m=0;
	n=0;
	i=0;
	d=0;
	
	//3.��ȡ����
	printf("������������m��ֵ:");
	scanf("%d",&m);
	printf("������������n��ֵ:");
	scanf("%d",&n);

	//4.��������
	d=m*n;
	if (m>n)
	{
		do
		{
			i=m-n;
			m=i;
			if (m>n)
			{
				i=m-n;
				m=i;
			}
			else
			{
				i=n-m;
				n=i;
			}
		}
		while (m==n);
	}
	else
	{
		while (m!=n)
		{
			i=n-m;
			m=i;
			if (m>n)
			{
				i=m-n;
				m=i;
			}
			else
			{
				i=n-m;
				n=i;
			}
		}
	}
	d=d/m;

	//5.�������
	printf("����(m,n)�����Լ��Ϊ");
	printf("%d",m);
	printf("\n");
	printf("����(m,n)����С������Ϊ");
	printf("%d",d);
	printf("\n");
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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


/*
===============================================================================
��������:	 ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����֡��������ַ��ĸ���
һ����ʽ��	exercise2()
����˵����		int a;
				int b;
				int c;
				int d;
				char e;			 
�� �� ֵ��	����
������ʽ��	exercise2()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_2()
{
	//2.ϰ��5.2  ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����֡��������ַ��ĸ���  p113
	printf("2.ϰ��5.2  ����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����֡��������ַ��ĸ���  p113\n");

	//1.�����������
	int a;
	int b;
	int c;
	int d;
	char e;

	//2.��������ֵ
	a=0;
	b=0;
	c=0;
	d=0;

	//3.��ȡ����
	fflush(stdin);
	fflush(stdout);
	printf("������һ���ַ�:");

	//4.��������
	while ((e=getchar())!='\n')
	{
		if ((e>='a'&&e<='z')||(e>='A'&&e<='Z'))
		{
			a+=1;
		}
		else if (e==' ')
		{
				b+=1;
		}
		else if (e>='0'&&e<='9')
		{
				c+=1;
		}
		else
		{
				d+=1;
		}

	}

	//5.�������
	printf("�����ַ���Ӣ����ĸ��Ϊ");
	printf("%d\n",a);
	printf("�����ַ��Ŀո���Ϊ");
	printf("%d\n",b);
	printf("�����ַ���������Ϊ");
	printf("%d\n",c);
	printf("�����ַ��������ַ���Ϊ");
	printf("%d\n",d);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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






/*
===============================================================================
��������:	��sn=a+aa+aaa+aaaa+...+aa...aֵ֮������a��һ�����֣�n��ʾa��λ����n�ɼ������룩
һ����ʽ��	exercise3()
����˵����		int n;
				int a;
				int i;
				int s;			
�� �� ֵ��	����
������ʽ��	exercise3()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_3()
{
	//3.ϰ��5.3  ��sn=a+aa+aaa+aaaa+...+aa...aֵ֮������a��һ�����֣�n��ʾa��λ����n�ɼ������룩  p113
	printf("3.ϰ��5.3  ��sn=a+aa+aaa+aaaa+...+aa...aֵ֮������a��һ�����֣�n��ʾa��λ����n�ɼ������룩  p113\n");

	//1.�����������
	int n;
	int a;
	int i;
	int s;
	int m;

	//2.��������ֵ
	n=0;
	a=0;
	s=0;
	m=0;

	//3.��ȡ����
	printf("��������a=");
	scanf("%d",&a);
	printf("��������n=");
	scanf("%d",&n);

	//4.��������
	for (i=1;i<=n;i++)
	{
		m=(10*m)+a;
		s=s+m;
	}

	//5.�������
	printf("��ʽ��ֵΪ");
	printf("%d",s);
	printf("\n");
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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



/*
===============================================================================
��������:	��1��+2��+3��+...+20!  
һ����ʽ��	exercise4()
����˵����	int s;
			int d;
			int i;				
�� �� ֵ��	����
������ʽ��	exercise4()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_4()
{
	//4.ϰ��5.4  ��1��+2��+3��+...+20!  p113
	printf("4.ϰ��5.4  ��1��+2��+3��+...+20!  p113\n");

	//1.�����������
	double s;
	double d;
	int i;		

	//2.��������ֵ
	s=0.0;
	d=1.0;	

	//3.��ȡ����

	//4.��������
	for (i=1;i<=20;i++)
	{
		d=i*d;				
		s=d+s;
	}

	//5.�������
	printf("%e",s);
	printf("\n");
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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

/*
===============================================================================
��������:	��k(k:1-100)+k^2(1-50)+1/k(1-10)
һ����ʽ��	exercise5()
����˵����	int s;
			int s1;
			int s2;
			int s3;
			int k1;
			int k2;
			int k3;			
�� �� ֵ��	����
������ʽ��	exercise5()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_5()
{
	//5.ϰ��5.5  ��k(k:1-100)+k^2(1-50)+1/k(1-10)  p113
	printf("5.ϰ��5.5  ��k(k:1-100)+k^2(1-50)+1/k(1-10)  p113\n");
	
	//1.�����������
	double s;
	double s1;
	double s2;
	double s3;
	int k1;
	int k2;
	int k3;

	//2.��������ֵ
	s=0.0;
	s1=0.0;
	s2=0.0;
	s3=0.0;

	//3.��ȡ����

	//4.��������
	for (k1=1;k1<=100;k1++)
	{
		s1=s1+k1;
	}
	for (k2=1;k2<=50;k2++)
	{		
		s2=s2+k2*k2;
	}
	for (k3=1;k3<=10;k3++)
	{
		s3=s3+(1.0/k3);
	}  
	s=s1+s2+s3;
	//5.�������
	printf("%f",s);
	printf("\n");
	printf("\n");
	
	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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


/*
===============================================================================
��������:	������е�ˮ�ɻ���
һ����ʽ��	exercise6()
����˵����	int d1;
			int d2;
			int d3;
			int i;
			int n;
			int k;			
�� �� ֵ��	����
������ʽ��	exercise6()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_6()
{
	//6.ϰ��5.6		������е�ˮ�ɻ���	p113
	printf("6.ϰ��5.6		������е�ˮ�ɻ���	p113\n");
	
	//1.�����������
	int d1;
	int d2;
	int d3;
	int i;
	int n;
	int k;

	//2.��������ֵ
	d1=0;
	d2=0;
	d3=0;
	i=0;
	n=0;
	k=0;

	//3.��ȡ����

	//4.��������

	//5.�������
	for (i=100;i<=999;i++)
	{
		d1=i/100;
		d2=(i-100*d1)/10;
		d3=i-100*d1-10*d2;
		k=d1*d1*d1+d2*d2*d2+d3*d3*d3;
		if (k==i)
		{
			printf("%d ",i);
			n+=1;
		}
	}
	printf("\n");
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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


/*
===============================================================================
��������:	������ҳ�1000֮�ڵ����е�����
һ����ʽ��	exercise7()
����˵����	int i;
			int m;
			int d;			
�� �� ֵ��	����
������ʽ��	exercise7()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#define N 1001
int exercise5_7()
{
	//7.ϰ��5.7		������ҳ�1000֮�ڵ����е�����	p113
	printf("7.ϰ��5.7		������ҳ�1000֮�ڵ����е�����	p113\n");


	//1.�������
	int i;
	int j;
	int a[N]={0};
	int sum;
	int k;

	//2.����ֵ
	i=6;
	k=0;
	j=0;
	sum=0;

	//3.��ȡ����

	//4.��������
	for(i=6;i<=N;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				k++;
				a[k]=j;
			}
		}
		for(j=1;j<=k;j++)
		{
			sum+=a[j];
		}
		if(sum==i)
		{
			printf("%5d��its factors are ",sum);
			for(j=1;j<=k;j++)
			{
				if(j!=k)  
				{	
					if(a[j]!=0)
						printf("%d,",a[j]);
				}
				else printf("%d",a[j]);
			}
			printf("\n");
		}
		sum=0;
		k=1;
		for(j=1;j<=k;j++)
		{
			a[j]=0;
		}
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
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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

/*
===============================================================================
��������:	��һ����������2/1+3/2+5/3+8/5+13/8...���������е�ǰ20��֮��
һ����ʽ��	exercise8()
����˵����	int m;
			int n;
			int i;
			int b;
			double d;
			double s;			
�� �� ֵ��	����
������ʽ��	exercise8()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_8()
{
	//8.ϰ��5.8		��һ����������2/1+3/2+5/3+8/5+13/8...���������е�ǰ20��֮��		p113
	printf("8.ϰ��5.8		��һ����������2/1+3/2+5/3+8/5+13/8...���������е�ǰ20��֮��		p113\n");

	//1.�����������
	float m;
	float n;
	float i;
	float b;
	double d;
	double s;

	//2.��������ֵ
	m=1;
	n=2;
	i=0;
	b=0;
	d=0;
	s=0;

	//3.��ȡ����

	//4.��������
	for (i=1;i<=20;i++)
	{
		d=n/m;
		s=d+s;
		b=n;
		n=m+b;
		m=b;
	}

	//5.�������
	printf("��ʽ֮��Ϊ��");
	printf("%f",s);
	printf("\n");
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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


/*
===============================================================================
��������:	һ�����100�׵ĸ߶��������£�ÿ����غ󷴵���ԭ�߶ȵ�һ �룬�����£��ڷ����������ڵ�ʮ�����ʱ���������˶����ף���ʮ�η�����ߣ�
һ����ʽ��	exercise9()
����˵����	int H;
			int h;
			int s;
			int i;			
�� �� ֵ��	����
������ʽ��	exercise9()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_9()
{
	//9.ϰ��5.9		һ�����100�׵ĸ߶��������£�ÿ����غ󷴵���ԭ�߶ȵ�һ �룬�����£��ڷ����������ڵ�ʮ�����ʱ���������˶����ף���ʮ�η�����ߣ�	p113
	printf("9.ϰ��5.9	һ�����100�׵ĸ߶��������£�ÿ����غ󷴵���ԭ�߶ȵ�һ �룬�����£��ڷ����������ڵ�ʮ�����ʱ���������˶����ף���ʮ�η�����ߣ�	p113\n");

	//1.�����������
	float H;
	float s;
	float h;
	int i;

	//2.��������ֵ
	H=100.0;
	i=0;
	s=100.0;
	h=0.0;

	//3.��ȡ����

	//4.��������
	for (i=2;i<=10;i++)
	{
		H=H/2;
		s=s+2*H;
	}
	h=H/2;

	//5.�������
	printf("��������·��Ϊ��");
	printf("%f\n",s);
	printf("��ʮ�η����ĸ߶�Ϊ��");
	printf("%f\n",h);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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

/*
===============================================================================
��������:	���ӳ�������
һ����ʽ��	exercise10()
����˵����	int a;
			int d;
			int i;				
�� �� ֵ��	����
������ʽ��	exercise10()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_10()
{
	//10.ϰ��5.10	���ӳ�������	p113
	printf("10.ϰ��5.10	���ӳ������⡣	p113\n");		

	//1.�����������
	int d1;
	int d2;
	int i;

	//2.��������ֵ		
	d1=0;
	d2=1;

	//3.��ȡ����

	//4.��������
	for (i=10;i>1;i--)
	{
		d1=2*(d2+1);
		d2=d1;
	}

	//5.�������
	printf("��һ�칲ժ���ӵĸ���Ϊ��");
	printf("%d\n",d1);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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
	
//�㷨���󣨵���������


/*
===============================================================================
��������:	�õ�������x=a^(1/2)��Ҫ��ǰ�����������x�Ĳ�ľ���ֵС��E-005 
һ����ʽ��	exercise11()
����˵����		float x0;
				float x1;
				float a;		 
�� �� ֵ��	����
������ʽ��	exercise11()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#include <math.h>
int exercise5_11()
{
	//11.ϰ��5.11	�õ�������x=a^(1/2)��Ҫ��ǰ�����������x�Ĳ�ľ���ֵС��E-005  p113
	printf("11.ϰ��5.11	�õ�������x=a^(1/2)��Ҫ��ǰ�����������x�Ĳ�ľ���ֵС��E-005  p113\n");

	//1.�����������
	float x0;
	float x1;
	float a;
	float b;

	//2.��������ֵ
	x0=0.0;
	x1=0.0;
	b=0.0;
	a=0.0;

	//3.��ȡ����
	printf("������һ���Ǹ���a=");
	scanf("%f",&a);

	//4.��������
	x0=a/2;
	do
	{			
		x1=(x0+a/x0)/2;
		b=x0;
		x0=x1;
	}
	while (fabs(b-x0)>1e-005);

	//5.�������
	printf("a��ƽ����=%f\n",x0);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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

/*
===============================================================================
��������:	��ţ�ٵ����������淽����1.5�����ĸ���2x^3-4x^2+3x-6=0
һ����ʽ��	exercise12()
����˵����	float x0;
			float x1;
			float m;
			float f;
			float f1;
�� �� ֵ��	����
������ʽ��	exercise12()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#include <math.h>
int exercise5_12()
{
	//12.ϰ��5.12	��ţ�ٵ����������淽����1.5�����ĸ���2x^3-4x^2+3x-6=0	p113
	printf("12.ϰ��5.12	��ţ�ٵ����������淽����1.5�����ĸ���2x^3-4x^2+3x-6=0	p113\n");

	//1.�����������
	float x0;
	float x1;
	double m;
	float f;
	float f1;

	//2.��������ֵ
	x1=1.5;
	x0=0.0;
	m=1.0;

	//3.��ȡ����

	//4.��������
	while (m>=1e-6)
	{	
		x0=x1;
		f=2*x0*x0*x0-4*x0*x0+3*x0-6;
		f1=6*x0*x0-8*x0+3;
		x1=x0-f/f1;			
		m=fabs(x1-x0);
	}

	//5.�������
	printf("�÷��̵ĸ�=%f\n",x0);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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


/*
===============================================================================
��������:	�ö��ַ������淽���ڣ�-10,10��֮��ĸ���2x^3-4x^2+3x-6=0	p113
һ����ʽ��	exercise13()
����˵����
			float a;
			float b;
			float c;
			float d;
			float m;
�� �� ֵ��	����
������ʽ��	exercise13()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_13()
{
	//13.ϰ��5.13	�ö��ַ������淽���ڣ�-10,10��֮��ĸ���2x^3-4x^2+3x-6=0	p113
	printf("13.ϰ��5.13	�ö��ַ������淽���ڣ�-10,10��֮��ĸ���2x^3-4x^2+3x-6=0	p113\n");

	//1.�����������
	float a;
	float b;
	float c;
	float d;
	float m;

	//2.��������ֵ
	m=0.0;
	c=0.0;
	d=0.0;
	a=-10.0;
	b=10.0;

	//3.��ȡ����

	//4.��������
	do
	{
		c=(a+b)/2;
		m=2*c*c*c-4*c*c+3*c-6;
		if (m>0)
		{
			b=c;
			c=(a+b)/2;
		}
		if (m<0)
		{
			a=c;
			c=(a+b)/2;
		}
		if (m==0)
		{
			printf("�÷��̵ĸ�=%f\n",c);
		}
		d=b-a;
	}
	while (d>=1e-6);
	//5.�������
	printf("�÷��̵ĸ�=%f\n",c);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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

/*
===============================================================================
��������:	�������ͼ��
һ����ʽ��	exercise14()
����˵����	int m;
			int n;
			int i;
�� �� ֵ��	����
������ʽ��	exercise14()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_14()
{
	//14.ϰ��5.14	���һ��ͼ��	p114
	printf("14.ϰ��5.14	���һ��ͼ��	p114\n");

	//1.�����������
	int m;
	int n;
	int i;

	//2.��������ֵ

	//3.��ȡ����

	//4.��������	//5.�������
	for (i=0;i<=3;i++)
	{
		for (m=0;m<=2-i;m++)
		{
			printf("  ");
		}
		for (n=0;n<=2*i;n++)
		{
			printf("* ");
		}
		printf("\n");
	}

		for (i=0;i<=2;i++)
	{
		for (m=0;m<=2*i-m;m++)
		{
			printf("  ");
		}
		for (n=0;n<=4-2*i;n++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i=2;i>=0;i--)
	{
		for (m=0;m<=2-i;m++)
		{
			printf("  ");
		}
		for (n=0;n<=2*i;n++)
		{
			printf("* ");
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
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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

/*
===============================================================================
��������:	�ҳ��������ֵ�����
һ����ʽ��	exercise15()
����˵����
			char i;
			char j;
			char k;
�� �� ֵ��	����
������ʽ��	exercise15()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_15()
{
	//15.ϰ��5.15	�ҳ��������ֵ�����	p114
	printf("15.ϰ��5.15	�ҳ��������ֵ�����	p114\n");

	//1.�����������
	char A;
	char B;
	char C;

	//2.��������ֵ
	A=0;
	B=0;
	C=0;

	//3.��ȡ����

	//4.��������	//5.�������
	for(A='X';A<='Z';A++)
	{
		for(B='X';B<='Z';B++)
		{
			if(A!=B)
			{
				for(C='X';C<='Z';C++)
				{
					if(A!=C && B!=C)
					{
						if(A!='X' && C!='X' && C!='Z')
						{
							printf("A��%c�Ծ�\n",A);
							printf("B��%c�Ծ�\n",B);
							printf("C��%c�Ծ�\n",C);
						}
					}
				}
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
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_5();
				break;

		case 3:	goto end;
				
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
