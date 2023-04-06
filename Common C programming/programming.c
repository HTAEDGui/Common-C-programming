#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
//#include<conio.h>
//main()
//{
//    int i, x;
//    int a[11] = { 20, 11, 8, 7, 5, 3, 0, -2, -5, -11 };
//    printf("原数组:");
//    for (i = 0; i <= 9; i++)
//        printf("%3d", a[i]);
//    printf("\n");
//    scanf("%d",&x);
//    for (i = 9; i >= 0; i--)
//        if (x > a[i])
//            a[i + 1] = a[i];
//        else
//        {
//            a[i + 1] = x;
//            break;
//        }
//    if (i == -1)
//        a[0] = x;
//    for (i = 0; i <= 10; i++)
//        printf("%3d", a[i]);
//}

/*加入一个数不改变顺序*/

//int main() {
//	int i, j = 5, x;
//
//	while (j--)
//	{
//		int a[11] = { 20,18,16,14,13,10,8,6,4,2 };// 已排序数组
//		//输出原数组
//		printf("原数组为：");
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//		// 输入待插入的数
//		printf("输入待插入的数：");
//		scanf("%d", &x);
//		// 将x插入到已排序数组中,“关键语句”
//
//		i = 9;
//		while (i >= 0 && a[i] < x)
//		{
//			a[i + 1] = a[i];
//			i--;
//		}
//		a[i + 1] = x;
//
//		// 输出插入后的数组
//		printf("插入后的数组为：");
//		for (i = 0; i < 11; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n\n");
//	}
//
//	return 0;
//}

//void main()
//{
//	int a[11] = { 20,18,16,14,13,10,8,5,2,0, };
//	int i, x = 0;
//	printf("原数组为：");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d", a[i]);
//	}
//	printf("输入一个数：");
//	scanf("%d", &x);
//	for (i = 10; i >= 0; i--)
//	{
//		if (x <= a[i - 1])
//		{
//			a[i] = x;
//			break;
//		}
//		else
//		{
//			a[i] = a[i - 1];
//		}
//	}
//	printf("插入后数组为：");
//	for (i = 0; i < 11; i++)
//	{
//		{
//			printf("%3d", a[i]);
//		}
//	}
//}

//void main()
//{
//	int a = 0, b = 0, c = 0;
//	char st[20],*p=st;
//	printf("输入一行字符\n");
//	gets(p);
//	while (*p != '\0')
//	{
//		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
//			a++;
//		else if (*p >= '0' && *p <= '9')
//			b++;
//		else c++;
//		p++;
//	}
//	printf("字母：%d个\n数字%d个\n其他%d个\n", a, b, c);
//}

/*把一串字符逆序存放*/
//
//main()
//{
//    int i, n, temp;char a[50];
//    gets(a);
//    n = strlen(a);
//    for (i = 0;i<n/2 ; i++)
//    {
//        temp = a[i];
//        a[i] = a[n - i - 1];
//        a[n - i - 1] = temp;
//    }
//    puts(a);
//}
//
//void main()
//{
//	float a = -.18;
//	float b = -.e5;
//	float c = -.18;
//	float d = -.18;
//}
//void main()
//{
//	char s1[10] = "12";
//	char s2[10] = "123456";
//	printf("%d", strlen(strcpy(s1, s2)));
//}
//
//float score[10][3] = {{22,23,24}, { 32,43,54 }, { 32,13,54 }, { 22,33,14 }, { 22,36,45 }, { 72,23,14 }, { 42,39,46 }, { 32,34,43 }, { 22,43,74 }, { 25,37,40 }};
//void main()
//{
//	/*int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		printf("\n\nInput the %d student's 3 scores:", i + 1);
//		for (j = 0; j < 3; j++)
//			scanf("%f", &score[i][j]);
//	}*/
//	averstudent();
//}
//
//averstudent()
//{
//	int i, j;
//	float s, t, averstu[10], orderave[10];
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0, s = 0; j < 3; j++)
//			s += score[i][j];
//		averstu[i] = s / 3;
//		orderave[i] = s / 3;
//	}
//	for (i = 0; i < 9; i++)
//		for (j = 0; j < 9 - i; j++)
//			if (orderave[j] < orderave[j + 1])
//			{
//				t = orderave[j];
//				orderave[j] = orderave[j + 1];
//				orderave[j + 1] = t;
//			}
//	printf("\nThe averages order is:\n");
//	for (i = 0; i < 10; i++)
//		printf("%.2f\t", orderave[i]);
//}

/*编写程序, 输入10个学生3门课的成绩, 计算每个学生的平均成绩,按平均成绩降序排列并打印出结果。*/
//
//void f(float s[])
//{
//	int i, j;
//	float temp;
//	for ( i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9 - i; j++)
//		{
//			if (s[j]<s[j+1])
//			{
//				temp = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = temp;
//			}
//		}
//	}
//	printf("平均成绩排序为：\n");
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%.2f\t", s[i]);
//	}
//}
//void main()
//{
//	struct st
//	{
//		float s1;
//		float s2;
//		float s3;
//	}st[10];
//	float s[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("输入第%d位学生的三科成绩：", i + 1);
//		scanf("%f%f%f", &st[i].s1, &st[i].s2, &st[i].s3);
//		s[i] = (st[i].s1 + st[i].s2 + st[i].s3) / 3;
//	}
//	f(s);
//}
//strlen的用法
//void main()
//{
//	char s[10] = { '1', '1', '1', '1', '1','1', '1','\0','1','\0' };
//	int d = strlen(s);
//	printf("%d", d);
//}

