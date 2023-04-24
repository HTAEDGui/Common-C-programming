#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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
//		// 将x插入到已排序数组中,"关键语句"
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

/*从键盘上任意输入a,b,c求一元二次方程的两根，如果没有就输出"方程无实根"的信息。*/

//main()
//{
//	float a, b, c, d, x1, x2;
//	printf("输入abc三个值\n");
//	scanf("%f%f%f", &a, &b, &c);
//	//if (fabs(a) <= 1e-6)
//	if (fabs(a) == 0) printf("a=0不是一元二次方程\n");
//	else
//	{
//		d = b * b - 4 * a * c;
//		//if (fabs(d) < 1e-6)
//		if (fabs(d) == 0)
//		{
//			x1 = x2 = (-b) / (2 * a);
//			printf("有两个相等的实数根：x1=x2=%f\n", x1);
//		}
//		//else if (d > 1e-6)
//		else if (d > 0)
//		{
//			x1 = (-b + sqrt(d)) / (2 * a);
//			x2 = (b + sqrt(d)) / (2 * a);
//			printf("两根分别为：x1=%f,x2=%f\n", x1, x2);
//		}
//		else
//		{
//			printf("方程无实根\n");
//		}
//	}
//}

/*输入1000内的自然数判断是不是"自守数"：这个数的平方，末尾与这个数相等*/

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
//	printf("%d=", n);//输出前面的"n="。
//	for (i = 2; i <= n; i++)//除数从2开始一直增加。
//	{
//		while (n > i)
//		{
//			if (n % i == 0)//判断n%i是否整除。
//			{
//				printf("%d*", i);//整除则输出i。
//				n /= i;//把商赋值给n。
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

//文件的写入"w"
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

//文件的读取"r"

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

//文件的追加"a"

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

/*一个数如果恰好等于它的因子(能被整除的数)之和，这个数被称为"完数"。求
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

/*一个数如果恰好等于它的因子之和，这个数被称为"完数"。求
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
//	p = a[0];//把a[0]指向的'行'地址赋值给二级指针p；
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
s1为"abcaa63akdfk"，s2为"ayk5"，程序运行后输出：bc63df。*/

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

//main()//二维数组初始化
//{
//	int i = 0, j = 0;
//	int a[][4] = { 0,0 };//部分初始化，未初始化部分默认为0；
//	int b[1][4];		 //未初始化，随机值；
//	printf("%d", a[1][2]);
//}

//main()
//{
//	char s[10];
//	int a1, a2;
//	char c1, c2;
//	scanf("%d%c%d%c", &a1, &c1, &a2, &c2);
//	//1.输入形式：1a<空格>2b<回车>
//	//2.输入形式：1a2b<回车>
//	printf("%d\n%c\n%d\n%c\n", a1, c1, a2, c2);
//	//输出结果都是
//	//1
//	//a
//	//2
//	//b
//
//	//scanf("%s", s);
//	//printf("%s", s);
//}

/*用递归输出杨辉三角某行某列的值*/

//int f(int i, int j)
//{
//	if (j == 1 || i == j)
//	{
//		return 1;
//	}
//	else
//	{
//		return f(i - 1, j - 1) + f(i - 1, j);
//	}
//}
//main()
//{
//	int i, j;
//	scanf("%d%d", &i, &j);
//	printf("%d", f(i, j));
//}

/*用C语言递归输出杨辉三角"正三角"形前10行*/

//int f(int i, int j)
//{
//	if (j == 0 || i == j)
//	{
//		return 1;
//	}
//	else
//	{
//		return f(i - 1, j - 1) + f(i - 1, j);
//	}
//}
//main()
//{
//	int i, j;
//	int k;
//	for (i = 0; i < 10; i++)
//	{
//		for (k = 0; k < 10 - i; k++)printf("  ");
//		for (j = 0; j <= i; j++)printf("%4d", f(i, j));
//		printf("\n");
//	}
//}

/*不用递归，输出杨辉三角"正三角"形前10行*/

