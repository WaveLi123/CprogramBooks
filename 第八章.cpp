/*
***************************************************************************************************************************************************
															��ΰ��_1240069
//ʱ�䣺2012_12_26
//1.����8.1	ͨ��ָ������������ͱ���	p191
//2.����8.2	����a��b��������,���ȴ��С��˳�����	p191
//3.����8.3	����a��b��������,���ȴ��С��˳�������Ҫ���ú���������ָ�����������������	p192
//4.����8.4	������������a,b,c,Ҫ�󰴴�С˳������������ú���ʵ�ָı�������������ֵ��	p196
//5.����8.5��1��2��3��	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199
//6.����8.6
//7.����8.7
//8.����8.8
//9.����8.9
//10.����8.10
//11.����8.11
**************************************************************************************************************************
*/


#include "head.h"
#include "eighth.h"
#include <windows.h>
int system(const char *string);

int choose8=0;//����ȫ�ֱ���
int choos8=0;//����ȫ�ֱ���


int number_8()
{
start:
	//�û���ʾ��Ϣ

	printf("�ӭ���롶C������ƽ̡̳��ڰ��£���\n");
	printf("***************************************************************************\n");
	printf("*1. �ڰ�������8.1 ͨ��ָ������������ͱ��� p191                           *\n");
	printf("*2. �ڰ�������8.2 ����a��b��������,���ȴ��С��˳�����	p191              *\n");
	printf("*3. �ڰ�������8.3 ����a��b��������,���ȴ��С��˳�����(Ҫ���ú�������,�� *\n");
	printf("*   ָ���������������)p192                                               *\n");                                                
	printf("*4. �ڰ�������8.4 ������������a,b,c,Ҫ�󰴴�С˳������������ú���ʵ�ָ�*\n");
	printf("*   ��������������ֵ.p196                                                 *\n");                             
	printf("*5. �ڰ�������8.5.1 ��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ��.p199*\n"); 
	printf("*6. �ڰ�������8.5.2                                                       *\n");                                                           
	printf("*7. �ڰ�������8.5.3                                                       *\n");                                                            
	printf("*8. �ڰ�������8.6                                                         *\n");
	printf("*9. �ڰ�������8.7                                                         *\n");
	printf("*10.�ڰ�������8.8                                                         *\n");
	printf("*11.�ڰ�������8.9                                                         *\n");
	printf("*12.�ڰ�������8.10                                                        *\n");
	printf("*13.�ڰ�������8.11                                                        *\n");
	printf("*14.�������˵�                                                            *\n");
	printf("*15.�˳�                                                                  *\n");
	printf("***************************************************************************\n");
	printf("����������ѡ��");
	scanf("%d",&choose8);
	switch (choose8)
	{
		case 1:	system("cls");
				example8_1();
				break;

		case 2:	system("cls");
				example8_2();
				break;

		case 3:	system("cls");
				example8_3();
				break;

		case 4:	system("cls");
				example8_4();
				break;

		case 5:	system("cls");
				example8_5_1();
				break;

		case 6:	system("cls");
				example8_5_2();
				break;

		case 7:	system("cls");
				example8_5_3();
				break;

		case 8:	system("cls");
				example8_6();
				break;

		case 9:	system("cls");
				example8_7();
				break;

		case 10: system("cls");
				example8_8();
				break;

		case 11: system("cls");
				example8_9();
				break;

		case 12:system("cls");
				example8_10();
				break;

		case 13:system("cls");
				example8_11();
				break;

		case 14:system("cls");
				main();
				break;

		case 15:system("cls");
				goto end;	
				break;
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
�������ܣ�ͨ��ָ������������ͱ���
һ����ʽ��void example1()
����˵����
			int a;
			int b;
			int *pointer_1;
			int *pointer_2;  
����ֵ������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_1()
{
	//1.����8.1	ͨ��ָ������������ͱ���	p191
	printf("1.����8.1	ͨ��ָ������������ͱ���	p191\n");
	
	//1.�����������
	int a;
	int b;
	int *pointer_1;
	int *pointer_2;

	//2.��������ֵ
	a=100;
	b=10;
	pointer_1=&a;
	pointer_2=&b;

	//3.��ȡ����

	//4.��������

	//5.�������
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("pointer_1=%d\n",*pointer_1);
	printf("pointer_2=%d\n\n",*pointer_2);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
�������ܣ�����a��b��������,���ȴ��С��˳�����
һ����ʽ��void example2()
����˵����	int a;
			int b;
			int *p1;
			int *p2;
			int *p;
            
����ֵ������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_2()
{
	printf("2.����8.2	����a��b��������,���ȴ��С��˳�����	p191\n");

	//1.�����������
	int a;
	int b;
	int *p1;
	int *p2;
	int *p;

	//2.��������ֵ
	a=0;
	b=0;
	p1=&a;
	p2=&b;

	//3.��ȡ����
	printf("Please input an interger a=");
	scanf("%d",&a);
	printf("Please input an interger b=");
	scanf("%d",&b);

	//4.��������
	if (a<b)
	{
		p=p1;
		p1=p2;
		p2=p;
	}

	//5.�������
	printf("a=%d ",a);
	printf("b=%d \n",b);
	printf("Max=%d ",*p1);
	printf("Min=%d \n\n",*p2);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
�������ܣ�����a��b��������,���ȴ��С��˳�������Ҫ���ú���������ָ�����������������
һ����ʽ��void example3()
����˵����	int a;
			int b;
			int *pointer_1;
			int *pointer_2;          
����ֵ������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_3()
{
	//3.����8.3	����a��b��������,���ȴ��С��˳�������Ҫ���ú���������ָ�����������������	p192
	printf("3.����8.3	����a��b��������,���ȴ��С��˳�������Ҫ���ú���������ָ�����������������	p192\n");
	void swap(int *p1,int *p2);

	//1.�����������
	int a;
	int b;
	int *pointer_1;
	int *pointer_2;

	//2.��������ֵ
	a=0;
	b=0;
	pointer_1=&a;
	pointer_2=&b;

	//3.��ȡ����
	printf("please input an interger a=");
	scanf("%d",&a);
	printf("Please input an interger b=");
	scanf("%d",&b);

	//4.��������
	if (a<b)
	{
		swap(pointer_1,pointer_2);
	}

	//5.�������
	printf("Max=%d\n",*pointer_1);
	printf("Min=%d\n\n",*pointer_2);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void swap(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}




/*
=================================================================
�������ܣ�������������a,b,c,Ҫ�󰴴�С˳������������ú���ʵ�ָı�������������ֵ��	p196
һ����ʽ��void example4()
����˵����
			int a;
			int b;
			int c;
			int *pointer_1;
			int *pointer_2;
			int *pointer_3;
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_4()
{
	//4.����8.4	������������a,b,c,Ҫ�󰴴�С˳������������ú���ʵ�ָı�������������ֵ��	p196
	printf("4.����8.4	������������a,b,c,Ҫ�󰴴�С˳������������ú���ʵ�ָı�������������ֵ��	p196\n");
	void exchange(int *p1,int *p2,int *p3);

	//1.�����������
	int a;
	int b;
	int c;
	int *pointer_1;
	int *pointer_2;
	int *pointer_3;

	//2.��������ֵ
	a=0;
	b=0;
	c=0;
	pointer_1=&a;
	pointer_2=&b;
	pointer_3=&c;

	//3.��ȡ����
	printf("Please input an interger a=");
	scanf("%d",&a);
	printf("Please input an interger b=");
	scanf("%d",&b);
	printf("Please input an interger c=");
	scanf("%d",&c);

	//4.��������
	exchange(pointer_1,pointer_2,pointer_3);

	//5.�������
	printf("The order of the three intergers is %d,%d,%d\n\n",*pointer_1,*pointer_2,*pointer_3);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void exchange(int *p1,int *p2,int *p3)
{
	void swap(int *p4,int *p5);
	if (*p1<*p2)
	{
		swap(p1,p2);
	}
	if (*p1<*p3)
	{
		swap(p1,p3);
	}
	if (*p2<*p3)
	{
		swap(p2,p3);
	}
}
void swap2(int *p4,int *p5)
{
	int temp;
	if (*p4<*p5)
	{
		temp=*p4;
		*p4=*p5;
		*p5=temp;
	}

}





/*
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_5_1()
{
	//5.����8.5	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199
	printf("5.����8.5_1��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�(�±귨)	p199\n");

	//1.�����������
	int	s[10];
	int i;

	//2.��������ֵ
	i=0;

	//3.��ȡ����
	printf("Please input an array of 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}

	//4.��������

	//5.�������
	printf("The numbers of the array are\n ");
	for (i=0;i<10;i++)
	{
		printf("%3d",s[i]);
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
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_5_2()
{
	//5.����8.5	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199
	printf("5.����8.5_2	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199\n");

	//1.�����������
	int	s[10];
	int i;

	//2.��������ֵ
	i=0;

	//3.��ȡ����
	printf("Please input an array of 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}

	//4.��������

	//5.�������
	printf("The numbers of the array are\n ");
	for (i=0;i<10;i++)
	{
		printf("%3d",*(s+i));
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
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_5_3()
{
//5.����8.5	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199
	printf("5.����8.5_3	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199\n");
//1.�����������
	int s[10];
	int *p;
	int i;
//2.��������ֵ
	i=0;;
//3.��ȡ����
	printf("Please input an array of 10 numbers:");
	for (i=0;i<10;i++)
	{
		scanf("%d",&s[i]);
	}
//4.��������

//5.�������
	printf("The numbers of the array are \n");
	for (p=s;p<s+10;p++)
	{
		printf("%3d",*p);
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
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_6()
{
	//5.����8.6		p199
	printf("6.����8.6	p199\n");

	//1.�����������
	int i;
	int *p;
	int a[10];

	//2.��������ֵ
	p=a;

	//3.��ȡ����
	printf("Please input 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",p++);
	}

	//4.��������
	p=a;

	//5.�������
	for (i=0;i<10;i++,p++)
	{
		printf("%5d",*p);
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
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
void inv(int *x,int n);
int example8_7()
{
	//5.����8.7
	printf("7.����8.7	\n");

	//1.�����������
	int i;
	int a[10]={3,7,9,11,0,6,7,5,4,2};

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	printf("The original array :\n");
	for (i=0;i<10;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	inv(a,10);

	//5.�������
	printf("The array has been inverted:\n");
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
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void inv(int *x,int n)
{
	//1.�����������
	int *p;
	int *i;
	int *j;
	int temp;
	int m;

	//2.��������ֵ
	m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;

	//3.��ȡ����

	//4.��������
	for (;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}

	//5.�������
	return;
}




/*
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
void inv1(int *x,int n);
int example8_8()
{
	//5.����8.7
	printf("8.����8.8	\n");

	//1.�����������
	int i;
	int a[10];
	int *p;

	//2.��������ֵ
	p=a;

	//3.��ȡ����
	printf("Please input 10 numbers:\n");
	for (i=0;i<10;i++,p++)
	{
		scanf("%5d",p);
	}
	printf("\n");

	//4.��������
	p=a;
	inv(p,10);

	//5.�������
	printf("The array has been inverted:\n");
	for (p=a;p<a+10;p++)
	{
		printf("%5d",*p);
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
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void inv1(int *x,int n)
{
	//1.�����������
	int *p;
	int *i;
	int *j;
	int temp;
	int m;

	//2.��������ֵ
	m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;

	//3.��ȡ����

	//4.��������
	for (;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}

	//5.�������
	return;
}






/*
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
void so_rt(int x[],int n);
int example8_9()
{
	//5.����8.5	
	printf("9.����8.9	\n");

	//1.�����������
	int i;
	int *p;
	int a[10];

	//2.��������ֵ
	p=a;

	//3.��ȡ����
	printf("please input 10 numbers:\n");
	for (i=0;i<10;i++)
	{
		scanf("%d",p++);
	}

	//4.��������
	p=a;
	so_rt(a,10);

	//5.�������
	printf("The order of the 10	numbers	:\n");
	for (p=a,i=0;i<10;i++,p++)
	{
		printf("%5d",*p);
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
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
void so_rt(int x[],int n)
{
	//1.�����������
	int i;
	int j;
	int k;
	int t;

	//2.��������ֵ
	i=0;
	j=0;
	k=0;
	t=0;

	//3.��ȡ����
	
	//4.��������
	for (i=0;i<n-1;i++)
	{
		k=i;
		for (j=i+1;j<n;j++)
		{
			if (x[j]>x[k])
			{
				k=j;
				if (i!=j)
				{
					t=x[i];
					x[i]=x[k];
					x[k]=t;
				}
			}
		}
	}
	
	//5.�������
}





/*
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_10()
{
	//5.����8.5	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199
	printf("10.����8.10	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199\n");

	//1.�����������
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int *p;

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	for (p=a[0];p<a[0]+12;p++)
	{
		if ((p-a[0])%4==0)
		{
			printf("\n");
		}
		printf("%5d",*p);
	}

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
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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
=================================================================
�������ܣ���������Ԫ��
һ����ʽ��void example1()
����˵����
          int i
        int a[N]  
����ֵ������������
������ʽ��
Date		Name		Create/Correct
2013_1_5	liweikang	create
==================================================================
*/
int example8_11()
{
	//5.����8.5	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199
	printf("11.����8.11	��һ����������a����ʮ��Ԫ�أ���������е�ȫ��Ԫ�ء�	p199\n");

	//1.�����������
	int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int i;
	int j;
	int *p;
	int (*i_p)[4];

	//2.��������ֵ
	i_p=a;

	//3.��ȡ����
	for (p=a[0];p<a[0]+12;p++)
	{
		if ((p-a[0])%4==0)
		{
			printf("\n");
		}
		printf("%5d",*p);
	}
	printf("\n");
	printf("please input the location :\n");
	scanf("i=% d",&i);
	scanf("j=% d",&j);

	//4.��������

	//5.�������
	printf("a[% d,% d]=% d\n",i,j,*(*(i_p+i)+j));

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose8);
	switch(choose8)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_8();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos8);
				if (choos8=='y'||choos8=='Y')
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