//main()
//{
//	int a = (a = 3 * 4, a * 4, a + 15);
//	printf("%d\n", a);
//}

/*利用指针实现数组逆序*/
//
//main()
//{
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 }, b[10], i;
//	int* p = b;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", a[i]);
//	}
//	printf("\n");
//	for (i = 9; i >= 0; i--, p++)
//	{
//		*p = a[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d  ", b[i]);
//	}
//	printf("\n");
//}

/*由1到9组成的三个数 X, YZ 编程计算出 XXXX + YYYY + ZZZZ = YXXXz ，输出 X, YZ ，并输出次算术式。 */
//
//int f1(int x)
//{
//	return x + 10 * x + 100 * x + 1000 * x;
//}
//int f2(int x, int y, int z)
//{
//	return z + 10 * x + 100 * x + 1000 * x + 10000 * y;
//}
//int f3(int x, int y, int z)
//{
//	return f1(x) + f1(y) + f1(z) == f2(x, y, z);
//}
//main()
//{
//	int i, j, k, a = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			for (k = 1; k < 10; k++)
//			{
//				a++;
//				if (f3(i, j, k))
//				{
//					printf("%d\n", a);
//					printf("当X=%d,Y=%d,Z=%d时\n", i, j, k);
//					printf("%d+%d+%d=%d", f1(i), f1(j), f1(k), f2(i, j, k));
//				}
//			}
//		}
//	}
//}

/*在海军节开幕式上，有 A 、 B 、 C 三艘军舰要同时开始鸣放礼炮各21响。
已知 A 舰每隔5秒放一次， B 舰每隔6秒放一次， C 舰每隔7秒放一次，假设
各炮手对时间的掌握非常准确，请编程计算观众总共可以听到几次礼炮声。*/
//
//main()
//{
//	int t, n = 0;
//	for (t = 0; t <= 7 * 20; t++)
//	{
//		if ((t % 5 == 0) && (t <= 5 * 20))
//		{
//			n++;
//		}
//		else if ((t % 6 == 0) && (t <= 6 * 20))
//		{
//			n++;
//		}
//		else if ((t % 7 == 0))
//		{
//			n++;
//		}
//	}
//	printf("礼炮响%d次\n", n);
//}

/*求一元二次方程的值*/
//
//main()
//{
//	float a, b, c, d, x1, x2;
//	printf("输入abc三个值\n");
//	scanf("%f%f%f", &a, &b, &c);
//	if (fabs(a) <= 1e-6)
//	{
//		printf("a=0不是一元二次方程\n");
//	}
//	else
//	{
//		d = b * b - 4 * a * c;
//		if (fabs(d) < 1e-6)
//		{
//			x1 = x2 = (-b) / (2 * a);
//			printf("x1=x2=%f\n", x1);
//		}
//		else if (d > 1e-6)
//		{
//			x1 = (-b + sqrt(d)) / (2 * a);
//			x2 = (b + sqrt(d)) / (2 * a);
//			printf("x1=%f,x2=%f\n", x1, x2);
//		}
//		else
//		{
//			printf("没有根\n");
//		}
//	}
//}

/*输入1000内的自然数判断是不是“自守数”：这个数的平方，末尾与这个数相等*/

//main()
//{
//	int num = 0, div = 0;
//	//printf("输入一个数:");
//	//scanf("%d", &num);
//	for (num = 0; num <= 1000; num++)
//	{
//		if (num < 10)div = 10;
//		else if (num < 100) div = 100;
//		else if (num < 1000)div = 1000;
//		if (num * num % div == num)
//		{
//			printf("%d是自守数\n", num);
//		}
//		else
//		{
//			printf("%d不是自守数\n", num);
//		}
//	}
//}

/*辗转相除法：求两个数的最大公约数和最小公倍数*/
/*定义：最大公约数 * 最小公倍数 = 两数之积*/

//main()
//{
//	int m = 0, n = 0, r = 0, p;
//	while (1)
//	{
//		printf("输入两个正整数mn:");
//		scanf("%d%d", &m, &n);
//		p = m * n;
//		while (n)
//		{
//			r = m % n;
//			m = n;
//			n = r;
//		}
//		printf("最大公约数是%d\n", m);
//		printf("最小公倍数是%d\n", p / m);
//	}
//}

/*更相减损术：求两个数的最大公约数*/

//main()
//{
//	int m = 0, n = 0;
//
//	printf("输入两个正整数mn:");
//	scanf("%d%d", &m, &n);
//	while (m != n)
//	{
//		if (m > n)
//		{
//			m = m - n;
//		}
//		else if (m < n)
//		{
//			n = n - m;
//		}
//
//	}
//	printf("最大公约数是%d\n", m);
//}

/*百元买鸡:鸡翁一，值钱五;鸡母一，值钱三;鸡雏三，值钱一。百钱买百鸡，问鸡翁，鸡母和鸡雏个几何？*/

//main()
//{
//	int i, j, k, sum;
//	for ( i = 0; i <= 100/5; i++)
//	{
//		for (j = 0; j < 100 / 3; j++)
//		{
//			for ( k = 0; k < 100*3; k+=3)
//			{
//				if (i * 5 + j * 3 + k / 3 == 100)
//				{
//					printf("鸡翁%d,鸡母%d,鸡雏%d\n", i, j, k);
//				}
//			}
//		}
//	}
//}