//#define N 10
//int main(void)
//{
//	int arr[N][N] = { 0 };
//	int i, j, m;
//	for (i = 0; i < N; i++)
//	{
//		for (m = 0; m < N - i; m++)printf("  ");
//		for (j = 0; j <= i; j++)
//		{
//			if ((0 == j) || (i == j))
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			printf("%4d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//main()
//{
//	int a[5] = { 2,4,5,6,10 }, * p, ** k;
//	p = a;
//	k = &p;//k里面储存的是p的地址，
//	printf("%d  ", *(p++));
//	printf("%d\n", **k);
//}

//point(char* p)
//{
//	p += 3;//传地址可以改值，但不能改地址；
//}
//main()
//{
//	char b[4] = { 'a','c','s','f' }, * pt = b;
//	point(pt);
//	printf(" % c\n", *pt);
//}

/*用函数mypow(a,n)求a的n次方*/

//double mypow(double a, int n)
//{
//	double m = 1;
//	while (n-- != 0)
//	{
//		m *= a;
//	}
//	return m;
//}
//main()
//{
//	double a = 5.0;
//	int n = 5;
//	printf("%15.1f", mypow(a, n));
//}

/*C 语言递归函数,实现将输入的 5 个字符以相反顺序打印出来*/

//void print_reverse(char arr[], int n) {
//    if (n == 0) {
//        return;
//    }
//    else {
//        printf("%c", arr[n - 1]);
//        print_reverse(arr, n - 1);
//    }
//}
//int main() {
//    char arr[5]="abcde";
//    print_reverse(arr, 5);
//    printf("\n");
//    return 0;
//}

//main()
//{
//	int a = 5, b;
//	b = (a++) + (a++) + (a++);//a++的值是在；结束后才加上去的
//	printf("%d\n", b);
//	printf("%d\n", a);
//}

//main()
//{
//	int a = 3, b = 5;
//	printf("%d", a<<1);
//}

/*输入某年某月某天，输出这是该年的第几天,"switch形式"*/

//// 判断某一年是否为闰年，是则返回1，不是则返回0
//int is_leap_year(int year) {
//    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//}
//
//// 计算某个月份的天数，需要传入年份和月份
//int get_days_in_month(int year, int month) {
//    int days = 0;
//    switch (month) {
//    case 1:
//    case 3:
//    case 5:
//    case 7:
//    case 8:
//    case 10:
//    case 12:
//        days = 31;
//        break;
//    case 4:
//    case 6:
//    case 9:
//    case 11:
//        days = 30;
//        break;
//    case 2:
//        days = is_leap_year(year) ? 29 : 28;
//        break;
//    default:
//        printf("Invalid input!\n");
//        break;
//    }
//    return days;
//}
//
//// 计算当前日期是一年中的第几天
//int day_of_year(int year, int month, int day) {
//    int i, days = 0;
//    for (i = 1; i < month; i++) {
//        days += get_days_in_month(year, i);
//    }
//    days += day;
//    return days;
//}
//
//int main() {
//    int year, month, day;
//    printf("请输入日期（格式：年 月 日，用空格分隔）：\n");
//    scanf("%d %d %d", &year, &month, &day);
//    printf("这是今年的第%d天\n", day_of_year(year, month, day));
//    return 0;
//}

/*输入某年某月某天，输出这是该年的第几天,"数组形式"*/

//// 判断某一年是否为闰年，是则返回1，不是则返回0
//int is_leap_year(int year) {
//    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//}
//
//// 计算当前日期是一年中的第几天
//int day_of_year(int year, int month, int day) {
//    int i, days = 0;
//    // 定义一个数组存储每个月份对应的天数
//    int days_in_month[] = { 31, is_leap_year(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    for (i = 1; i < month; i++) {
//        days += days_in_month[i - 1];
//    }
//    days += day;
//    return days;
//}
//
//int main() {
//    int year, month, day;
//    printf("请输入日期（格式：年 月 日，用空格分隔）：\n");
//    scanf("%d %d %d", &year, &month, &day);
//    printf("这是今年的第%d天\n", day_of_year(year, month, day));
//    return 0;
//}

/*结构体里面的共用体*/

//union un
//{
//	int i;
//	long y;
//	char z[8];
//};
//struct st
//{
//	float a[3];
//	union un b;
//};
//main()
//{
//	printf("%d\n", sizeof(struct st));
//	printf("%d\n", sizeof(union un));
//}

/*将三个支付串a,b,c从小到大排序后输出。注意：字符串比较函数为strcmp();字符串赋值函数为strcyp();*/

//void fun(char a[], char b[], char c[])
//{
//	char t[15];
//	if (strcmp(a, b) > 0)
//	{
//		strcpy(t, a);
//		strcpy(a, b);
//		strcpy(b, t);
//	}
//	if (strcmp(a, c) > 0)
//	{
//		strcpy(t, a);
//		strcpy(a, c);
//		strcpy(c, t);
//	}
//	if (strcmp(b, c) > 0)
//	{
//		strcpy(t, b);
//		strcpy(b, c);
//		strcpy(c, t);
//	}
//}

//main()
//{
//	char str1[15] = "Fuzhou", str2[15] = "Fujian", str3[15] = "China";
//	fun(str1, str2, str3);
//	printf("%s\n%s\n%s\n", str1, str2, str3);
//}

//main()
//{
//	puts("qwe");puts("qwe");puts("qwe");//puts();会在字符串输出结束后自动加一个\n换行
//}

/*有 n 个人围成一圈，顺序排号。从第一个人开始报数（从 1 到 3 报数），凡报到 3 的人
退出圈子，问最后留下的是原来第几号的那位。*/

//main()
//{
//	int i, j, m, n = 0, a[50];
//	printf("输入n\n");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		a[i] = i + 1;
//	}
//	i = 0;
//	j = 0;
//	m = n;
//	while (m > 1)
//	{
//		if (a[i] != 0)j++;
//		if (j == 3)
//		{
//			a[i] = 0;
//			j = 0;
//			m--;
//		}
//		i++;
//		if (i == n)i = 0;
//	}
//	while (a[i] == 0)i++;
//	printf("最后一个人是原来的%d号\n", a[i]);
//}

//#define nmax 50
//int main()
//{
//	int i, k, m, n, num[nmax];
//	printf("输入总人数:");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		num[i] = i + 1;
//	i = 0;
//	k = 0;
//	m = 0;
//	while (m < n - 1)
//	{
//		if (num[i] != 0) k++; //报数
//		if (k == 3)
//		{
//			num[i] = 0; //退出
//			k = 0;
//			m++; //退出的总人数
//		}
//		i++;
//		if (i == n) i = 0;
//	}
//	i = 0;
//	while (num[i] == 0) i++;
//	printf("留下的是原来的%d号\n", num[i]);
//	return 0;
//}

/*编写一函数 int strcmp_u(char *p1,char *p2)，实现两个字符串的比较。当字符串 1=字符串
2 时，返回 0；当字符串 1 ≠字符串 2 时，返回它们两者第一个不同字符的 ASCII 码的差
值*/

//int strcmp_u(char* p1, char* p2)
//{
//	while (*p1 != '\0' && *p2 != '\0')
//	{
//		if (*p1 != *p2) return *p1 - *p2;
//		p1++;
//		p2++;
//	}
//	if (*p1 == '\0' && *p2 == '\0') return 0;
//	else return *p1 - *p2;
//}
//main()
//{
//	char* p1 = "877";
//	char* p2 = "876";
//	printf("%d", strcmp_u(p1, p2));
//}

//int main()
//{
//	int s, t, a = 2, b = 4;
//	s = 1; t = 1;
//	if (a > 0) s = s + 1;
//	if (a > b) t = s + t;
//	else if (a == b) t = 5;
//	else t = 2 * s;
//	printf("s = % d, t = % d", s, t);
//	return 0;
//}

//main()
//{
//	double a = 3.14;
//	printf("%d\n", a);//输出别的数字
//	printf("%d\n", (int)a);
//}

//main()
//{
//	int a = 1, b = 2, c = 3, d = 4, e = 5;
//	printf("%d\n", a > b ? a : d > e ? d : e);//5
//	printf("%d\n", a > b ? a : (d > e ? d : e));//5
//	printf("%d\n", (a > b ? a : d) > e ? d : e);//5
//}

/*编写一函数 int strcpy_u(char *p1,char *p2)，实现两个字符串的复制。*/

//int strcpy_u(char* p1, char* p2)
//{
//	while (*p1 != '\0' && *p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}
//	*p1 = '\0';
//	return 0;
//}
//main()
//{
//	char a[20] = "abcdefghijk";
//	char b[10] = "ABCDE";
//	strcpy_u(a, b);
//	printf("%s", a);
//}

/*编写程序，输入一个不超过 10 位的正整数，判断该数是否是回文数（回文数：数字对
称，如 12321,123321 是回文数）。要求用数组实现。*/

//main()
//{
//	int a[10], i, j, flag = 1, m = 5;
//	long n, num;
//	while (m--)
//	{
//		printf("输入一个不超过十位的数:");
//		scanf("%d", &n);
//		num = n;
//		for (i = 0; n != 0; n /= 10, i++)a[i] = n % 10;
//		for (j = 0; j < i / 2; j++)
//			if (a[j] != a[i - j - 1])flag = 0;
//		if (flag)printf("%ld是回数。\n", num);
//		else printf("%ld不是回数。\n", num);
//	}
//}

//main()
//{
//	printf("%.1f\n", 3.159);
//	printf("%.1f\n", 3.161);
//}

/*猴子吃桃，每天吃一半加一，第十天只剩一个，问第一天摘几个*/

//main()
//{
//	int x = 1, d;
//	for (d = 9; d >= 1; d--)
//	{
//		x = (x + 1) * 2;
//	}
//	printf("第一天摘%d个桃子。\n", x);//1534个
//}
//main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;/*第一天的桃子数是第2天桃子数加1后的2倍*/
//		x2 = x1; day--;
//	}
//	printf("the total is %d\n", x1);
//}

//void printf_str(int n, char* p)
//{
//	while (n--)
//	{
//		printf("%c ", *p);
//		p++;
//	}
//}
//main()
//{
//	char a[40], * p = a;
//	scanf("%s", a);
//	int n = strlen(a);
//	printf_str(n, p);
//}

/*编写程序，删除一维数组中重复出现的元素。*/

//#define MAX 50
//main()
//{
//	int i, j, k, t, a[MAX];
//	int n = MAX;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		t = a[i];
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[j] == t)
//			{
//				for (k = j; k < n - 1; k++)
//				{
//					a[k] = a[k + 1];
//				}
//				j--;
//				n--;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%4d", a[i]);
//		if ((i + 1) % 5==0)
//		{
//			printf("\n");
//		}
//	}
//	printf("\n");
//}

