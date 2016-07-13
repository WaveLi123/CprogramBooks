/*
**************************************************************************************************************************************************************
													1240069_李伟康_第五章
//时间:	2012_11.23_6:30
//1.例5.1	求1+2+3+.....+100（while 语句）  p97
//2.例5.2	求1+2+3+.....+100（do   while 语句）  p99
//3.例5.3（1）	while循环和do...while循环的比较  p100
//4.例5.3（2）	while循环和do...while循环的比较
//5.例5.4	求PAI的近似值  p101
//6.例5.5	求Fibonacci数列的前四十个数  p105
//7.例5.6	把100-200之间不能被3整除的数输出  p109
//8.例5.7	判断m是否为素数  p109
//9.例5.8	求100-200之间的全部素数  p110
//10.例5.9	译密码。（把某一字母变成其后的第四个字母）
//1.习题5.1	输入两个正整数m和n,求其最大公约数和最小公倍数  p113
//2.习题5.2	输入一行字符，分别统计出其中英文字母、空格、数字、和其他字符的个数  p113
//3.习题5.3	求sn=a+aa+aaa+aaaa+...+aa...a之值（其中a是一个数字，n表示a的位数，n由键盘输入）  p113
//4.习题5.4	求1！+2！+3！+...+20!  p113
//5.习题5.5	求k(k:1-100)+k^2(1-50)+1/k(1-10)  p113
//6.习题5.6	输出所有的水仙花数	p113
//7.习题5.7	编程序找出1000之内的所有的完数	p113
//8.习题5.8	有一个分数序列2/1+3/2+5/3+8/5+13/8...求出这个数列的前20项之和		p113
//9.习题5.9		一个球从100米的高度自由落下，每次落地后反弹回原高度的一 半，再落下，在反弹。求它在第十次落地时，共经过了多少米？第十次反弹多高？	p113
//10.习题5.10	猴子吃桃问题	p113
//11.习题5.11	用迭代法求x=a^(1/2)。要求前后两次求出的x的差的绝对值小于E-005  p113
//12.习题5.12	用牛顿迭代法求下面方程在1.5附近的根：2x^3-4x^2+3x-6=0	p113
//13.习题5.13	用二分法求下面方程在（-10,10）之间的根：2x^3-4x^2+3x-6=0	p113
//14.习题5.14	输出一下图案	p114
//15.习题5.15	找出三队赛手的名单	p114	
**************************************************************************************************************************************************************
*/