//main()
//{
//	long y = -43456;
//	printf("%-8ld\n", y);
//	printf("%-08ld\n", y);
//	printf("%010ld\n", y);
//}

//void main()
//{
//	char p1[10] = "abc", * p2 = "ABC", str[50] = "xyz";
//	strcpy(str + 3, strcat(p1, p2));
//	printf("%s\n", str);
//}

/*将一个正整数分解质因数。 例如： 输入 90,打印出 90=2*3*3*5。*/

//main()
//{
//	int n, i;
//	printf("\nplease input a number:\n");
//	scanf("%d", &n);
//	printf("%d=", n);//输出前面的“n=”。
//	for (i = 2; i <= n; i++)//除数从2开始一直增加。
//	{
//		while (n != i)
//		{
//			if (n % i == 0)//判断n%i是否整除。
//			{
//				printf("%d*", i);//整除则输出i。
//				n = n / i;//把商赋值给n。
//			}
//			else
//				break;
//		}
//	}
//	printf("%d\n", n);//把最后一个商输出，也就是最后一个因数。
//}

/*某个公司采用公用电话传递数据， 数据是四位的整数， 在传递过程中是加密的，
加密规则如下： 每位数字都加上 5,然后用和除以 10 的余数代替该数字， 再将第
一位和第四位交换，第二位和第三位交换。 编程输入原密码， 输出加密后的密码。*/

//main()
//{
//	int a, i, aa[4], t;
//	scanf("%d", &a);
//	aa[0] = a % 10;
//	aa[1] = a % 100 / 10;
//	aa[2] = a % 1000 / 100;
//	aa[3] = a / 1000;
//	for (i = 0; i <= 3; i++)
//	{
//		aa[i] += 5;
//		aa[i] %= 10;
//	}
//	for (i = 0; i <= 3 / 2; i++)
//	{
//		t = aa[i];
//		aa[i] = aa[3 - i];
//		aa[3 - i] = t;
//	}
//	for (i = 3; i >= 0; i--)
//		printf("%d", aa[i]);
//}

/*企业发放的奖金根据利润提成。 利润(I)低于或等于 10 万元时， 奖金可提 10%; 利润高
于 10 万元， 低于或等于 20 万元时， 低于 10 万元的部分按 10%提成， 高于 10 万元的部分，
可可提成 7.5%; 20 万到 40 万之间时， 高于 20 万元的部分， 可提成 5%; 40 万到 60 万之
间时高于 40 万元的部分， 可提成 3%; 60 万到 100 万之间时， 高于 60 万元的部分， 可提
成 1.5%， 高于 100 万元时， 超过 100 万元的部分按 1%提成， 从键盘输入当月利润 I， 求应
发放奖金总数？*/

//main()
//{
//	int i;
//	int bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	scanf("%d", &i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus1 + 100000 * 0.075;
//	bonus4 = bonus2 + 200000 * 0.05;
//	bonus6 = bonus4 + 200000 * 0.03;
//	bonus10 = bonus6 + 400000 * 0.015;
//	if (i <= 100000)
//		bonus = i * 0.1;
//	else if (i <= 200000)
//		bonus = bonus1 + (i - 100000) * 0.075;
//	else if (i <= 400000)
//		bonus = bonus2 + (i - 200000) * 0.05;
//	else if (i <= 600000)
//		bonus = bonus4 + (i - 400000) * 0.03;
//	else if (i <= 1000000)
//		bonus = bonus6 + (i - 600000) * 0.015;
//	else
//		bonus = bonus10 + (i - 1000000) * 0.01;
//	printf("bonus=%d\n", bonus);
//}

/*从大到小排序输出，类似冒泡排序法*/

//main()
//{
//	int c[] = { 23,1,56,234,7,0,34 }, i, j, t;
//	for (i = 1; i < 7; i++)//总共比较的次数，两两相比，一共6次;
//	{
//		t = c[i]; j = i - 1;//保存一下当前的值，最后放到小于最右边的值;
//		while (j >= 0 && t > c[j])
//		{
//			c[j + 1] = c[j]; j--;
//		}
//		c[j + 1] = t;
//	} for (i = 0; i < 7; i++)
//		printf("%d ", c[i]);
//	putchar('\n');
//}

//int fun(double a)
//{
//	return a;
//}
//
//main()
//{
//	double a = 5;
//	double b = fun(a);
//	printf("%f", a);
//}

//#define F(X,Y) (X)*(Y)//仍然是，先使用a,b再进行++;
//main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//}

/*有一字符串， 包含 n 个字符。 写一函数， 将此字符串中从第 m 个字符开始的全部字符
复制成为另一个字符串。*/

//main()
//{
//	char a[20] = "abcdefghij", b[20] = { 0 };
//	int m, n, i, j;
//	printf("输入m：");
//	scanf("%d", &m);
//	n = strlen(a);
//	i = 0;
//	j = m - 1;
//	while (a[j] != '\0')
//		b[i++] = a[j++];
//	b[i] = '\0';
//	puts(b);
//}

/*利用循环语句编程， 打印下列图形：*/

//void main()
//{
//	int i, j;
//	for ( i = 0; i < 7; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (i+j<3||i+j>6)
//			{
//				printf("   ");
//			}
//			else
//			{
//				printf(" * ");
//			}
//		}
//		printf("\n");
//	}
//}