/*两个乒乓球队进行比赛，各出三人。甲队为 a,b,c 三人，乙队为 x,y,z 三人。已抽签决定
比赛名单。有人向队员打听比赛的名单。 a 说他不和 x 比， c 说他不和 x,z 比，请编程序
找出三队赛手的名单。*/

//int main()
//{
//	char i, j, k;/*i 是 a 的对手， j 是 b 的对手， k 是 c 的对手*/
//	for (i = 'x'; i <= 'z'; i++)
//		for (j = 'x'; j <= 'z'; j++)
//		{
//			if (i != j)
//				for (k = 'x'; k <= 'z'; k++)
//				{
//					if (i != k && j != k)
//					{
//						if (i != 'x' && k != 'x' && k != 'z')
//							printf("order id a--%c\tb--%c\tc--%c\n", i, j, k);
//					}
//				}
//		}
//	return 0;
//}

//main()
//{
//	int x = 1,z;
//	z = x-- || x++;//||左边为1直接短路；
//	printf("x=%d,z=%d", x, z);
//}

//main()
//{
//	//char str[6] = { 65,66,67,68,69,0 };
//	char str[4] = "abcd";
//	printf("%s", str);
//}

//main()
//{
//	char a[20];
//	scanf("%s", a);//遇见 空格，回车，tab停止输入；
//	printf("%s", a);
//}