#include "head.h"
#include "forth.h"
#include <windows.h>
int system(const char *string);
int choose;//定义全局变量
int choos;//定义全局变量
int number_5()
{
start:
	//用户提示信息
	printf("☆欢迎进入《C程序设计教程》第五章！☆  \n");
	printf("************************************************************************\n");
	printf("*1. 例5.1求1+2+3+。。。+100(while 语句)  p97                           *\n");
	printf("*2. 例5.2求1+2+3+。。。+100(do   while 语句)  p99                      *\n");
	printf("*3. 例5.3(1)while循环和do...while循环的比较  p1                        *\n");
	printf("*4. 例5.3(2)	while循环和do...while循环的比较                        *\n");
	printf("*5. 例5.4求PAI的近似值  p101                                           *\n");
	printf("*6. 例5.5求Fibonacci数列的前四十个数  p105                             *\n");
	printf("*7. 例5.6把100-200之间不能被3整除的数输出  p109                        *\n");
	printf("*8. 例5.7判断m是否为素数  p109                                         *\n");
	printf("*9. 例5.8求100-200之间的全部素数  p110                                 *\n");
	printf("*10.例5.9译密码。(把某一字母变成其后的第四个字母)                      *\n");
	printf("*11.习题5.1输入两个正整数m和n,求其最大公约数和最小公倍数  p113         *\n");
	printf("*12.习题5.2输入一行字符，分别统计出其中                                *\n");
	printf("*   英文字母、空格、数字、和其他字符的个数  p113                       *\n");
	printf("*13.习题5.3求sn=a+aa+aaa+aaaa+...+aa...a之值                           *\n");
	printf("*   (其中a是一个数字，n表示a的位数，n由键盘输入)  p113                 *\n");
	printf("*14.习题5.4求1!+2!+3!+...+20!  p113                                    *\n");
	printf("*15.习题5.5求k(k:1-100)+k^2(1-50)+1/k(1-10)  p113                      *\n");
	printf("*16.习题5.6输出所有的水仙花数	p113                                   *\n");
	printf("*17.习题5.7编程序找出1000之内的所有的完数   p113                       *\n");
	printf("*18.习题5.8有一个分数序列2/1+3/2+5/3+8/5+13/8...                       *\n");
	printf("*   求出这个数列的前20项之和        p113                               *\n");
	printf("*19.习题5.9一个球从100米的高度自由落下，每次落地后                     *\n");
	printf("*   反弹回原高度的一 半，再落下，在反弹                                *\n");
	printf("*   求它在第十次落地时共经过了多少米？第十次反弹多高                   *\n");
	printf("*20.习题5.10猴子吃桃问题    p113                                       *\n");
	printf("*21.习题5.11用迭代法求x=a^(1/2)。                                      *\n");
	printf("*   要求前后两次求出的x的差的绝对值小于E-005  p113                     *\n");
	printf("*22.习题5.12用牛顿迭代法求下面方程在1.5附近的根:                       *\n");
	printf("*   2x^3-4x^2+3x-6=0	p113                                           *\n");
	printf("*23.习题5.13用二分法求下面方程在(-10,10)之间的根:                      *\n");
	printf("*   2x^3-4x^2+3x-6=0	p113                                           *\n");
	printf("*24.习题5.14输出一下图案    p114                                       *\n");
	printf("*25.习题5.15找出三队赛手的名单  p114                                   *\n");
	printf("*26.返回主菜单。                                                       *\n");
	printf("*27.退出。                                                             *\n");
	printf("************************************************************************\n");
	printf("请输入您的选择：");
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
		
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	求1+2+3+。。。+100（while 语句）
一般形式：	example1()
参数说明：	int i;
			int sum;		
返 回 值：	整数，100个数的和
调用形式：	example1()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_1()
{
	//1.例5.1  求1+2+3+。。。+100（while 语句）  p97
	printf("1.例5.1  求1+2+3+。。。+100（while 语句）  p97\n");

	//1.定义变量类型
	int i;
	int sum;

	//2.变量赋初值
	i=1;
	sum=0;

	//3.获取数据

	//4.处理数据
	while (i<=100)
	{
		sum=sum+i;
		i++;
	}
	
	//5.输出数据
	printf("%d\n",sum);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	求1+2+3+。。。+100（do   while 语句）
一般形式：	example2()
参数说明：	int i;
			int sum;			
返 回 值：	整数，100个数的和
调用形式：	example2()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_2()
{
	//2.例5.2  求1+2+3+。。。+100（do   while 语句）  p99
	printf("2.例5.2  求1+2+3+。。。+100（do   while 语句）  p99\n");

	//1.定义变量类型
	int i;
	int sum;

	//2.变量赋初值
	i=1;
	sum=0;

	//3.获取数据


	//4.处理数据
	do 
	{
		sum=sum+i;
		i++;
	}
	while(i<=100);

	//5.输出数据
	printf("%d\n",sum);
	printf("\n");


	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	while循环和do...while循环的比较  p100
一般形式：	example3_1()
参数说明：	int sum;
			int i;		
返 回 值：	整数
调用形式：	example3_1()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_3_1()
{
	//3.例5.3（1） while循环和do...while循环的比较  p100
	printf("3.例5.3（1） while循环和do...while循环的比较  p100\n");

	//1.定义变量类型
	int sum;
	int i;

	//2.变量赋初值
	sum=0;
	i=0;

	//3.获取数据
	printf("请输入i的值\n");
	scanf("%d",&i);

	//4.处理数据
	while (i<=10)
	{
		sum=sum+i;
		i++;
	}

	//5.输出数据
	printf("sum=%d\n",sum);
	printf("\n");


	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	while循环和do...while循环的比较  p100
一般形式：	example3_2()
参数说明：	int sum;
			int i;			
返 回 值：	整数
调用形式：	example3_2()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_3_2()
{
	//3.例5.3（2） while循环和do...while循环的比较  p100
	printf("3.例5.3（1） while循环和do...while循环的比较  p100\n");

	//1.定义变量类型
	int sum;
	int i;
	
	//2.变量赋初值
	sum=0;
	i=0;

	//3.获取数据
	printf("请输入i的值\n");
	scanf("%d",&i);

	//4.处理数据
	do
	{
		sum=sum+i;
		i++;
	}
	while (i<=10);

	//5.输出数据
	printf("sum=%d\n",sum);
	printf("\n");


	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	求PAI的近似值
一般形式：	example4()
参数说明：  int s;
			float n;
			float t;
			float pi;			
返 回 值：	整数
调用形式：	example4()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#include <math.h>
int example5_4()
{
	//4.例5.4  求PAI的近似值  p101
	printf("4.例5.4  求PAI的近似值  p101\n");

	//1.定义变量类型
	int s;
	float n;
	float t;
	float pi;

	//2.变量赋初值
	s=1;
	t=1.0;
	pi=0.0;
	n=1.0;

	//3.获取数据

	//4.处理数据
	while (fabs(t)>1e-6)
	{
		pi=pi+t;
		n=n+2;
		s=-s;
		t=s/n;
	}
	pi=pi*4;

	//5.输出数据
	printf("pi=%10.6f\n",pi);
	printf("\n");


	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	求Fibonacci数列的前四十个数
一般形式：	example5()
参数说明：  long int f1;
			long int f2;
			int i;
返 回 值：	整数
调用形式：	example5()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_5()
{
	//5.例5.5  求Fibonacci数列的前四十个数  p105
	printf("5.例5.5  求Fibonacci数列的前四十个数  p105\n");

	//1.定义变量类型
	long int f1;
	long int f2;
	int i;
	
	//2.变量赋初值
	f1=1;
	f2=1;

	//3.获取数据  //4.处理数据	//5.输出数据
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

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	把100-200之间不能被3整除的数输出
一般形式：	example6()
参数说明：	int n;			
返 回 值：	整数
调用形式：	example6()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_6()
{
	//6.例5.6  把100-200之间不能被3整除的数输出  p109	
	printf("6.例5.6  把100-200之间不能被3整除的数输出  p109\n");
	
	//1.定义变量类型
	int n;
	//2.变量赋初值 //3.获取数据	//4.处理数据 //5.输出数据
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

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	 判断m是否为素数 
一般形式：		example7()
参数说明：		int i;
				int m;
				int k;
返 回 值：	整数
调用形式：	example7()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#include <math.h>
int example5_7()
{
	//7.例5.7  判断m是否为素数  p109
	printf("7.例5.7  判断m是否为素数  p109\n");
	
	//1.定义变量类型
	int i;
	int m;
	double k;

	//2.变量赋初值
	m=0;
	k=0.0;

	//3.获取数据
	printf("Please enter an integer number:");
	scanf("%d",&m);

	//4.处理数据
	k=sqrt(m);
	for (i=2;i<=k;i++)
	{
		if (m%i==0)
			break;
	}

	//5.输出数据
	if (i>k)
	{
		printf("%d is a prime number.\n",m);
	}
	else
	{
		printf("%d is not a prime number.\n",m);
	}
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	求100-200之间的全部素数
一般形式：	example8()
参数说明：	int m;
			int n;
			int i;
			int k;		
返 回 值：	整数
调用形式：	example8()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_8()
{
	//8.例5.8  求100-200之间的全部素数  p110
	printf("8.例5.8  求100-200之间的全部素数  p110\n");

	//1.定义变量类型
	int m;
	int n;
	int i;
	double k;

	//2.变量赋初值
	n=0;
	k=0;
	i=0;
	
	//3.获取数据

	//4.处理数据

	//5.输出数据
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


	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	译密码
一般形式：	example9()
参数说明：	char c			
返 回 值：	整数
调用形式：	example9()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int example5_9()
{
	//9.例5.9  译密码。（把某一字母变成其后的第四个字母）
	printf("9.例5.9  译密码。（把某一字母变成其后的第四个字母）\n");

	//1.定义变量类型
	char c;

	//2.变量赋初值

	//3.获取数据
	
	//4.处理数据

	//5.输出数据
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

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	输入两个正整数m和n,求其最大公约数和最小公倍数
一般形式：	exercise1()
参数说明：	int m;
			int n;
			int d;
			int i;			
返 回 值：	整数
调用形式：	exercise1()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_1()
{
	//1.习题5.1  输入两个正整数m和n,求其最大公约数和最小公倍数  p113
	printf("1.习题5.1  输入两个正整数m和n,求其最大公约数和最小公倍数  p113\n");
	
	//1.定义变量类型
	int m;
	int n;
	int d;
	int i;
	
	//2.变量赋初值
	m=0;
	n=0;
	i=0;
	d=0;
	
	//3.获取数据
	printf("请输入正整数m的值:");
	scanf("%d",&m);
	printf("请输入正整数n的值:");
	scanf("%d",&n);

	//4.处理数据
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

	//5.输出数据
	printf("两数(m,n)的最大公约数为");
	printf("%d",m);
	printf("\n");
	printf("两数(m,n)的最小公倍数为");
	printf("%d",d);
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	 输入一行字符，分别统计出其中英文字母、空格、数字、和其他字符的个数
一般形式：	exercise2()
参数说明：		int a;
				int b;
				int c;
				int d;
				char e;			 
返 回 值：	整数
调用形式：	exercise2()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_2()
{
	//2.习题5.2  输入一行字符，分别统计出其中英文字母、空格、数字、和其他字符的个数  p113
	printf("2.习题5.2  输入一行字符，分别统计出其中英文字母、空格、数字、和其他字符的个数  p113\n");

	//1.定义变量类型
	int a;
	int b;
	int c;
	int d;
	char e;

	//2.变量赋初值
	a=0;
	b=0;
	c=0;
	d=0;

	//3.获取数据
	fflush(stdin);
	fflush(stdout);
	printf("请输入一行字符:");

	//4.处理数据
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

	//5.输出数据
	printf("这行字符的英文字母数为");
	printf("%d\n",a);
	printf("这行字符的空格数为");
	printf("%d\n",b);
	printf("这行字符的数字数为");
	printf("%d\n",c);
	printf("这行字符的其他字符数为");
	printf("%d\n",d);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	求sn=a+aa+aaa+aaaa+...+aa...a之值（其中a是一个数字，n表示a的位数，n由键盘输入）
一般形式：	exercise3()
参数说明：		int n;
				int a;
				int i;
				int s;			
返 回 值：	整数
调用形式：	exercise3()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_3()
{
	//3.习题5.3  求sn=a+aa+aaa+aaaa+...+aa...a之值（其中a是一个数字，n表示a的位数，n由键盘输入）  p113
	printf("3.习题5.3  求sn=a+aa+aaa+aaaa+...+aa...a之值（其中a是一个数字，n表示a的位数，n由键盘输入）  p113\n");

	//1.定义变量类型
	int n;
	int a;
	int i;
	int s;
	int m;

	//2.变量赋初值
	n=0;
	a=0;
	s=0;
	m=0;

	//3.获取数据
	printf("请输入数a=");
	scanf("%d",&a);
	printf("请输入数n=");
	scanf("%d",&n);

	//4.处理数据
	for (i=1;i<=n;i++)
	{
		m=(10*m)+a;
		s=s+m;
	}

	//5.输出数据
	printf("该式的值为");
	printf("%d",s);
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	求1！+2！+3！+...+20!  
一般形式：	exercise4()
参数说明：	int s;
			int d;
			int i;				
返 回 值：	整数
调用形式：	exercise4()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_4()
{
	//4.习题5.4  求1！+2！+3！+...+20!  p113
	printf("4.习题5.4  求1！+2！+3！+...+20!  p113\n");

	//1.定义变量类型
	double s;
	double d;
	int i;		

	//2.变量赋初值
	s=0.0;
	d=1.0;	

	//3.获取数据

	//4.处理数据
	for (i=1;i<=20;i++)
	{
		d=i*d;				
		s=d+s;
	}

	//5.输出数据
	printf("%e",s);
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	求k(k:1-100)+k^2(1-50)+1/k(1-10)
一般形式：	exercise5()
参数说明：	int s;
			int s1;
			int s2;
			int s3;
			int k1;
			int k2;
			int k3;			
返 回 值：	整数
调用形式：	exercise5()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_5()
{
	//5.习题5.5  求k(k:1-100)+k^2(1-50)+1/k(1-10)  p113
	printf("5.习题5.5  求k(k:1-100)+k^2(1-50)+1/k(1-10)  p113\n");
	
	//1.定义变量类型
	double s;
	double s1;
	double s2;
	double s3;
	int k1;
	int k2;
	int k3;

	//2.变量赋初值
	s=0.0;
	s1=0.0;
	s2=0.0;
	s3=0.0;

	//3.获取数据

	//4.处理数据
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
	//5.输出数据
	printf("%f",s);
	printf("\n");
	printf("\n");
	
	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	输出所有的水仙花数
一般形式：	exercise6()
参数说明：	int d1;
			int d2;
			int d3;
			int i;
			int n;
			int k;			
返 回 值：	整数
调用形式：	exercise6()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_6()
{
	//6.习题5.6		输出所有的水仙花数	p113
	printf("6.习题5.6		输出所有的水仙花数	p113\n");
	
	//1.定义变量类型
	int d1;
	int d2;
	int d3;
	int i;
	int n;
	int k;

	//2.变量赋初值
	d1=0;
	d2=0;
	d3=0;
	i=0;
	n=0;
	k=0;

	//3.获取数据

	//4.处理数据

	//5.输出数据
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

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	编程序找出1000之内的所有的完数
一般形式：	exercise7()
参数说明：	int i;
			int m;
			int d;			
返 回 值：	整数
调用形式：	exercise7()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#define N 1001
int exercise5_7()
{
	//7.习题5.7		编程序找出1000之内的所有的完数	p113
	printf("7.习题5.7		编程序找出1000之内的所有的完数	p113\n");


	//1.定义变量
	int i;
	int j;
	int a[N]={0};
	int sum;
	int k;

	//2.赋初值
	i=6;
	k=0;
	j=0;
	sum=0;

	//3.获取数据

	//4.处理数据
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
			printf("%5d：its factors are ",sum);
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

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	有一个分数序列2/1+3/2+5/3+8/5+13/8...求出这个数列的前20项之和
一般形式：	exercise8()
参数说明：	int m;
			int n;
			int i;
			int b;
			double d;
			double s;			
返 回 值：	整数
调用形式：	exercise8()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_8()
{
	//8.习题5.8		有一个分数序列2/1+3/2+5/3+8/5+13/8...求出这个数列的前20项之和		p113
	printf("8.习题5.8		有一个分数序列2/1+3/2+5/3+8/5+13/8...求出这个数列的前20项之和		p113\n");

	//1.定义变量类型
	float m;
	float n;
	float i;
	float b;
	double d;
	double s;

	//2.变量赋初值
	m=1;
	n=2;
	i=0;
	b=0;
	d=0;
	s=0;

	//3.获取数据

	//4.处理数据
	for (i=1;i<=20;i++)
	{
		d=n/m;
		s=d+s;
		b=n;
		n=m+b;
		m=b;
	}

	//5.输出数据
	printf("该式之和为：");
	printf("%f",s);
	printf("\n");
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	一个球从100米的高度自由落下，每次落地后反弹回原高度的一 半，再落下，在反弹。求它在第十次落地时，共经过了多少米？第十次反弹多高？
一般形式：	exercise9()
参数说明：	int H;
			int h;
			int s;
			int i;			
返 回 值：	整数
调用形式：	exercise9()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_9()
{
	//9.习题5.9		一个球从100米的高度自由落下，每次落地后反弹回原高度的一 半，再落下，在反弹。求它在第十次落地时，共经过了多少米？第十次反弹多高？	p113
	printf("9.习题5.9	一个球从100米的高度自由落下，每次落地后反弹回原高度的一 半，再落下，在反弹。求它在第十次落地时，共经过了多少米？第十次反弹多高？	p113\n");

	//1.定义变量类型
	float H;
	float s;
	float h;
	int i;

	//2.变量赋初值
	H=100.0;
	i=0;
	s=100.0;
	h=0.0;

	//3.获取数据

	//4.处理数据
	for (i=2;i<=10;i++)
	{
		H=H/2;
		s=s+2*H;
	}
	h=H/2;

	//5.输出数据
	printf("共经过的路程为：");
	printf("%f\n",s);
	printf("第十次反弹的高度为：");
	printf("%f\n",h);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	猴子吃桃问题
一般形式：	exercise10()
参数说明：	int a;
			int d;
			int i;				
返 回 值：	整数
调用形式：	exercise10()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_10()
{
	//10.习题5.10	猴子吃桃问题	p113
	printf("10.习题5.10	猴子吃桃问题。	p113\n");		

	//1.定义变量类型
	int d1;
	int d2;
	int i;

	//2.变量赋初值		
	d1=0;
	d2=1;

	//3.获取数据

	//4.处理数据
	for (i=10;i>1;i--)
	{
		d1=2*(d2+1);
		d2=d1;
	}

	//5.输出数据
	printf("第一天共摘桃子的个数为：");
	printf("%d\n",d1);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
	
//算法错误（迭代法出错）


/*
===============================================================================
函数功能:	用迭代法求x=a^(1/2)。要求前后两次求出的x的差的绝对值小于E-005 
一般形式：	exercise11()
参数说明：		float x0;
				float x1;
				float a;		 
返 回 值：	整数
调用形式：	exercise11()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#include <math.h>
int exercise5_11()
{
	//11.习题5.11	用迭代法求x=a^(1/2)。要求前后两次求出的x的差的绝对值小于E-005  p113
	printf("11.习题5.11	用迭代法求x=a^(1/2)。要求前后两次求出的x的差的绝对值小于E-005  p113\n");

	//1.定义变量类型
	float x0;
	float x1;
	float a;
	float b;

	//2.变量赋初值
	x0=0.0;
	x1=0.0;
	b=0.0;
	a=0.0;

	//3.获取数据
	printf("请输入一个非负数a=");
	scanf("%f",&a);

	//4.处理数据
	x0=a/2;
	do
	{			
		x1=(x0+a/x0)/2;
		b=x0;
		x0=x1;
	}
	while (fabs(b-x0)>1e-005);

	//5.输出数据
	printf("a的平方根=%f\n",x0);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	用牛顿迭代法求下面方程在1.5附近的根：2x^3-4x^2+3x-6=0
一般形式：	exercise12()
参数说明：	float x0;
			float x1;
			float m;
			float f;
			float f1;
返 回 值：	整数
调用形式：	exercise12()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
#include <math.h>
int exercise5_12()
{
	//12.习题5.12	用牛顿迭代法求下面方程在1.5附近的根：2x^3-4x^2+3x-6=0	p113
	printf("12.习题5.12	用牛顿迭代法求下面方程在1.5附近的根：2x^3-4x^2+3x-6=0	p113\n");

	//1.定义变量类型
	float x0;
	float x1;
	double m;
	float f;
	float f1;

	//2.变量赋初值
	x1=1.5;
	x0=0.0;
	m=1.0;

	//3.获取数据

	//4.处理数据
	while (m>=1e-6)
	{	
		x0=x1;
		f=2*x0*x0*x0-4*x0*x0+3*x0-6;
		f1=6*x0*x0-8*x0+3;
		x1=x0-f/f1;			
		m=fabs(x1-x0);
	}

	//5.输出数据
	printf("该方程的根=%f\n",x0);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	用二分法求下面方程在（-10,10）之间的根：2x^3-4x^2+3x-6=0	p113
一般形式：	exercise13()
参数说明：
			float a;
			float b;
			float c;
			float d;
			float m;
返 回 值：	整数
调用形式：	exercise13()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_13()
{
	//13.习题5.13	用二分法求下面方程在（-10,10）之间的根：2x^3-4x^2+3x-6=0	p113
	printf("13.习题5.13	用二分法求下面方程在（-10,10）之间的根：2x^3-4x^2+3x-6=0	p113\n");

	//1.定义变量类型
	float a;
	float b;
	float c;
	float d;
	float m;

	//2.变量赋初值
	m=0.0;
	c=0.0;
	d=0.0;
	a=-10.0;
	b=10.0;

	//3.获取数据

	//4.处理数据
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
			printf("该方程的根=%f\n",c);
		}
		d=b-a;
	}
	while (d>=1e-6);
	//5.输出数据
	printf("该方程的根=%f\n",c);
	printf("\n");

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	输出以下图案
一般形式：	exercise14()
参数说明：	int m;
			int n;
			int i;
返 回 值：	整数
调用形式：	exercise14()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_14()
{
	//14.习题5.14	输出一下图案	p114
	printf("14.习题5.14	输出一下图案	p114\n");

	//1.定义变量类型
	int m;
	int n;
	int i;

	//2.变量赋初值

	//3.获取数据

	//4.处理数据	//5.输出数据
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

	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
函数功能:	找出三队赛手的名单
一般形式：	exercise15()
参数说明：
			char i;
			char j;
			char k;
返 回 值：	整数
调用形式：	exercise15()
Date		Name	Create/Correct
2012.11.21	jkd		create
===============================================================================
*/
int exercise5_15()
{
	//15.习题5.15	找出三队赛手的名单	p114
	printf("15.习题5.15	找出三队赛手的名单	p114\n");

	//1.定义变量类型
	char A;
	char B;
	char C;

	//2.变量赋初值
	A=0;
	B=0;
	C=0;

	//3.获取数据

	//4.处理数据	//5.输出数据
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
							printf("A与%c对决\n",A);
							printf("B与%c对决\n",B);
							printf("C与%c对决\n",C);
						}
					}
				}
			}
		}
	}


	//构造循环界面
start:
	printf("****************\n");
	printf("*1.返回主菜单。*\n");
	printf("*2.返回根菜单。*\n");
	printf("*3.退出。      *\n");
	printf("****************\n");
	printf("请输入您的选择：");
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
				
		default:printf("输入有误，是否重新输入？（y/n）\n");
				printf("请选择：");
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