//main()//构成死循环：由于for中间判断为k=1是赋值语句，所以一直为1且成立;
//{
//	int i, k;
//	for (i = 0, k = -1; k = 1; k++) printf("*****\n");
//}

//void main(void)
//{
//	int k = 0;
//	char c = 'A';
//	do
//	{
//		switch (c++)
//		{
//		case 'A': k++; break;
//		case 'B': k--;
//		case 'C': k += 2; break;
//		case 'D': k = k % 2; continue;
//		case 'E': k = k * 10; break;
//		default: k = k / 3;
//		}
//		k++;
//	} while (c < 'G');
//	printf("k=%d\n", k);
//}

//void main(void)
//{
//	int k = 10;
//	char c = 'A';
//	do
//	{
//		switch (c++)
//		{
//		case 'A': k++; continue;
//		case 'B': k--;
//		case 'C': k--; break;
//		default: k = k / 3;
//		}
//		k++;
//		break;
//	} while (c < 'D');
//	printf("k=%d\n", k);
//}

							/*文件的操作*/

//文件的写入“w”
//main()
//{
//	char c = 0;
//	char ch[20], * p = ch;
//	FILE* fp;
//
//	fp = fopen("ftssk1_3", "w");
//	if (fp == NULL)//文件是否成功打开判断;
//	{
//		printf("打开文件失败！");
//		return 0;
//	}
//
//	fclose(fp);//关闭文件(必须有)
//	while (c != '\n')//读取到回车键停止;
//	{
//		fputc(c, fp);//写入到文件;
//		c = getchar();//再次读取下一个字符;
//	}
//	fclose(fp);//关闭文件(必须有)
//	p = gets();//获取字符串;
//	fputs(p, fp);
//	//c = getchar();//先读取屏幕上面输入的一个字符;
//	//while (c != '\n')//读取到回车键停止;
//	//{
//	//	fputc(c, fp);//写入到文件;
//	//	c = getchar();//再次读取下一个字符;
//	//}
//	fclose(fp);//关闭文件(必须有)
//}

//文件的读取“r”

//main()
//{
//	char c = 0;
//	FILE* fp;
//
//	fp = fopen("ftssk1_3", "r");
//	if (fp == NULL)
//	{
//		printf("打开文件失败！");
//		return 0;
//	}
//
//	c = fgetc(fp);
//	while (c != EOF)
//	{
//		putchar(c);
//		c = fgetc(fp);
//	}
//	fclose(fp);
//}

//文件的追加“a”

//main()
//{
//	char c = 0;
//	FILE* fp;
//
//	fp = fopen("ftssk1_3", "a");
//	if (fp == NULL)
//	{
//		printf("打开文件失败！");
//		return 0;
//	}
//
//	c = getchar();
//	while (c != '\n')
//	{
//		fputc(c, fp);
//		c = getchar();
//	}
//	fclose(fp);
//}

/*有n个整数，使其前面各数顺序向后移m个位置，移出的数再从头移入，使得最后m个
数变成前面m个数·例如：设n为6，m为2，当n个数为(1，2，3，4，5，6)，函数使
之变为(5，6，1，2，3，4)。编写一个函数move，实现以上功能，该函数的声明如下。
void move(int*x，int n，int m)*/

//void move(int* x, int n, int m)
//{
//	int i, j,t;
//	for ( i = 0; i < m; i++)//4循环n次
//	{
//		t = x[n-1];//1组最后一个元素取出;
//		for ( j = n-1; j >=0; j--)//2所有元素后移一位;
//		{
//			x[j] = x[j - 1];
//		}
//		x[0] = t;//3最后一个元素放到第一行;
//	}
//}
//void main()
//{
//	int b[10] = { 0,1,2,3,4,5,6,7,8,9 }, * x = b;
//	int n = sizeof(b) / sizeof(b[0]);
//	int m = 0, i;
//	printf("输入m的值：");
//	scanf("%d", &m);
//	move(x, n, m);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}

/*求结构体数据类型的长度*/

//main()
//{
//	int a[][4] = { 2};
//	int b = 0;
//	int c = 0;
//}
//main()
//{
//	struct test //最后结果取所有字节类型的最小倍数;
//	{
//		int m1;//4
//		char m2;//1==>4
//		float m3;//4
//		union uu//取最大4*2
//		{
//			char ul[5];//1*5
//			int u2[2];//4*2
//		}ua;
//	} myaa;
//	printf("%d", sizeof(struct test));
//}

/*定义全局变量，指针指向的同一个地址，值同时变化*/

//int* p;
//main()
//{
//	int x = 1, y = 2, z = 3;
//	p = &y;
//	fun(x + z, &y);//此时的&y就等价于p，指向的是同一个地址
//	printf("(1) %d %d %d\n", x, y, *p);
//}
//fun(int x, int* y)
//{
//	int z = 4;
//	*p = *y + z;
//	x = *p - z;
//	printf("(2) %d %d %d\n", x, *y, *p);
//}

//void swap(int* a, int* b)
////*t、*a、*b是局部变量，交换指针的值不会改变主函数里面的指针指向的值
//{
//	int* t;
//	t = a;
//	a = b;
//	b = t;
//}
//main()
//{
//	int x = 3, y = 5, * p = &x, * q = &y;
//	swap(p, q);
//	printf("%d %d\n", *p, *q);
//}