/*下列程序功能是：验证一个大于等于 6 偶数总能表示为两个素数之和。请填空。*/

//int main()
//{
//	int a, b, c, d;
//	scanf("%d", &a);
//	for (b = 3; b <= a / 2; b += 2)
//	{
//		for (c = 2; c < b; c++)
//			if (b % c == 0) break;
//		if (c >= b)
//			d = a - b;
//		else
//			continue;
//		for (c = 2; c < d; c++)
//			if (d % c == 0) break;
//		if (c >= d)
//		{
//			printf("%d=%d+%d\n", a, b, d); break;
//		}
//	}
//	return 0;
//}

/*输入一个大写字母，输出字母表中它前面的字母和后面的字母。如果输入的字母为 A
或 Z，则分别输出提示信息“没有前面的字母”或“没有后面的字母”。*/

//main()
//{
//	char ch;
//	int m = 5;
//	printf("输入一个大写字母：");
//	ch = getchar();
//	if (ch > 'A' && ch < 'Z')
//	{
//		printf("前边字母为%c，后边字母为%c\n", ch - 1, ch + 1);
//	}
//	else if (ch == 'A')
//	{
//		printf("没有前边字母，后边字母为%c\n", ch + 1);
//	}
//	else if (ch == 'Z')
//	{
//		printf("前边字母为%c，没有后边字母\n", ch - 1);
//	}
//	else
//	{
//		printf("请输入大写字母。\n");
//	}
//}

/*一球从 100m 高度自由落下，每次落地后反跳会原来高度的一半，再落下。求它第 10
次落地时，共经过多少米？第 10 次反弹多高？*/

//main()
//{
//	int x = 1;
//	double h = 100, s = 0;
//	s += h;
//	while (x < 10)
//	{
//		h /= 2;
//		s += h * 2;
//		x++;
//	}
//	printf("第%d次落地一共经过%lf米，第%d次反弹高度为%lf米", x, s, x, h);
//}

/*编写一个函数void fun(char *ss)，它的功能是：将ss所指字符串中所有下标为奇数位
置上的字母转换为大写(若该位置上不是字母，则不转换)。*/

//void fun(char* ss)
//{
//	ss++;
//	while (*ss != '\0')
//	{
//		if (*ss >= 'a' && *ss <= 'z')
//		{
//			*ss = *ss - 32;
//		}
//		ss += 2;
//	}
//}
//main()
//{
//	char s[] = "jashdkxuzchiq";//如果直接定义char *s = "jashdkxuzchiq";在修改*s时候会出现报错："引发了异常: 写入访问权限冲突。"
//	fun(s);
//	printf("%s", s);
//}

