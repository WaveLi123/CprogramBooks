/*
********************************************************************************************************************
											1240069_��ΰ��
//2012_11.20_9:30
//1.��6.1  ��������Ԫ�ء�����ѭ��������Ԫ��a��0��-a��9����ֵ0-9��Ȼ�����������Ԫ�ص�ֵ  p116
//2.��6.2  ������������Fibonacci��������   p117
//3.��6.3  ����10�����������ݷ�����10����������С����  p118
//4.��6.4  ��һ����ά����a���к��е�Ԫ�ػ�����������ת�ƣ����浽��һ����ά����b��   p122
//5.��6.5  ��һ��3*4�Ķ�ά����a��Ҫ�������������ֵ�����Ǹ�Ԫ�ص�ֵ���Լ������ڵ��кź��к�  p123
//6.��6.6  ���һ���ַ���  P125
//7.��6.7  ���һ������ͼ  p126
//8.��6.8  ����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�  p134
//9.��6.9  �������ַ�����Ҫ���ҳ����е������  136

//2012_12.7_10:00
//1.ϰ��6.1	��ɸѡ����100֮�ڵ����� p138				
//2.ϰ��6.2	��ѡ�񷨶�10����������	p138
//3.ϰ��6.3	��һ��3*3�����Ͷ�ά����Խ���Ԫ��֮��	P138
//4.ϰ��6.4	��һ�����źõ����飬Ҫ������һ�����󣬰�ԭ�����Ĺ��ɽ�������������	p138
//5.ϰ��6.5	��һ�������е�ֵ����������	p138
//6.ϰ��6.6 ���ʮ�е����������	p138
//7.ϰ��6.7 ���ħ����	P138
//8.ϰ��6.8	�ҳ�һ����ά�����еİ��㣨����λ���ϵ�Ԫ���ڸ���������ڸ�������С����Ҳ����û�а���	p138
//9.ϰ��6.9	��һ����15�������������۰����ĳ���Ƿ���������	p138
//10.ϰ��6.10	ͳ�Ƴ�һƪ������������Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ���	p138
//11.ϰ��6.11	�������ͼ��	p139
//12.ϰ��6.12	��һ���������������ļ�	p139
//13.ϰ��6.13	��һ�����򣬽������ַ�����������	p139
//14.ϰ��6.14	��һ�����򣬽������ַ����Ƚ�	p139
//15.ϰ��6.15	��һ�����򣬽�һ�������Ƶ���һ��������	p139
********************************************************************************************************************
*/