//main()
//{
//	char* p = "abcdefgh", * r;
//	long* q;//定义一个指long型的指针变量
//	q = (long*)p;//把p转换成指向long型的指针变量，并赋值给q
//	q++;//q++：long型指针++是向后加4个字节，char型指针++是向后加一个字节
//	r = (char*)q;//再把q转换为char*类型
//	printf("%s\n", r);
//}

/*假设银行整存整取存款不同期限的利率分别为： 期限一年年息利率为 2.25%; 期限二
年年息利率为 2.7% ; 期限三年年息利率为 3.24% ; 期限五年年息利率为 3.6%; 其他情
况年息利率为 5%要求输入存钱的本金和期限， 求到期时能从银行得到的利息与本金的合
计。*/

//main()
//{
//	int year;
//	float money, rate, total; /* money:本金 rate:月利率 total:本利合计*/
//	printf("请输入存入本金和存款年限： ");
//	scanf("%f%d", &money, &year); /* 输入本金和存款年限 */
//	if (year == 1) rate = 2.25; /* 根据年限确定利率 */
//	else if (year == 2) rate = 2.7;
//	else if (year == 3) rate = 3.24;
//	else if (year == 5) rate = 3.6;
//	else rate = 5;
//	total = money + money * rate * year / 100; /* 计算到期的本利合计 */
//	printf("到期时本息合计为： %.2f\n", total);
//}

/*有一分数序列： 2/1， 3/2， 5/3， 8/5， 13/8， 21/13...求出这个数列的前 n 项之和。*/

//main()
//{
//	int i = 1, n;
//	float x = 1, y = 2, sum = 0, t;
//	printf("输入要求到第n项：");
//	scanf("%d", &n);
//	while (i++ <= n)
//	{
//		sum += y/x;
//		t = y;
//		y += x;
//		x = t;
//	}
//	printf("前%d项和为%f\n", n, sum);
//}

/*输入一行文字， 找出其中大写字母、 小写字母、 空格、 数字和其他字符各有多少。*/

//main()
//{
//main()
//{
//	int i, n = 0;
//	for (i = 0; i < 8; i++)
//	{
//		//n = rand() % 5;//0-4的随机数
//		printf("输入一个0-4的随机数：");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//		case 3:printf("%d\n", n); break;//只跳出switch语句，继续执行switch之后的语句
//		case 2:
//		case 4:printf("%d\n", n); continue;//跳出本次for循环，进行下一次for循环
//		case 0:exit(0);//退出整个程序
//		}
//		printf("%d\n", n);
//	}
//}

//union pw
//{
//	int i;
//	char ch[2];
//}a;
//main()
//{
//	a.ch[0] = 13;//-->0x0d
//	a.ch[1] = 0;//-->0x00
//	printf("%d\n", a.i);//-->0x000d
//	printf("%d\n", sizeof(union pw));
//}

//void sort(int a[], int n)
//{
//	int i, j, t;
//	for (i = 0; i < n - 1; i++)
//		for (j = i + 1; j < n; j++)
//			if (a[i] < a[j])
//			{
//				t = a[i]; a[i] = a[j]; a[j] = t;
//			}
//}
//main()
//{
//	int aa[10] = { 1,2,3,4,5,6,7,8,9,10 }, i;
//	sort(&aa[3], 5);
//	for (i = 0; i < 10; i++)
//		printf("%d,", aa[i]);
//	printf("\n");
//}

//main()
//{
//	char* s[] = { "PASCAL", "FORTRAN", "COBOL", "BASIC" };
//	char** p;
//	int n;
//	p = s;
//	for (n = 0; n < 4; n++)
//		printf("%s\n", *(p++));
//}

//#define M 100
//void fun(int m, int* a, int* n)
//{
//	int i, j = 0;
//	for (i = 1; i <= m; i++)
//		if (i % 7 == 0 || i % 11 == 0)
//			a[j++] = i;
//	*n = j;
//}
//
//main()
//{
//	int aa[M], n, k;
//	//clrscr();
//
//	fun(10, aa, &n);
//	for (k = 0; k < n; k++)
//		if ((k + 1) % 20 == 0) printf("\n");
//		else printf("%4d", aa[k]);
//	printf("\n");
//}

//int fun(int x)
//{
//	static int t = 0;
//	return (t += x);
//}
//main()
//{
//	int s, i;
//	for (i = 1; i <= 5; i++) s = fun(i);
//	printf("%d\n", s);
//}

//main()
//{
//	int j, a[] = { 1,3,5,7,9,11,13,15 }, * p = a + 5;
//	for (j = 3; j; j--)
//	{
//		switch (j)
//		{
//		case 1:
//		case 2: printf("%d", *p++); break;
//		case 3:printf("%d", *(--p));
//		}
//	}
//}

/*输入一个不多于五位数的正整数，判断它是几位，并逆序输 出
各位数字。*/
//方法1
//f(int n)//递归倒序输出
//{
//	if (n % 10 > 0)
//	{
//		printf("%d", n % 10);
//		f(n / 10);
//	}
//	else
//	{
//		printf("\n");
//	}
//}
//void main()
//{
//	int n = 0, x = 0, i = 5;
//	while (i--)//测试使用
//	{
//		printf("输入一个五位以内的数\n");
//		scanf("%d", &n);
//		if (n / 10000 > 0)x = 5;
//		else if (n / 1000 > 0)x = 4;
//		else if (n / 100 > 0)x = 3;
//		else if (n / 10 > 0)x = 2;
//		else x = 1;
//		printf("%d有%d位数\n倒序输出为:", n, x);
//		f(n);
//	}
//}
//方法2
//main()//简单方式while循环
//{
//	int i = 0, n;
//	printf("输入一个五位以内的数\n");
//	scanf("%d", &n);
//	printf("倒序输出为：");
//	while (n)
//	{
//		printf("%d", n % 10);//输出最低位
//		n /= 10;//除去最低位
//		i++;//位数+1
//	}
//	printf("\n一共有%d位\n", i);
//}