//main()
//{
//	for (int i = 0, j = 10; i = j = 10; i++, j--)
//	{
//		printf("1");
//	}
//}

//void stringcat(char* s, char* t)
//{
//	int i = 0, j = 0;
//	while (*(s + i)) i++;
//	while (s[i++] = t[j++]);
//}
//int main()
//{
//	char s[10] = "123", t[10] = "456";
//	stringcat(s, t);
//	printf("%s\n", s);
//	return 0;
//}

//main()
//{
//	int _ = 10;
//	printf("%d", _);
//}

/*韩信有一队兵，他想知道有多少人，便让士兵排队报数。按从 1 至 5 报数，最末一个士
兵报的数为 1；按从 1 至 6 报数，最末一个士兵报的数为 5；按从 1 至 7 报数，最末一个士
兵报的数为 4；最后再按从 1 至 11 报数，最末一个士兵报的数为 10。编程，帮韩信算出有
多少士兵。*/

//main()
//{
//	int i, j, k, l, n = 0;
//	while (1)
//	{
//		n++;
//		i = n % 5;
//		j = n % 6;
//		k = n % 7;
//		l = n % 11;
//		if (i == 1 && j == 5 && k == 4 && l == 10)
//		{
//			printf("韩信有%d个士兵\n", n);//2111个
//			break;
//		}
//	}
//}

/*编写程序，输入一行不超过 80 个字符，统计其中有多少个单词，单词之间用空格分隔
开。*/

//int main()
//{
//	char ch[81] = { 0 };
//	int i, num = 0, word = 0; char c;
//	gets(ch);
//	for (i = 0; (c = ch[i]) != '\0'; i++)
//		if (c == ' ') word = 0;
//		else if (word == 0)
//		{
//			word = 1;
//			num++;
//		}
//	printf("有 %d 个单词。\n", num);
//	return 0;
//}

//main()
//{
//	if (0 || 0 && 1 || 1)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//}

/*求100-200之间的素数，并且一行十个输出*/

//main()
//{
//	int i, j, n = 0, flag = 1;
//	for (i = 100; i < 200; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			flag = 1;
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag) { printf("%4d", i); n++; }
//		if (n == 10) { printf("\n"); n = 0; }
//	}
//}

//int main() {
//	int i, j;
//	for (i = 100; i <= 200; i++) {
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

/*编写int fun(char* ss, char c)功能是：求出字符串中指定字符的个数，并返回此值*/

//int fun(char* ss, char c)
//{
//	int count = 0;
//	while (*ss!='\0')
//	{
//		if (*ss==c)
//		{
//			count++;
//		}
//		ss++;
//	}
//	return count;
//}
//main()
//{
//	char s[] = "qweqhdugquh";
//	char ch = 'q';
//	printf("%d\n", fun(s, ch));
//}

/*编写函数 fun 功能是：求 Fibonacci 数列中大于 t 的最小的一个数，结果由函数返回。
其中 Fibonacci 数列 F(n)的定义为：F(0)=0，F(1)=1,F(n)=F(n－1)＋F(n－2) 例如：当
t = 1000 时，函数值为：1597。*/

//int F(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return F(n - 1) + F(n - 2);
//	}
//}
//
//int fun(int t)
//{
//	int n, i = 0;
//	while (i >= 0)
//	{
//		n = F(i);
//		if (t < n)return n;
//		i++;
//	}
//}
//main()
//{
//	int x;
//	printf("输入一个数：");
//	scanf("%d", &x);
//	printf("大于%d的第一个Fibonacci数是%d\n", x, fun(x));
//}

/*斐波那契数列衍生*/

//int f(int n)
//{
//	int s = 0, i;
//	if (n == 0 || n == 1)
//		return 1;
//	for (i = n - 1; i >= 0; i--)
//		s += f(i) * f(n - 1 - i);
//	return s;
//}
//int main()
//{
//	int i;
//	for (i = 1; i <= 6; i++)
//		printf("f(%d)=%d\n", i, f(i));
//	return 0;
//}

//int main()
//{
//	int a = 2, b;
//	b = (a++) + (a++) + (a++);//a++只会在；结束那一刻加上去，在；之前全部先用,即使加了括号。
//	printf("%d", b);
//	return 0;
//}

/*自动四舍五入的情况，以及%d不能输出浮点数*/

//main()
//{
//	int a;
//	float b = 2.77;
//	a = 2.7;//给int型赋值浮点数，会自动去掉小数点后面所有。
//	printf("%d\n", a);
//	printf("%d\n", b);//print函数中%d输出格式不能输出浮点数
//	printf("%d\n", 2.77);//print函数中%d输出格式不能输出浮点数
//
//	printf("%.1f\n", b);//print函数中%.1f输出格式,会自动四舍五入
//	printf("%.1f\n", 2.77);//print函数中%.1f输出格式,会自动四舍五入
//}