#include "head.h"
#include "sixth.h"
#include <windows.h>
int system(const char *string);
int choose6;//����ȫ�ֱ���
int choos6;//����ȫ�ֱ���
int number_6()
{	
start:
	//�û�������ʾ
	printf("�ӭ���롶C������ƽ̡̳������£���\n");
	printf("*******************************************************************************\n");
    printf("*1. ��6.1 ��������Ԫ�ء�����ѭ��������Ԫ��a��0��-a��9����ֵ0-9��Ȼ���������*\n");
	printf("*   ��Ԫ�ص�ֵ                                                            p116*\n");
	printf("*2. ��6.2 ������������Fibonacci��������                                   p117*\n");
	printf("*3. ��6.3 ����10�����������ݷ�����10��������(��С����)                    p118*\n");
	printf("*4. ��6.4 ��һ����ά����a���к��е�Ԫ�ػ���(������ת��),�浽��һ����ά����b�� *\n");
	printf("*   p122                                                                      *\n");
	printf("*5. ��6.5 ��һ��3*4�Ķ�ά����a,Ҫ�������������ֵ�����Ǹ�Ԫ�ص�ֵ,�Լ�����*\n");
    printf("*   �ڵ��кź��к�                                                        p123*\n");
	printf("*6. ��6.6 ���һ���ַ���                                                  P125*\n");
	printf("*7. ��6.7 ���һ������ͼ                                                  p126*\n");
	printf("*8. ��6.8 ����һ���ַ�,ͳ�������ж��ٸ�����,����֮���ÿո�ֿ�            p134*\n");
	printf("*9. ��6.9 �������ַ���,Ҫ���ҳ����е������                               p136*\n");
	printf("*10.ϰ��6.1 ��ɸѡ����100֮�ڵ�����                                       p138*\n");
	printf("*11.ϰ��6.2 ��ѡ�񷨶�10����������                                        p138*\n");
	printf("*12.ϰ��6.3 ��һ��3*3�����Ͷ�ά����Խ���Ԫ��֮��                         P138*\n");
	printf("*13.ϰ��6.4 ��һ�����źõ�����,Ҫ������һ������,��ԭ���Ĺ��ɽ�������������p138*\n");
	printf("*14.ϰ��6.5 ��һ�������е�ֵ����������                                    p138*\n");
	printf("*15.ϰ��6.6 ���ʮ�е����������                                          p138*\n");
	printf("*16.ϰ��6.7 ���ħ����                                                    P138*\n");
	printf("*17.ϰ��6.8 �ҳ�һ����ά�����еİ���(����λ���ϵ�Ԫ���ڸ��������|�ڸ�������С*\n");
	printf("*   Ҳ����û�а���                                                        p138*\n");
	printf("*18.ϰ��6.9 ��һ����15�������������۰����ĳ���Ƿ���������                p138*\n");
	printf("*19.ϰ��6.10 ͳ�Ƴ�һƪ������������Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ��� *\n");
	printf("*   ���ַ���                                                              p139*\n");
	printf("*20.ϰ��6.11 �������ͼ��                                                 p139*\n");
	printf("*21.ϰ��6.12 ��һ������,���������ļ�                                      p139*\n");
	printf("*22.ϰ��6.13 ��һ������,�������ַ�����������                              p139*\n");
	printf("*23.ϰ��6.14 ��һ������,�������ַ����Ƚ�                                  p139*\n");
	printf("*24.ϰ��6.15 ��һ������,��һ�������Ƶ���һ��������                      p139*\n");
	printf("*25.�������˵�                                                                *\n");
	printf("*26.�˳�                                                                      *\n");
	printf("*******************************************************************************\n");
	printf("����������ѡ��");
	scanf("%d",&choose6);
	switch (choose6)
	{
		case 1:	system("cls");
				example6_1();
				break;

		case 2:	system("cls");
				example6_2();
				break;

		case 3:	system("cls");
				example6_3();
				break;

		case 4:	system("cls");
				example6_4();
				break;

		case 5:	system("cls");
				example6_5();
				break;

		case 6:	system("cls");
				example6_6();
				break;

		case 7:	system("cls");
				example6_7();
				break;

		case 8:	system("cls");
				example6_8();
				break;

		case 9:	system("cls");
				example6_9();
				break;

		case 10:system("cls");
				exercise6_1();
				break;

		case 11:system("cls");
				exercise6_2();
				break;

		case 12:system("cls");
				exercise6_3();
				break;

		case 13:system("cls");
				exercise6_4();
				break;

		case 14:system("cls");
				exercise6_5();
				break;

		case 15:system("cls");
				exercise6_6();
				break;

		case 16:system("cls");
				exercise6_7();
				break;

		case 17:system("cls");
				exercise6_8();
				break;

		case 18:system("cls");
				exercise6_9();
				break;

		case 19:system("cls");
				exercise6_10();
				break;

		case 20:system("cls");
				exercise6_11();
				break;

		case 21:system("cls");
				exercise6_12();
				break;

		case 22:system("cls");
				exercise6_13();
				break;

		case 23:system("cls");
				exercise6_14();
				break;

		case 24:system("cls");
				exercise6_15();
				break;

		case 25:system("cls");
				main();
				break;

		case 26:system("cls");
				goto end;	
				break;
		
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
ʱ�䣺2012_11.20
���ߣ���ΰ��
�������޸����ݣ�
==================================================================
*/
int example6_1()
#define N 9
{
	//1.��6.1  ��������Ԫ�ء�����ѭ��������Ԫ��a��0��-a��9����ֵ0-9��Ȼ�����������Ԫ�ص�ֵ  p116
	printf("1.��6.1  ��������Ԫ�ء�����ѭ��������Ԫ��a��0��-a��9����ֵ0-9��Ȼ�����������Ԫ�ص�ֵ  p116\n");

	//1.����������� 
    int i;
    int a[N];

	//2.��������ֵ
	for (i=0;i<=N;i++)
	{
		a[i]=i;
	}

	//3.��ȡ����

	//4.��������
	for (i=N;i>=0;i--)

	//5.�������
	printf("%-5d",a[i]);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
==================================================================
�������ܣ�������������Fibonacci����
һ����ʽ��void example2()
����˵����
          int i
      
����ֵ��  ����������
������ʽ��
ʱ�䣺    2012_11.20
���ߣ�    ��ΰ��
�������޸����ݣ�
==================================================================
*/  
int example6_2()
{
	//2.��6.2  ������������Fibonacci��������   p117
	printf("2.��6.2  ������������Fibonacci��������   p117\n");
	
	//1.�����������
	int i;
	int f[20]={1,1};

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	for(i=2;i<20;i++)
	f[i]=f[i-2]+f[i-1];

	//5.�������
	for(i=0;i<20;i++)
	{
	if(i%5==0)
	printf("\n");
	printf("%12d",f[i]);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
==================================================================
�������ܣ�����10�����������ݷ�����10����������С����
һ����ʽ��void example3()
����˵����
          int i   XXXXXXXXXX
          int j   XXXXXXXXXX
		  int t   XXXXXXXXXX
����ֵ��  ����������
������ʽ��
ʱ�䣺    2012_11.20
���ߣ�    ��ΰ��
�������޸����ݣ�
==================================================================
*/  
int example6_3()
{
	//3.��6.3  ����10�����������ݷ�����10����������С����  p118
	printf("3.��6.3  ����10�����������ݷ�����10����������С���󣩣�����ʱҪ�ո�  p118\n");

	//1.�����������
	int i;
	int j;
	int t;
	int a[10];

	//2.��������ֵ

	//3.��ȡ����
	printf("input 10 numbers ��\n");
	for (i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("\n");

	//4.��������
	for (j=0;j<9;j++)
	 for (i=0;i<9-j;i++)
	 if(a[i]>a[i+1])
	 {
		 t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
	 }

	//5.�������
	printf("The sorted numbers : \n");
	for(i=0;i<10;i++)
	printf("%-5d",a[i]);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ����ά����a���к��е�Ԫ�ػ�����������ת�ƣ����浽��һ����ά����b��   p122
һ����ʽ��void example4()
����˵����
          int a[2][3]={{1,2,3},{4,5,6}};
		  int b[3][2];
		  int i;
		  int j;
����ֵ��  ����������
������ʽ��
ʱ�䣺    2012_11.20
���ߣ�    ��ΰ��
�������޸����ݣ�
==================================================================
*/  
int example6_4()
{
	//4.��6.4  ��һ����ά����a���к��е�Ԫ�ػ�����������ת�ƣ����浽��һ����ά����b��   p122
	printf("4.��6.4  ��һ����ά����a���к��е�Ԫ�ػ�����������ת�ƣ����浽��һ����ά����b��   p122\n");

	//1.�����������
	int a[2][3]={{1,2,3},{4,5,6}};
	int b[3][2];
	int i;
	int j;

	//2.��������ֵ

	//3.��ȡ����

	//4.��������
	printf("array a : \n");
	for (i=0;i<=1;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("%5d",a[i][j]);
			b[j][i]=a[i][j];
		}
	printf("\n");
	}

	//5.�������
	printf("array b : \n");
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=1;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ��3*4�Ķ�ά����a��Ҫ�������������ֵ�����Ǹ�Ԫ�ص�ֵ���Լ������ڵ��кź��к�  p123
һ����ʽ��void example5()
����˵����
		  int i;
		  int j;
		  int row;
		  int colum;
		  int max;
		  int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
����ֵ��  ����������
������ʽ��
ʱ�䣺    2012_11.20
���ߣ�    ��ΰ��
�������޸����ݣ�
==================================================================
*/
int example6_5()
{
	//��6.5  ��һ��3*4�Ķ�ά����a��Ҫ�������������ֵ�����Ǹ�Ԫ�ص�ֵ���Լ������ڵ��кź��к�  p123
	printf("5.��6.5  ��һ��3*4�Ķ�ά����a��Ҫ�������������ֵ�����Ǹ�Ԫ�ص�ֵ���Լ������ڵ��кź��к�  p123\n");

	//1.�����������
	int i;
	int j;
	int row;
	int colum;
	int max;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
	
	//2.��������ֵ
	row=0;
	colum=0;
	
	//3.��ȡ����
	max=a[0][0];
	
	//4.��������
	for (i=0;i<=2;i++)
	{
	   for (j=0;j<=3;j++)
	   if(a[i][j]>max)
	   {	
		 max=a[i][j];
		 row=i;
		 colum=j;
	   }
	}
	
	//5.�������
	printf("max=%d\n",max);
	printf("row=%d\n",row);
	printf("colum=%d\n",colum);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ����һ���ַ���  P125
һ����ʽ��void example6()
����˵����
		  char c[11]={'I','','a','m','','a','','b','o','y','.'};
		  int i;
����ֵ��  ����������
������ʽ��
ʱ�䣺    2012_11.20
���ߣ�    ��ΰ��
�������޸����ݣ�
==================================================================
*/
int example6_6()
{
	//6.��6.6  ���һ���ַ���  P125
	printf("6.��6.6  ���һ���ַ���  P125\n");
	
	//1.�����������
	char c[11]={'I',' ','a','m',' ','a',' ','b','o','y','.'};
	int i;
	
	//2.��������ֵ
	i=0;
	
	//3.��ȡ����

	//4.��������

	//5.�������
	for (i=0;i<11;i++)
	{
		printf("%c",c[i]);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ����һ������ͼ  p126
һ����ʽ��void example7()
����˵����char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
  int i;
  int j;

����ֵ��  ����������
������ʽ��
ʱ�䣺    2012_11.20
���ߣ�    ��ΰ��
�������޸����ݣ�
==================================================================
*/
int example6_7()
{
	//7.��6.7  ���һ������ͼ  p126
	printf("7.��6.7  ���һ������ͼ  p126\n");

	//1.�����������
	char diamond[][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};
	int i;
	int j;
	
	//2.��������ֵ
	i=0;
	j=0;
	
	//3.��ȡ����

	//4.��������  //5.�������
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			printf("%C",diamond[i][j]);
		}
		printf("\n");
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ�����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�  p134
һ����ʽ��void example8()
����˵����
		  char string[81];
		  int i;
		  int num;
		  int word;
		  char c;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_11.20
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include<string.h>
int example6_8()
{
	//8.��6.8  ����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�  p134
	printf("8.��6.8  ����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�  p134\n");

	//1.�����������
	char string[81];
	int i;
	int num;
	int word;
	char c;
	
	//2.��������ֵ
	i=0;
	num=0;
	word=0;
	c=0;
	
	//3.��ȡ����
	fflush(stdin);             //�������������������������ַ��������㻺�����ÿ����һ���ַ��������õĻس���������س�Ҳ�ᱻ�����ַ������ȥ��
	fflush(stdout);            
	printf("������һ���ַ�\n");//fflush(stdout);��Ҫ�����ļ��Ĳ�����
	gets(string);
	
	//4.��������
	for (i=0;(c=string[i])!='\0';i++)
		if (c==' ')
		{
			word=0;
		}
		else if(word==0)
		{
			word=1;
			num++;
		}
	
	//5.�������
	printf("There are %d words in this line.\n",num);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ�����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�  p134
һ����ʽ��void example8()
����˵����
		  char string[81];
		  int i;
		  int num;
		  int word;
		  char c;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_11.20
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include<string.h>
int example6_9()
{
	//9.��6.9  �������ַ�����Ҫ���ҳ����е������  136
	printf("9.��6.9  �������ַ�����Ҫ���ҳ����е������(����ʱҪ����)  136\n");

	//1.�����������
	char string[20];
	char str[3][20];
	int i;

	//2.��������ֵ


	//3.��ȡ����
	for (i=0;i<3;i++)
	{          
		gets(str[i]);
	}

	//4.��������
	if (strcmp(str[0],str[1])>0)
	{
		strcpy(string,str[0]);
	}
	else 
	{
		strcpy(string,str[1]);
	}
	if (strcmp(str[2],string)>0)
	{
		strcpy(string,str[2]);
	}

	//5.�������
	printf("\nThe largest string is : \n%s\n ",string);
	printf("\n");

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ�����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�  p134
һ����ʽ��void exercise1()
����˵����
			int s[100];
			int i;
			int x;
			double m;
			int n;
			int p;
����ֵ��  ����������
������ʽ��exercise1()
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include <math.h>
int exercise6_1()
{
	//1.ϰ��6.1	��ɸѡ����100֮�ڵ����� p138
	printf("1.ϰ��6.1	��ɸѡ����100֮�ڵ����� p138\n");

	//1.�����������
	int s[101];
	int i;
	int j;
	int n;

	//2.��������ֵ
	for (i=1;i<=100;i++)
	{
		s[i]=i;
	}
	s[0]=0;
	j=0;
	n=0;

	//3.��ȡ����
	
	//4.��������
	for (i=2;i<sqrt(100);i++)
	{
		for (j=i+1;j<=100;j++)
		{
			if (s[i]!=0&&s[j]!=0)
			{
				if (s[j]%s[i]==0)
				{
					s[j]=0;
				}
			}
		}
	}
	printf("\n");

	//5.�������
	for (i=2,n=0;i<=100;i++)
	{
		if (s[i]!=0)
		{
			printf("%5d",s[i]);
		}
		n++;
	}
	if (n==10)
	{
		printf("\n");
		n=0;
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ�����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�  p134
һ����ʽ��void exercise2()
����˵����
		  	int s[10];
			int i;
			int j;
			int x;
			int min;
����ֵ��  ����������
������ʽ��exercise2()
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
int exercise6_2()
{
	//2.ϰ��6.2	��ѡ�񷨶�10����������	p138
	printf("2.ϰ��6.2	��ѡ�񷨶�10����������	p138\n");

	//1.�����������
	int i;
	int j;
	int s[11];
	int min;
	int temp;
	char ch;

	//2.��������ֵ
	min=0;
	temp=0;

	//3.��ȡ����
	printf("������ʮ��������ֵ:\n");
	for (i=1;i<=10;i++)
	{
		printf("s[%d]=",i);
		scanf("%d",&s[i]);
		ch=getchar();
	}
	printf("\n");
	printf("The original numbers:\n");
	for (i=1;i<=10;i++)
	{
		printf("%5d",s[i]);
	}
	printf("\n");

	//4.��������
	for (i=1;i<=9;i++)
	{
		min=i;
		for (j=i+1;j<=10;j++)
		{
			if (s[min]>s[j])
			{
				min=j;
				temp=s[i];
				s[i]=s[min];
				s[min]=temp;
			}
		}
	}

	//5.�������
	printf("\nThe sorted numbers :\n");
	for (i=1;i<=10;i++)
	{
		printf("%5d",s[i]);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ��3*3�����Ͷ�ά����Խ���Ԫ��֮��
һ����ʽ��void exercise3()
����˵����
			int i;
			int j;
			int sum;
			int sz[3][3];
����ֵ��  ����������
������ʽ��exercise3()
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
int exercise6_3()
{
	//3.ϰ��6.3	��һ��3*3�����Ͷ�ά����Խ���Ԫ��֮��	P138
	printf("3.ϰ��6.3	��һ��3*3�����Ͷ�ά����Խ���Ԫ��֮��	P138\n");

	//1.�����������
	int i;
	int j;
	int sum;
	int sz[3][3];

	//2.��������ֵ
	sum=0;

	//3.��ȡ����
	printf("������һ��3*3ά��������\n");
	fflush(stdin);
	fflush(stdout);
	for (i=0;i<=2;i++)
	{
		for (j=0;j<=2;j++)
		{
			printf("sz[%d][%d]=",i,j);
			scanf ("%d",&sz[i][j]);
		}
		printf("\n");
	}

	//4.��������
	sum=sz[0][0]+sz[1][1]+sz[2][2];

	//5.�������
	printf("������Խ���Ԫ��֮��Ϊ%d",sum);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ�����źõ����飬Ҫ������һ�����󣬰�ԭ�����Ĺ��ɽ�������������
һ����ʽ��void exercise4()
����˵����
		  	int sz[N];
			int x;
			int i;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
int exercise6_4()
{
	//4.ϰ��6.4	��һ�����źõ����飬Ҫ������һ�����󣬰�ԭ�����Ĺ��ɽ�������������	p138
	printf("4.ϰ��6.4	��һ�����źõ����飬Ҫ������һ�����󣬰�ԭ�����Ĺ��ɽ�������������	p138\n");

	//1.�����������
	int sz[10];
	int x;
	int i;
	char ch;
	int temp_1;
	int temp_2;

	//2.��������ֵ
	x=0;
	temp_1=0;
	temp_2=0;

	//3.��ȡ����
	printf("�밴�����������һ����ʮ������������\n");
	for (i=1;i<=10;i++)
	{
		scanf("%d",&sz[i]);
		ch=getchar();
	}
	printf("��������һ������x=");
	scanf("%d",&x);

	//4.��������

	//5.�������
	if (sz[1]>sz[10])
	{
		for (i=2;i<=9;i++)
		{
			if (x<=sz[i-1]&&x>=sz[i])
			{
				printf("���������Ӧ����ԭ�����λ��Ϊ%d\n",i);
			}
		}
	}
	if (sz[1]<sz[10])
	{
		for (i=2;i<=9;i++)
		{
			if (x>=sz[i-1]&&x<=sz[i])
			{
				printf("���������Ӧ����ԭ�����λ��Ϊ%d\n",i);
			}
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ�������е�ֵ����������	p138
һ����ʽ��void exercise5()
����˵����
			int sz[N];
			int i;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#define F 10
int exercise6_5()
{
	//5.ϰ��6.5	��һ�������е�ֵ����������	p138
	printf("5.ϰ��6.5	��һ������%d���������е�ֵ����������	p138\n",F);

	//1.�����������
    int sz[F];							//һ����ʮ����������
	int i;
	int m;								//����ֵʱ�����м����

	//2.��������ֵ
	m=0;
	i=0;

	//3.��ȡ����
	printf("�밴�����������һ����10������������\n");
	for (i=0;i<F;i++)					//����һ����ʮ����������
	{
		scanf("%d",&sz[i]);
		getchar();
	}

	//4.��������
	for (i=0;i<(F/2);i++)				//***�����м�ֵ����ԳƵ�ֵ
	{
		m=sz[i];
		sz[i]=sz[F-1-i];
		sz[F-1-i]=F;
	}

	//5.�������
	printf("ԭ���鰴�������Ϊ��\n");
	for (i=0;i<F;i++)
	{
		printf("%5d",sz[i]);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
==================================================================
�������ܣ����ʮ�е����������	p138
һ����ʽ��void exercise6()
����˵����
		  int s[i][j];
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#define M  10
#define N  10
int exercise6_6()
{
	//6.ϰ��6.6 ���ʮ�е����������	p138
	printf("6.ϰ��6.6 ���ʮ�е����������	p138\n");

	//1.�����������
	int s[M][N];								
	int i;
	int j;

	//2.��������ֵ
	i=0;
	j=0;

	//3.��ȡ����
	for (i=0;i<M;i++)					//***����������ǵ�һ�кͶԽ��ߵ�Ԫ��
	{
		s[i][0]=1;
		s[i][i]=1;
	}													
	for (i=2;i<M;i++)					//������������������е�Ԫ��
	{	
		for (j=1;j<i;j++)
		{			
			s[i][j]=s[i-1][j]+s[i-1][j-1];
		}		
	}

	//4.��������

	//5.�������
	printf("���������ǰʮ�е���Ϊ��\n");
	for (i=0;i<M;i++)					//����������ǰʮ��ʮ�е���
	{
		for (j=0;j<=i;j++)
		{
			printf("%6d",s[i][j]);
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ�����һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ֿ�  p138
һ����ʽ��void exercise7()
����˵����
		  char string[81];
		  int i;
		  int num;
		  int word;
		  char c;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
��ע���ο��𰸣�����ѧ˼��Ӱ�쵼���㷨����---Ӧ�����ü��������˼�����⣬ע��������ѧ���ɵȷ����ҳ����ɣ���������Ϊ�㷨��
==================================================================
*/
#define M 4
#define N 5
int exercise6_7()
{
	//7.ϰ��6.8 �ҳ�һ����ά�����еİ��㣨����λ���ϵ�Ԫ���ڸ���������ڸ�������С����Ҳ����û�а��㡣	p138
	printf("8.ϰ��6.8 �ҳ�һ����ά�����еİ��㣨����λ���ϵ�Ԫ���ڸ���������ڸ�������С����Ҳ����û�а��㡣	p138\n");

	//1.�����������
	int s[M][N];						//����һ������								
	int max;							//���㴦�����ֵ
	int maxl;							//���㴦���б�
	int i;								//�б�
	int j;								//�б�
	int flag;							//���ⰰ�㴦

	//2.��������ֵ
	max=0;
	maxl=0;
	i=0;
	j=0;

	//3.��ȡ����
	printf("������һ��%d��%d�е�����\n\b",M,N);
	for(i=0;i<M;i++)					//***����һ��m��n�еĶ�ά����								
	{
		for (j=0;j<N;j++)
		{
			scanf("%d",&s[i][j]);		//***ע��˷���Ӧ��
		}
	}

	//4.��������	//5.�������
	for (i=0;i<=M-1;i++)
	{	
		max=s[i][1];
		maxl=0;
		for (j=0;j<=N-1;j++)			//���ҳ������ֵ
		{
			if (max<s[i][j])
			{
				max=s[i][j];
				maxl=j;
			}
			flag=1;						//�ȼ����ǰ��㣬��flagΪ1������
		}
		for (j=0;j<N;j++)				//�������ֵ���������н��бȽ�
		{
			if(max>s[i][maxl])
			{
				flag=0;
				continue;
			}
		}
		if (flag)						//�����ж�ѡ����
		{
			printf("s[%d][%d]=%d\n",i,maxl,max);
			break;
		}
		if (!flag)
		{
			printf("�ö�ά����İ��㲻���ڣ�\n");
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ����ħ����  p139
һ����ʽ��void exercise8()
����˵����
			int s[15][15];
			int i;
			int j;
			int k;
			int p;
			int n;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
int exercise6_8()
{
	//1.ϰ��6.1	���ħ���� p138
	printf("7.ϰ��6.7	���ħ���� p138\n");

	//1.�����������
	int s[15][15];
	int i;
	int j;
	int k;
	int p;
	int n;

	//2.��������ֵ
	i=0;
	j=0;
	k=0;
	p=1;
	n=0;

	//3.��ȡ����


	//4.��������
	while (p==1)
	{
		printf("Please enter n(n=1--15):");
		scanf("%d",&n);
		if ((n!=0)&&(n<=15)&&(n%2!=0))
		{
			p=0;
		}
	}
	for (i=0;i<n;i++)//ħ�����ʼ��
	{
		for (j=0;j<n;j++)
		{
			s[i][j]=0;
		}
	}
	j=n/2+1;
	s[i][j]=1;
	for (k=2;k<=n*n;k++)
	{
		i=i-1;
		j=j+1;
		if ((i<1)&&(i>n))
		{
			i=i+2;
			j=j-1;
		}
		else
		{
			if (i<1)
			{
				i=n;
			}
			if (j>n)
			{
				j=1;
			}
		}
		if (s[i][j]==0)
		{
			s[i][j]=k;
		}
		else
		{
			i=i+2;
			j=j-1;
			s[i][j]=k;
		}
	}

	//5.�������
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%5d",s[i][j]);
		}
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ����15�������������۰����ĳ���Ƿ���������  p139
һ����ʽ��void exercise9()
����˵����
		  	int s[15];
			int i;
			int j;
			int top;
			int bott;
			int flag;
			int sign;
			int loca;
			int number;
			int mid;
			char c;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#define N 15
int exercise6_9()
{
	//9.ϰ��6.9	��һ����15�������������۰����ĳ���Ƿ��������� p138
	printf("9.ϰ��6.9	��һ����15�������������۰����ĳ���Ƿ��������� p138\n");

	//1.�����������
	int s[15];
	int i;
	int j;
	int top;
	int bott;
	int flag;
	int sign;
	int loca;
	int number;
	int mid;
	char c;

	//2.��������ֵ
	top=0;
	bott=0;
	flag=1;
	loca=0;
	number=0;
	mid=0;

	//3.��ȡ����
	printf("enter data:\n");
	scanf("%d",&s[0]);
	i=1;
	while (i<N)
	{
		scanf("%d",&s[i]);
		if (s[i]>s[i-1])
		{
			i++;
		}
		else
		{
			printf("enter this data again:\n");
		}
	}
	printf("\n");
	printf("the data of %d:",N);
	for (i=0;i<N;i++)
	{
		printf("%5d",s[i]);
	}
	printf("\n");

	//4.��������	//5.�������
	while (flag)
	{
		printf("input number to look for :");
		scanf("%d",&number);
		sign=0;
		top=0;
		bott=N-1;
		if ((number<s[0])||(number>s[N-1]))
		{
			loca=-1;
		}
		while ((!sign)&&(top<=bott))
		{
			mid=(top+bott)/2;
			if (number==s[mid])
			{
				loca=mid;
				printf("has found %d,its position is %d\n",number,loca+1);
				sign=1;
			}
			else if (number<s[mid])
			{
				bott=mid-1;
			}
			else
			{
				top=mid+1;
			}
		}
		if (!sign||loca==-1)
		{
			printf("cannot find %d.\n",number);
			printf("continue or not(Y/N)?");
			scanf(" %c",&c);
			if (c=='N'||c=='n')
			{
				flag=0;
			}
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ�ͳ�Ƴ�һƪ������������Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ���  p138
һ����ʽ��void exercise10()
����˵����
		 	char text[3][80];
			int i;
			int j;
			int upp;
			int low;
			int dig;
			int spa;
			int oth;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include <string.h>
int exercise6_10()
{

	//10.ϰ��6.10	ͳ�Ƴ�һƪ������������Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ��� p138
	printf("10.ϰ��6.10	ͳ�Ƴ�һƪ������������Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ��� p138\n");

	//1.�����������
	char text[3][80];
	int i;
	int j;
	int upp;
	int low;
	int dig;
	int spa;
	int oth;

	//2.��������ֵ
	upp=0;
	low=0;
	dig=0;
	spa=0;
	oth=0;

	//3.��ȡ����
	for (i=0;i<3;i++)
	{
		printf("Please input line %d:\n",i+1);
		gets(text[i]);
		for (j=0;j<80&&text[i][j]!='\0';j++)
		{
			if (text[i][j]>='A'&&text[i][j]<='Z')
			{
				upp++;
			}
			else if (text[i][j]>='0'&&text[i][j]<='9')
			{
				dig++;
			}
			else if (text[i][j]==' ')
			{
				spa++;
			}
			else if (text[i][j]>='a'&&text[i][j]<='z')
			{
				low++;
			}
			else
			{
				oth++;
			}
		}
	}

	//4.��������


	//5.�������
	printf("\nupp:%d\n",upp);
	printf("low:%d\n",low);
	printf("dig:%d\n",dig);
	printf("spa:%d\n",spa);
	printf("oth:%d\n\n",oth);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ��������ͼ��	p138
һ����ʽ��void exercise11()
����˵����
			int i;
			int j;
			int k;
			char space=' ';
			char a[5]={'*','*','*','*','*',};
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include <string.h>
int exercise6_11()
{
	//11.ϰ��6.11 �������ͼ��	p138
	printf("11.ϰ��6.11	�������ͼ�� p138\n");

	//1.�����������
	int i;
	int j;
	int k;
	char space=' ';
	char a[5]={'*','*','*','*','*',};

	//2.��������ֵ
	i=0;
	j=0;
	k=0;

	//3.��ȡ����


	//4.��������	//5.�������
	for (i=0;i<5;i++)
	{
		printf("\n");
		printf("     ");
		for (j=1;j<=i;j++)
		{
			printf("%c",space);
		}
		for (k=0;k<5;k++)
		{
			printf("%c",a[k]);
		}
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ���������������ļ� p138
һ����ʽ��void exercise12()
����˵����
			int j;
			int n;
			char ch[80];
			char tran[80];
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include <string.h>
int exercise6_12()
{
	//12.ϰ��6.12	��һ���������������ļ� p138
	printf("12.ϰ��6.12	��һ���������������ļ� p138\n");
	
	//1.�����������
	int j;
	int n;
	char ch[80];
	char tran[80];

	//2.��������ֵ
	j=0;
	n=0;

	//3.��ȡ����
	printf("input cipher code :");
	gets(ch);
	printf("\ncipher code :%s",ch);

	//4.��������
	while (ch[j]!='\0')
	{
		if ((ch[j]>='A')&&(ch[j]<='Z'))
		{
			tran[j]=155-ch[j];
		}
		else if ((ch[j]>='a')&&(ch[j]<='z'))
		{
			tran[j]=219-ch[j];
		}
		else
		{
			tran[j]=ch[j];
		}
		j++;
	}

	//5.�������
	n=j;
	printf("\noriginal text :");
	for (j=0;j<n;j++)
	{
		putchar((tran[j]));
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
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ�	��һ�����򣬽������ַ�����������	 p138
һ����ʽ��void exercise13()
����˵����
			char s1[80];
			char s2[40];
			int i;
			int j;
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include <string.h>
int exercise6_13()
{
	//13.ϰ��6.13	��һ�����򣬽������ַ�����������	 p138
	printf("13.ϰ��6.13		��һ�����򣬽������ַ����������� p138\n");

	//1.�����������
	char s1[80];
	char s2[40];
	int i;
	int j;

	//2.��������ֵ
	i=0;
	j=0;

	//3.��ȡ����
	printf("input string1:");
	scanf("%s",s1);
	printf("input string2:");
	scanf("%s",s2);

	//4.��������
	while (s1[i]!='\0')
	{
		i++;
	}
	while (s2[j]!='\0')
	{
		s1[i++]=s2[j++];
	}
	s1[i]='\0';

	//5.�������
	printf("\nThe new string is :%s\n\n",s1);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ�����򣬽������ַ����Ƚ� p138
һ����ʽ��void exercise14()
����˵����
			int i;
			int resu;
			char s1[100];
			char s2[100];
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include <string.h>
int exercise6_14()
{
	//14.ϰ��6.14	 ��һ�����򣬽������ַ����Ƚ� p138
	printf("14.ϰ��6.14	 ��һ�����򣬽������ַ����Ƚ� p138\n");

	//1.�����������
	int i;
	int resu;
	char s1[100];
	char s2[100];

	//2.��������ֵ
	i=0;
	resu=0;

	//3.��ȡ����
	printf("Please input string1:" );
	gets(s1);
	printf("Please input string2:" );
	gets(s2);

	//4.��������
	while ((s1[i]==s2[i])&&(s1[i]!='0'))
	{
		i++;
	}
	if ((s1[i]=='\0')&&(s2[i]=='\0'))
	{
		resu=0;
	}
	else
	{
		resu=s1[i]-s2[i];
	}

	//5.�������
	printf("%d\n\n",resu);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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
===================================================================
�������ܣ���һ�����򣬽�һ�������Ƶ���һ��������	 p138
һ����ʽ��void exercise15()
����˵����
		  	int i;
			char s1[80];
			char s2[80];
����ֵ��  ����������
������ʽ��
ʱ�䣺	  2012_12.11
���ߣ�	  ��ΰ��
�������޸����ݣ�
==================================================================
*/
#include <string.h>
int exercise6_15()
{
	//1.ϰ��6.15	��һ�����򣬽�һ�������Ƶ���һ��������	 p138
	printf("15.ϰ��6.15		��һ�����򣬽�һ�������Ƶ���һ�������� p138\n");

	//1.�����������
	int i;
	char s1[80];
	char s2[80];

	//2.��������ֵ
	i=0;

	//3.��ȡ����
	printf("Please input string2:");
	scanf("%s",s2);

	//4.��������
	for (i=0;i<=strlen(s2);i++)
	{
		s1[i]=s2[i];
	}

	//5.�������
	printf("Out string2:%s\n",s1);

	//����ѭ������
start:
	printf("****************\n");
	printf("*1.�������˵���*\n");
	printf("*2.���ظ��˵���*\n");
	printf("*3.�˳���      *\n");
	printf("****************\n");
	printf("����������ѡ��");
	scanf("%d",&choose6);
	switch(choose6)
	{
		case 1:	system("cls");
				main ();
				break;

		case 2:	system("cls");
				number_6();
				break;

		case 3:	goto end;
				
		default:printf("���������Ƿ��������룿��y/n��\n");
				printf("��ѡ��");
				getchar();
				scanf("%c",&choos6);
				if (choos6=='y'||choos6=='Y')
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


  
 