/*编写一个程序，将将两个字符串连接起来，不能使用 strcat 函
数。*/
//main()
//{
//	char a[20] = "abcdef";
//	char b[10] = "fghij";
//	int i = 0, j = 0;
//	while (a[i] != '\0')i++;//先把第一个字符串遍历一遍直到\0
//	while (b[j] != '\0')
//	{
//		a[i++] = b[j++];//从\0以后开始吧第二个字符串加在后面
//	}
//	a[i] = '\0';//最后添加一个\0做停止符
//	printf("%s", a);
//}

/*一个数如果恰好等于它的因子之和，这个数被称为“完数”。求
1000 以内的所有完数。*/

//int main()
//{
//	int i, j, sum = 0;
//	for (i = 2; i <= 1000; i++)
//	{
//		sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum = sum + j;
//			}
//		}
//		if (sum == i) {
//			printf("%d\n", i);
//		}
//	}
//}

/*输入一个不多于五位数的正整数，判断它是几位，并逆序输 出
各位数字。*/
//方法1
//f(int n)//递归倒序输出
//{
//	if (n % 10 > 0)
//	{
//		printf("%d", n % 10);
//		f(n / 10);
//	}
//	else
//	{
//		printf("\n");
//	}
//}
//void main()
//{
//	int n = 0, x = 0, i = 5;
//	while (i--)//测试使用
//	{
//		printf("输入一个五位以内的数\n");
//		scanf("%d", &n);
//		if (n / 10000 > 0)x = 5;
//		else if (n / 1000 > 0)x = 4;
//		else if (n / 100 > 0)x = 3;
//		else if (n / 10 > 0)x = 2;
//		else x = 1;
//		printf("%d有%d位数\n倒序输出为:", n, x);
//		f(n);
//	}
//}
//方法2
//main()//简单方式while循环
//{
//	int i = 0, n;
//	printf("输入一个五位以内的数\n");
//	scanf("%d", &n);
//	printf("倒序输出为：");
//	while (n)
//	{
//		printf("%d", n % 10);//输出最低位
//		n /= 10;//除去最低位
//		i++;//位数+1
//	}
//	printf("\n一共有%d位\n", i);
//}

/*编写一个程序，将将两个字符串连接起来，不能使用 strcat 函
数。*/
//main()
//{
//	char a[20] = "abcdef";
//	char b[10] = "fghij";
//	int i = 0, j = 0;
//	while (a[i] != '\0')i++;//先把第一个字符串遍历一遍直到\0
//	while (b[j] != '\0')
//	{
//		a[i++] = b[j++];//从\0以后开始吧第二个字符串加在后面
//	}
//	a[i] = '\0';//最后添加一个\0做停止符
//	printf("%s", a);
//}

/*一个数如果恰好等于它的因子之和，这个数被称为“完数”。求
1000 以内的所有完数。*/

//int main()
//{
//	int i, j, sum = 0;
//	for (i = 2; i <= 1000; i++)
//	{
//		sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				sum = sum + j;
//			}
//		}
//		if (sum == i) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//main()
//{
//	int a[3][3] = {1,2,3,4,5,6,7,8,9};
//	int* p[3];
//	//p = a;//x   p为常量
//	p[0] = a;//x   p[0]应该存放指针
//	p[0] = &a[1][2];//√
//	p[1] = &a;//x   p[1]应该存放指针
//}

/*以下程序的功能是求出矩阵 x 的"上三角"元素之积。 其中矩阵 x 的行列数和元素的值均
由键盘输入。*/
//#define M 10
//main()
//{
//	int x[M][M]; int n, i, j; long s = 1;
//	printf("Enter a integer(<=10):\n");
//	scanf("%d", &n);
//	printf("Enter %d data on each line for the array x\n", n);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++) scanf("%d", &x[i][j]);
//	for (i = 0; i < n; i++)
//		for (j = i; j < n; j++)s *= x[i][j];
//	printf("%ld", s);
//}

/*下面程序的功能是在字符串 s 中找出最大的字符并放在第一个位置上， 并将该字符前的
原字符往后顺序移动， 如： boy&girl 变成 ybo&girl。*/

//main()
//{
//	char s[80], * t, max, * w={0};
//	t = s;
//	gets(t);
//	max = *(t++);
//	while (*t != '\0')
//	{
//		if (max < *t)
//		{
//			max = *t;
//			w = t;
//		}
//		t++;
//	}
//	t = w;
//	while (t - 1 >= s)
//	{
//		*t = *(t - 1);
//		t--;
//	}
//	*t = max;
//	puts(t);
//}

/*以下程序按下面指定的数据给 x 数组的下三角置数， 并按如下形式输出*/
/*
   4
   3 7
   2 6 9
   1 5 8 10
*/
//main()
//{
//	int x[4][4] = { 0 }, n = 0, i, j;
//	for (j = 0; j < 4; j++)
//		for (i = 3; i >= j; i--)
//		{
//			n++;
//			x[i][j] = n;
//		}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%3d", x[i][j]);
//		printf("\n");
//	}
//}