//main()
//{
//	char* p = "1201230";
//	while (*p)//当*p指向的是字符串类型时候，while（）里面*p与*p!='\0'同理；
//	{
//		printf("%c", *p++);
//	}
//}

/*键盘输入数字N，对应输出N月的英语字母；N介于1-12之间，否则输出"illegal mounth"*/

//char* mounth_name(int n)
//{
//	char* mounth[13] = { "illegal mounth","january","february","march","april","may",
//				"june","july","august","september","october","november","december" };
//	if (n >= 1 && n <= 12)
//	{
//		return mounth[n];
//	}
//	else
//	{
//		return mounth[0];
//	}
//}
//main()
//{
//	int n, m = 5;
//
//	while (m--)
//	{
//		printf("输入正数N：");
//		scanf("%d", &n);
//		printf("%d月的英语为%s\n", n, mounth_name(n));
//	}
//}

/*从键盘上输入一个字符串，将该字符串转换成整数输出，用自定义函数long fun(char *p)来完成，
eg：输入字符串“-1234”，输出整数-1234*/
//long fun(char* p)
//{
//	long n = 0;
//	if (*p == '-')
//	{
//		p++;
//		while (*p)
//			n = n * 10 + *(p++) - '0';
//		return -n;
//	}
//	else
//	{
//		while (*p)
//			n = n * 10 + *(p++) - '0';
//		return n;
//	}
//}
//main()
//{
//	char s[10];
//	long n;
//	printf("输入一个字符串：");
//	gets(s);
//	n = fun(s);
//	printf("%ld\n", n);
//}

//main()
//{
//	int a = 12, b, c;
//	b = 0x1f5 & a << 3;
//	c = a << 3;
//	printf("%d,%d,%d\n", a, b, c);
//}

//main()
//{
//	char str[] = "abc\00def\n";
//	int a, b;
//	a = strlen(str);
//	b = sizeof(str);
//	printf("%d,%d", a, b);
//}

//main()
//{
//	char* pa[6];
//	char pb[6];
//	char(*pc)[6];
//	char** pd;
//	printf("\n");//其中pa,pb,pc,pd都是指针类型；
//}

//void fun(char* w, int m)
//{
//	char s, * p1, * p2;
//	p1 = w; p2 = w + m - 1;
//	while (p1 < p2)
//	{
//		s = *p1++; *p1 = *p2--; *p2 = s;//不是常规的交换；
//	}
//}
//int main()
//{
//	char a[] = "ABCDEFG";
//	fun(a, strlen(a));
//	puts(a);
//	return 0;
//}

//main()
//{
//	printf("%d", printf("%d", printf("********************")));//printf返回值为：输出字符数量；
//}

//main()
//{
//	int x = 5;
//	int b = 0;
//	b = --x + --x + --x + --x + --x;//先把所有--x优先执行完以后，再把x的值相加；
//	//b += --x;
//	//b += --x;
//	//b += --x;
//	//b += --x;
//	printf("%d", b);
//}

//main()
//{
//	float a;
//	scanf("%3.2f", &a);//错误
//	scanf("%3f", &a);
//	printf("%f", a);
//}

/*有已经排好序的字符串a，将s中的每个字符串按升序的规律插入到a中。*/

//main()
//{
//	char a[20] = "cehiknqtw";
//	char s[] = "fbla";
//	int i, j, k;
//	for (k = 0; s[k] != '\0'; k++)
//	{
//		j = 0;
//		while (s[k] >= a[j] && a[j] != '\0') j++;
//		for (i = strlen(a); i > j; i--) a[i] = a[i - 1];
//		a[j] = s[k];
//	}
//	puts(a);
//}

/*从键盘输入一行字符，统计其中有多少个单词，每个单词用空格隔开。*/

//main()
//{
//	char s[80]={0}, c1, c2 = ' ';
//	int i = 0, num = 0;
//	gets(s);
//	while (s[i]!='\0')
//	{
//		c1 = s[i];
//		if (c1!=' '&&c2==' ')
//		{
//			num++;
//		}
//		i++;
//		c2 = c1;
//	}
//	printf("有%d个单词。\n", num);
//}

/*关于%lx型的输出*/

//main()
//{
//	int a = -2;
//	long y = 23456;
//	printf("%3lx\n", y);
//	printf("%8lx\n", y);
//	printf("%#8lx\n", y);
//
//	printf("%8lx\n", a);
//}

/*"水仙花数"一个三位数，三个数的立方和为他本身。*/

//main()
//{
//	int i, a, b, c;
//	for (i = 100; i < 1000; i++)
//	{
//		a = i / 100;//百位
//		b = i / 10 % 10;//十位
//		c = i % 10;//个位
//		if (i == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%4d", i);
//		}
//	}
//}

/*现有 10 个城市名及其春、夏、秋、冬四个季节的平均温度值，编写程序，定义合适的
结构体，输入 10 个城市名和四季温度，计算各个城市的全年平均温度，并按照平均温度从
低到高的顺序输出城市名、四季温度及全年平均温度。*/

//#define N 4
//main()
//{
//	struct temp
//	{
//		char name[20];
//		float t[4];
//		float ave;
//	}s[N], tem;
//	int i, j, k;
//	float sum;
//	printf("输入十个城市的信息：\n");
//	for (i = 0; i < N; i++)
//	{
//		sum = 0;
//		scanf("%s", s[i].name);
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%f", &s[i].t[j]);
//			sum += s[i].t[j];
//		}
//		s[i].ave = sum / 4;
//	}
//	for (i = 1; i < N; i++)
//	{
//		for (j = 0; j < N - i; j++)
//		{
//			if (s[j].ave > s[j + 1].ave)
//			{
//				tem = s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = tem;
//			}
//		}
//	}
//	for ( i = 0; i < N; i++)
//	{
//		printf("%s\n", s[i].name);
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%6.1f", s[i].t[j]);
//		}
//		printf("  ave =%6.2f\n", s[i].ave);
//	}
//}

/*用插入法对数组a进行降序排序*/

//main()
//{
//	int a[5] = { 4,7,8,2,5 };
//	int i, j, m;
//	for (i = 1; i < 5; i++)
//	{
//		m = a[i];
//		j = i - 1;
//		while (j >= 0 && m > a[j])
//		{
//			a[j + 1] = a[j];
//			j--;
//		}
//		a[j] = m;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%3d", a[i]);
//	}
//	printf("\n");
//}

/*整数分解为因子乘积*/

//void fun(int n)
//{
//	int k, r;
//	for ( k = 2; k <= sqrt(n); k++)
//	{
//		r = n % k;
//		while (r==0)
//		{
//			printf("%d", k);
//			n = n / k;
//			if (n>1)
//			{
//				printf("*");
//			}
//			r = n % k;
//
//		}
//	}
//	if (n!=1)
//	{
//		printf("%d\n", n);
//	}
//}
//main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d=", n);
//	if (n<0)
//	{
//		printf("-");
//	}
//	n = abs(n);
//	fun(n);
//}

/*编写程序，计算 1 + 3 + 3² + ... + 3 ¹⁰的值并输出，假定分别用 i, p, s 作为循环变量、累乘变
量和累加变量的标识符。*/

//main()
//{
//	int i, j;
//	long p, s = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p = 1;
//		for ( j = 0; j < i; j++)
//		{
//			p *= 3;
//		}
//		s += p;
//	}
//	printf("1 + 3 + 3^2 + ... + 3^10=%ld\n", s);
//}

/*统计候选人得票数。假设有 3 名候选人，每次输入一个得票候选人的名字，输入“ 0”
结束。要求最后输出每个人的得票总数。*/

//main()
//{
//	struct tic
//	{
//		char name[20];
//		int t;
//	}s[3] = { "num1",0, "num2",0, "num3",0 };
//	int i;
//	char m[20] = { 0 };
//	gets(m);
//	while (strcmp(m, "0") != 0)
//	{
//		for (i = 0; i < 3; i++)
//		{
//			if (strcmp(s[i].name, m) == 0)
//			{
//				s[i].t++;
//				printf("%s  加一票\n", s[i].name);
//			}
//		}
//		gets(m);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s:%4d票\n", s[i].name, s[i].t);
//	}
//}

/*变量 a 的值为 -1，其在计算机内部的二进制形式是全1的补码形式，即 "11111111 11111111 11111111 11111111"。
当将其视为无符号整数进行输出时，其对应的十六进制数形式就是 "ffffffff"。*/
/*原码、反码和补码是计算机存储一个具体数字的编码方式。
  原码 >> 就是符号位加上真值的绝对值，
  反码 >> 就是对原码按位取反（但符号位除外），
  补码 >> 就是在反码的基础上加1。
计算机中通常采用补码来表示带符号的整数。*/

//main()
//{
//	int a = -1;
//	printf("%x", a);//ffffffff
//}

//main()
//{
//	int a = 33, b = 44, c;
//	c = a == b ? 111 : 100;
//	printf("%d", c);
//}

/*把字母后移或前移然后输出，如果是a后移一位则变成z*/