//main()
//{
//	float a, b, c;
//	scanf("%f%f%f", &a, &b, &c);//只能用空格或者回车来结束。10.0,22.0,33.0<回车>这种形式错
//	printf("%f\n%f\n%f\n", a, b, c);
//}

//struct st
//{
//	int x; int* y;
//} *p;
//int dt[4] = { 10,20,30,40 };
//struct st aa[4] = { 50,&dt[0] ,60,&dt[0] ,60,&dt[0] ,60,&dt[0] };
//main()
//{
//	p = aa;
//	printf("%d\n", ++(p->x));//51
//}

//main()
//{
//	int a, b, k = 4, m = 6, * p = &k, * q = &m;
//	a = p == &m;
//	b = (-*p) / (*q) + 7;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//}

//int fun(int n)
//{
//	int* p;
//	p = (int*)malloc(sizeof(int));
//	*p = n; return *p;
//}
//main()
//{
//	int a;
//	a = fun(10);
//	printf("%d\n", a + fun(10));
//}

//#define N 5
//int fun(int* s, int a, int n)
//{
//	int j;
//	*s = a; j = n;
//	while (a != s[j]) j--;
//	return j;
//}
//main()
//{
//	int s[N + 1]; int k;
//	for (k = 1; k <= N; k++)
//		s[k] = k + 1;
//	printf("%d\n", fun(s, 4, N));
//}

//struct s { int n; char* c; }*p;
//char d[] = { 'a','b','c','d','e' };
//struct s a[] = { 10,&d[0],20,&d[1],30,&d[2],40,&d[3],50,&d[4] };
//#include <stdio.h>
//main()
//{
//	p = a;
//	printf("%d\n", ++p->n);
//	printf("%d\n", (++p)->n);
//	printf("%c\n", ++(*p->c));
//}

//main()
//{
//	int b[2][3] = { 1,3,5,7,9,11 };
//	int* a[2][3];//定义一个指针二维数组，里面存放指针
//	int i, j;
//	int** p, m;
//	for (i = 0; i < 2; i++)
//		for (j = 0; j < 3; j++)
//			a[i][j] = *(b + i) + j;
//	p = a[0];//把a[0]指向的‘行’地址赋值给二级指针p；
//	for (m = 0; m < 6; m++)
//	{
//		printf("%4d", **p);
//		p++;
//	}
//}

/*下面程序的功能是统计字串 sub 在母串 s 中出现的次数。*/

//main()
//{
//	char s[80], sub[80];
//	int n;
//	printf("输入母串s：");
//	gets(s);
//	printf("\n输入字串sub：");
//	gets(sub);
//	printf("\n");
//	printf("%s在%s中出现%d次\n", sub, s, count(s, sub));
//}
//int count(char* p, char* q)
//{
//	int m, n, k, num = 0;
//	for (m = 0; p[m]; m++)
//		for (n = m, k = 0; q[k] == p[n]; k++, n++)
//			if (q[k + 1] == '\0')
//			{
//				num++; break;
//			}
//	return (num);
//}

/*以下程序的功能是： 从键盘上输入若干个学生的成绩（ 用输入负数结束输入） ， 统计
出平均成绩， 并输出低于平均分的学生成绩。*/

//main()
//{
//	int n = 0, i; float x[1000], sum = 0.0, ave, a;
//	printf("Enter mark:\n");
//	scanf("%f", &a);
//	while (a >= 0.0 && n < 1000)
//	{
//		sum += a;
//		x[n] = a;
//		n++;
//		scanf("%f", &a);
//	} ave = sum / n;
//	printf("Output:\n");
//	printf("ave=%f\n", ave);
//	for (i = 0; i < n; i++)
//		if (x[i] < ave) printf("%f\n", x[i]);
//}

/* 以下程序打印如下形式的图形请填空。
			*
			* *
			* * *
			* * * *
*/

//main()
//{
//	for (int i = 1; i <= 4; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("*");
//		printf("\n");
//	}
//}

/*1． 输出九行九列 9 * 9 乘法口诀表。*/

//main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, i * j);
//		}
//		printf("\n");
//	}
//}

/*2． 输入一个 3╳3 的整数矩阵， 求其对角线元素之和。*/

//main()
//{
//	int a[3][3], i, j, sum = 0;
//
//	printf("输入3X3的矩阵\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//			if (i == j || i + j == 2)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	printf("对角线之和为%d\n", sum);
//}

/*3． 有 10 个学生， 每个学生的数据包括学号（stu_num， 6 个字符， 如 s00101） 、 姓名（name，
8 个字符） 、 三门课程的成绩（score[3]， 实型） 及其平均分（avr， 实型， 初始时不赋值， ）。
首先输入这 10 个学生的数据， 然后再计算每个学生 3 门课程的平均分， 存回 avr 中， 并输
出第 6 号学生的所有信息。*/

//main()
//{
//	struct stu
//	{
//		char stu_num[6];
//		char name[8];
//		float score[3];
//		float ave;
//	}s[1], * p;
//	int i = 0;
//	float sum = 0;
//	printf("输入十位学生的信息：\n");
//	for (p = s; p < s + 1; p++)
//	{
//		sum = 0;
//		gets(p->stu_num);
//		gets(p->name);
//		for (i = 0; i < 3; i++)
//		{
//			scanf("%f", &p->score[i]);
//			sum += p->score[i];
//		}
//		p->ave = sum / 3;
//	}
//	printf("stu_num:%s\nname:\t%s\n", s[0].stu_num, s[0].name);
//	for (i = 0; i < 3; i++)
//	{
//		printf("score%d:\t%.2f\n", i, s[0].score[i]);
//	}
//	printf("ave:\t%.2f\n", s[0].ave);
//}

//main()
//{
//	union
//	{
//		int i[2];
//		int k;
//		char c[8];
//	}t, * s = &t;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%d\n", s->k);
//	printf("%c\n", s->c[0]);
//	printf("%c\n", s->c[4]);
//}

//int a = 1;//全局变量a
//int f(int c)
//{
//	static int a = 2;//局部静态变量a
//	c = c + 1;
//	return (a++) + c;
//}
//main()
//{
//	int i, k = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int a = 3;//局部变量a
//		k += f(a);
//	}
//	k += a;//此处a为全局变量a
//	printf("%d\n", k);
//}
/*上面代码等同于下面*/
//int a = 1;//全局变量a
//int f(int c)
//{
//	static int b = 2;//局部静态变量b
//	c = c + 1;
//	return (b++) + c;
//}
//main()
//{
//	int i, k = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int c = 3;//局部变量c
//		k += f(c);
//	}
//	k += a;//此处a为全局变量a
//	printf("%d\n", k);
//}

/*编写一个函数， 输入 n 为偶数时， 调用函数求 1/2+1/4+...+1/n,当输入 n 为奇数时，
调用函数 1/1+1/3+...+1/n*/

//float f(int n)
//{
//	int i;
//	float sum = 0;
//	if (n % 2 == 0)i = 2;
//	else i = 1;
//	while (i <= n)
//	{
//		sum += 1.0 / i;
//		i += 2;
//	}
//	return sum;
//}
//main()
//{
//	int n;
//	printf("输入n：");
//	scanf("%d", &n);
//	printf("\n%f\n", f(n));
//}

/*完成下面的函数sort，该函数用选择法对数组a由小到大排序，数组a有n个元素*/

//void sort(int a[], int n)
//{
//	int i, j, t;
//	for ( i = 0; i < n; i++)
//	{
//		for ( j = i; j < n; j++)
//		{
//			if (a[i]>a[j])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//}
//main()
//{
//	int i, b[] = { 4,15,3,9,7,6,8,1 };
//	sort(b, 8);
//	for ( i = 0; i < 8; i++)
//	{
//		printf("%d  ", b[i]);
//	}
//	printf("\n");
//}

/*输入两个字符串s1，s2，并从s1中删除s2中的字符。例如，
s1为“abcaa63akdfk”，s2为“ayk5”，程序运行后输出：bc63df。*/

//void main()
//{
//	void fun(int* s1, int* s2);
//	char s1[15] = "aabcaa63akdfk", s2[10] = "ayk5";
//	fun(s1, s2);
//	printf("%s\n", s1);
//}
//void fun(char* s1, char* s2)
//{
//	int i, j, k;
//	for (i = 0; s2[i] != '\0'; i++)
//	{
//		for (j = 0; s1[j] != '\0'; j++)
//		{
//			while (s2[i] == s1[j])//只要有一样的就一直循环，如果用if就会出现两个一样的只会删除一个
//			{
//				for (k = j; s1[k] != '\0'; k++)
//				{
//					s1[k] = s1[k + 1];
//				}
//			}
//		}
//	}
//}

//main()
//{
//	int x, y; x = 555; y = x + 2;
//	y = x + 2;
//	printf("x = % d", x, y);
//}

/*求2到n内的所有素数*/

//void prime(int n); // 求素数函数声明
//int main()
//{
//    int n;
//    printf("请输入一个大于2的自然数：");
//    scanf("%d", &n); // 读入自然数n
//    prime(n); // 调用求素数函数
//
//    return 0;
//}
//
//void prime(int n)
//{
//    int i, j, flag;
//    for (i = 2; i <= n; i++)
//    {
//        flag = 1;
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1) // 如果i是素数
//        {
//            printf("%d  ", i);
//        }
//    }
//}

/*冒泡排序法*/

//#define n 10
//main()
//{
//	int a[n] = { 9,8,5,4,7,3,6,0,1,2 }, i, j, temp;
//	int t = 0;
//	//printf("请输入10个整数：\n");
//	//for (i = 0; i < 10; i++)
//	//	scanf("%d", &a[i]);
//	for (i = 1; i < 10; i++)//一共排序九个轮回
//		for (j = 0; j < n - i; j++)//此处j<n-i每次轮回都会少一次
//		{
//			t++;
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
//			}
//		}
//	printf("\n排好序的10个整数为：\n");
//	for (i = 0; i < 10; i++)
//		printf("%5d", a[i]);
//	printf("\n运行次数%d\n", t);
//}

/*格式化输入*/

//main()
//{
//	int a, b, c;
//	scanf("a=%db=%dc=%d", &a, &b, &c);
//	//输入格式只能是a=1b=2c=3<回车>；不能是a=1<回车>b=2<回车>c=3<回车>
//	printf("a=%db=%dc=%d", a, b, c);
//}

/*结构体的正确引用*/

//struct work
//{
//	int id;
//	int num;
//}std,*p=&std;
//main()
//{
//	p->id = 1;
//	p->num = 2;
//	printf("%d\n", std.id);
//	//printf("%d\n", *p.id);//错误
//	printf("%d\n", (*p).id);
//	printf("%d\n", p->id);
//}