//原数组,目标数组,数组长度,位移量
//void fun(char* a1, char* a2, int n, int x)
//{
//	int k;
//	for (k = 0; k < n; k++)
//	{
//		if (a1[k] >= 'A' && a1[k] <= 'Z')
//		{
//			a2[k] = (a1[k] - 'A' + x + 26) % 26 + 'A';//大写字母移动
//		}
//		else if (a1[k] >= 'a' && a1[k] <= 'z')
//		{
//			a2[k] = (a1[k] - 'a' + x + 26) % 26 + 'a';//大写字母移动
//		}
//	}
//
//	a2[n] = '\0';
//}
//int main()
//{
//	char s1[5] = "xyzA", s2[5];
//	fun(s1, s2, 4, 1);
//	puts(s2);
//	return 0;
//}

//main()
//{
//	char c1, c2;
//	scanf("%4c%4c", &c1, &c2);//输入每四个字符里面的第一个；
//	printf("%c,%c", c1, c2);
//}

/*设计程序 double exp(double x),利用 e x =1+x+x2/2!+x3/3!+x4/4!+…,计算 ex的近似值，
要求误差小于 10-6*/

//double exp_u(int x)
//{
//	double e, item;
//	int i, k;
//	item = 1.0;
//	e = 1.0;
//	i = 1;
//	k = x;
//	while (k / item >= 1e-6)
//	{
//		item = item * i;
//		e = e + k / item;
//		i++;
//		k = k * x;
//	}
//	return e;
//}
//main()
//{
//	int x;
//	scanf("%d", &x);
//	printf("\ne^%d=%lf\n", x, exp_u(x));
//}

//int main()
//{
//	double e, item;
//	int i, x, k;
//	scanf("%d", &x);
//	item = 1.0;
//	e = 1.0;
//	i = 1;
//	k = x;
//	while (k / item >= 1e-6) {
//		item = item * i;
//		e = e + k / item;
//		i++;
//		k = k * x;
//	}printf("\ne=%lf\n", e);
//	printf("共累加了%d 项\n", i - 1);
//	return 0;
//}

/*编写函数 void to_b(unsigned long n)，函数功能将一个十进制整数转换成二进制的形式。
要求用递归方法实现。*/

//void to_b(unsigned long n)
//{
//	if (n > 1)
//	{
//		to_b(n / 2);
//		printf("%d", n % 2);
//	}
//	else
//	{
//		printf("%d", n);
//		return;
//	}
//}
//main()
//{
//	unsigned long a;
//	while (1)
//	{
//		scanf("%ul", &a);
//		to_b(a);
//		printf("\n");
//	}
//}

/*洗牌发牌*/
//struct card
//{
//	char face;
//	char suit;
//};
//typedef struct card Card;
//int main()
//{
//	Card deck[52], t;
//	char Face[] = { 'A','2','3','4','5','6','7','8','9','X','J','Q','K' };
//	char Suit[] = { 3,4,5,6 };
//	int i, j;
//	for (i = 0; i < 52; i++) //顺序存放扑克牌
//	{
//		deck[i].face = Face[i % 13];
//		deck[i].suit = Suit[i / 13];
//	}srand(time(NULL));
//	for (i = 0; i < 52; i++) //随机发牌
//	{
//		j = rand() % 52;
//		t = deck[i]; deck[i] = deck[j]; deck[j] = t;
//	}
//	for (i = 0; i < 52; i++) //输出洗牌后的结果
//	{
//		printf("%c%c\t", deck[i].suit, deck[i].face);
//	}
//	return 0;
//}

//main()
//{
//	char s[18] = "a book! ";
//	printf("%4.2s", s);//%4.4s表示输出前两位字符，总占用4个位置
//}

/*下列程序功能是：删除数组 a 中值为 y 的元素，*n 为数组元素个数。*/

//fun(int a[], int* n, int y)
//{
//	int i, j;
//	for (i = 0; i < *n; i++)
//		if (a[i] == y)
//		{
//			for (j = i; j < (*n - 1); j++)
//			{
//				a[j] = a[j + 1];
//			}
//			i--;
//			(*n)--;
//		}
//}
//int main()
//{
//	int a[10] = { 1,2,3,4,6,4,7,8,9,4 };
//	int x = 4, i, n = 10;
//	//for (i = 0; i < n; i++)
//	//	scanf("%d", &a[i]);
//	//printf("输入要删除的数： ");
//	//scanf("%d", &x);
//	fun(a, &n, x);
//	for (i = 0; i < n; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//main()
//{
//	struct U
//	{
//		int a;
//		int b;
//	}s[3] = { 1,2,3,4,5,6 }, * up = s;
//	printf("%d\n", s[0].a);
//	scanf("%d", &(up->a));//由于->优先级比&高，所以()可以不加
//	printf("%d\n", s[0].a);
//}