#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<math.h>
//main()
//{
//    int i, x;
//    int a[11] = { 20, 11, 8, 7, 5, 3, 0, -2, -5, -11 };
//    printf("ԭ����:");
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
/*����һ�������ı�˳��*/
//
//void main()
//{
//	int a[11] = { 20,18,16,14,13,10,8,5,2,0, };
//	int i, x = 0;
//	printf("ԭ����Ϊ��");
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%3d", a[i]);
//	}
//	printf("����һ������");
//	scanf("%d", &x);
//	for ( i = 10; i >=0 ; i--)
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
//	printf("���������Ϊ��");
//	for ( i = 0; i < 11; i++)
//	{
//	{
//		printf("%3d", a[i]);
//	}
//
//}
//
//void main()
//{
//	int a = 0, b = 0, c = 0;
//	char st[20],*p=st;
//	printf("����һ���ַ�\n");
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
//	printf("��ĸ��%d��\n����%d��\n����%d��\n", a, b, c);
//}

/*��һ���ַ�������*/
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

/*��д����, ����10��ѧ��3�ſεĳɼ�, ����ÿ��ѧ����ƽ���ɼ�,��ƽ���ɼ��������в���ӡ�������*/
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
//	printf("ƽ���ɼ�����Ϊ��\n");
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
//		printf("�����%dλѧ�������Ƴɼ���", i + 1);
//		scanf("%f%f%f", &st[i].s1, &st[i].s2, &st[i].s3);
//		s[i] = (st[i].s1 + st[i].s2 + st[i].s3) / 3;
//	}
//	f(s);
//}
//strlen���÷�
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

/*����ָ��ʵ����������*/
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

/*��1��9��ɵ������� X, YZ ��̼���� XXXX + YYYY + ZZZZ = YXXXz ����� X, YZ �������������ʽ�� */
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
//					printf("��X=%d,Y=%d,Z=%dʱ\n", i, j, k);
//					printf("%d+%d+%d=%d", f1(i), f1(j), f1(k), f2(i, j, k));
//				}
//			}
//		}
//	}
//}

/*�ں����ڿ�Ļʽ�ϣ��� A �� B �� C ���Ҿ���Ҫͬʱ��ʼ�������ڸ�21�졣
��֪ A ��ÿ��5���һ�Σ� B ��ÿ��6���һ�Σ� C ��ÿ��7���һ�Σ�����
�����ֶ�ʱ������շǳ�׼ȷ�����̼�������ܹ���������������������*/
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
//	printf("������%d��\n", n);
//}

/*��һԪ���η��̵�ֵ*/
//
//main()
//{
//	float a, b, c, d, x1, x2;
//	printf("����abc����ֵ\n");
//	scanf("%f%f%f", &a, &b, &c);
//	if (fabs(a) <= 1e-6)
//	{
//		printf("a=0����һԪ���η���\n");
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
//			printf("û�и�\n");
//		}
//	}
//}

/*����1000�ڵ���Ȼ���ж��ǲ��ǡ������������������ƽ����ĩβ����������*/

//main()
//{
//	int num = 0, div = 0;
//	//printf("����һ����:");
//	//scanf("%d", &num);
//	for (num = 0; num <= 1000; num++)
//	{
//		if (num < 10)div = 10;
//		else if (num < 100) div = 100;
//		else if (num < 1000)div = 1000;
//		if (num * num % div == num)
//		{
//			printf("%d��������\n", num);
//		}
//		else
//		{
//			printf("%d����������\n", num);
//		}
//	}
//}

/*շת��������������������Լ��*/

//main()
//{
//	int m = 0, n = 0, r = 0;
//	while (1)
//	{
//		printf("��������������mn:");
//		scanf("%d%d", &m, &n);
//		while (n)
//		{
//			r = m % n;
//			m = n;
//			n = r;
//		}
//		printf("���Լ����%d\n", m);
//	}
//}

/*������������������������Լ��*/

//main()
//{
//	int m = 0, n = 0;
//
//	printf("��������������mn:");
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
//	printf("���Լ����%d\n", m);
//}

/*��Ԫ��:����һ��ֵǮ�壻��ĸһ��ֵǮ������������ֵǮһ����Ǯ��ټ����ʼ��̣���ĸ�ͼ��������Σ�*/

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
//					printf("����%d,��ĸ%d,����%d\n", i, j, k);
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
//	printf("%8ld\n", y);
//}


//void main()
//{
//	char p1[10] = "abc", * p2 = "ABC", str[50] = "xyz";
//	strcpy(str + 3, strcat(p1, p2));
//	printf("%s\n", str);
//}

/*��һ���������ֽ��������� ���磺 ���� 90,��ӡ�� 90=2*3*3*5��*/

//main()
//{
//	int n, i;
//	printf("\nplease input a number:\n");
//	scanf("%d", &n);
//	printf("%d=", n);//���ǰ��ġ�n=����
//	for (i = 2; i <= n; i++)//������2��ʼһֱ���ӡ�
//	{
//		while (n != i)
//		{
//			if (n % i == 0)//�ж�n%i�Ƿ�������
//			{
//				printf("%d*", i);//���������i��
//				n = n / i;//���̸�ֵ��n��
//			}
//			else
//				break;
//		}
//	}
//	printf("%d\n", n);//�����һ���������Ҳ�������һ��������
//}

/*ĳ����˾���ù��õ绰�������ݣ� ��������λ�������� �ڴ��ݹ������Ǽ��ܵģ�
���ܹ������£� ÿλ���ֶ����� 5,Ȼ���úͳ��� 10 ��������������֣� �ٽ���
һλ�͵���λ�������ڶ�λ�͵���λ������ �������ԭ���룬 ������ܺ�����롣*/

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

/*��ҵ���ŵĽ������������ɡ� ����(I)���ڻ���� 10 ��Ԫʱ�� ������� 10%�� �����
�� 10 ��Ԫ�� ���ڻ���� 20 ��Ԫʱ�� ���� 10 ��Ԫ�Ĳ��ְ� 10%��ɣ� ���� 10 ��Ԫ�Ĳ��֣�
�ɿ���� 7.5%�� 20 �� 40 ��֮��ʱ�� ���� 20 ��Ԫ�Ĳ��֣� ����� 5%�� 40 �� 60 ��֮
��ʱ���� 40 ��Ԫ�Ĳ��֣� ����� 3%�� 60 �� 100 ��֮��ʱ�� ���� 60 ��Ԫ�Ĳ��֣� ����
�� 1.5%�� ���� 100 ��Ԫʱ�� ���� 100 ��Ԫ�Ĳ��ְ� 1%��ɣ� �Ӽ������뵱������ I�� ��Ӧ
���Ž���������*/

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

/*�Ӵ�С�������������ð������*/

//main()
//{
//	int c[] = { 23,1,56,234,7,0,34 }, i, j, t;
//	for (i = 1; i < 7; i++)//�ܹ��ȽϵĴ�����������ȣ�һ��6�Σ�
//	{
//		t = c[i]; j = i - 1;//����һ�µ�ǰ��ֵ�����ŵ�С�����ұߵ�ֵ��
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

//#define F(X,Y) (X)*(Y)//��Ȼ�ǣ���ʹ��a,b�ٽ���++��
//main()
//{
//	int a = 3, b = 4;
//	printf("%d\n", F(a++, b++));
//}

/*��һ�ַ����� ���� n ���ַ��� дһ������ �����ַ����дӵ� m ���ַ���ʼ��ȫ���ַ�
���Ƴ�Ϊ��һ���ַ�����*/

//main()
//{
//	char a[20] = "abcdefghij", b[20] = { 0 };
//	int m, n, i, j;
//	printf("����m��");
//	scanf("%d", &m);
//	n = strlen(a);
//	i = 0;
//	j = m - 1;
//	while (a[j] != '\0')
//		b[i++] = a[j++];
//	b[i] = '\0';
//	puts(b);
//}

/*����ѭ������̣� ��ӡ����ͼ�Σ�*/

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

//main()//������ѭ��������for�м��ж�Ϊk=1�Ǹ�ֵ��䣬����һֱΪ1�ҳ�����
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

							/*�ļ��Ĳ���*/

//�ļ���д�롰w��
//main()
//{
//	char c = 0;
//	char ch[20], * p = ch;
//	FILE* fp;
//
//	fp = fopen("ftssk1_3", "w");
//	if (fp == NULL)//�ļ��Ƿ�ɹ����жϣ�
//	{
//		printf("���ļ�ʧ�ܣ�");
//		return 0;
//	}
//
//	c = getchar();//�ȶ�ȡ��Ļ���������һ���ַ���
//	while (c != '\n')//��ȡ���س���ֹͣ��
//	{
//		fputc(c, fp);//д�뵽�ļ���
//		c = getchar();//�ٴζ�ȡ��һ���ַ���
//	}
//	fclose(fp);//�ر��ļ��������У�
//}

//�ļ��Ķ�ȡ��r��

//main()
//{
//	char c = 0;
//	FILE* fp;
//
//	fp = fopen("ftssk1_3", "r");
//	if (fp == NULL)
//	{
//		printf("���ļ�ʧ�ܣ�");
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

//�ļ���׷�ӡ�a��

//main()
//{
//	char c = 0;
//	FILE* fp;
//
//	fp = fopen("ftssk1_3", "a");
//	if (fp == NULL)
//	{
//		printf("���ļ�ʧ�ܣ�");
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

/*��n��������ʹ��ǰ�����˳�������m��λ�ã��Ƴ������ٴ�ͷ���룬ʹ�����m��
�����ǰ��m���������磺��nΪ6��mΪ2����n����Ϊ(1��2��3��4��5��6)������ʹ
֮��Ϊ(5��6��1��2��3��4)����дһ������move��ʵ�����Ϲ��ܣ��ú������������¡�
void move(int*x��int n��int m)*/

//void move(int* x, int n, int m)
//{
//	int i, j,t;
//	for ( i = 0; i < m; i++)//4ѭ��n��
//	{
//		t = x[n-1];//1�����һ��Ԫ��ȡ����
//		for ( j = n-1; j >=0; j--)//2����Ԫ�غ���һλ��
//		{
//			x[j] = x[j - 1];
//		}
//		x[0] = t;//3���һ��Ԫ�طŵ���һ�У�
//	}
//}
//void main()
//{
//	int b[10] = { 0,1,2,3,4,5,6,7,8,9 }, * x = b;
//	int n = sizeof(b) / sizeof(b[0]);
//	int m = 0, i;
//	printf("����m��ֵ��");
//	scanf("%d", &m);
//	move(x, n, m);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}

/*��ṹ���������͵ĳ���*/

//main()
//{
//	int a[][4] = { 2};
//	int b = 0;
//	int c = 0;
//}
//main()
//{
//	struct test //�����ȡ�����ֽ����͵���С������
//	{
//		int m1;//4
//		char m2;//1==>4
//		float m3;//4
//		union uu//ȡ���4*2
//		{
//			char ul[5];//1*5
//			int u2[2];//4*2
//		}ua;
//	} myaa;
//	printf("%d", sizeof(struct test));
//}

/*����ȫ�ֱ�����ָ��ָ���ͬһ����ַ��ֵͬʱ�仯*/

//int* p;
//main()
//{
//	int x = 1, y = 2, z = 3;
//	p = &y;
//	fun(x + z, &y);//��ʱ��&y�͵ȼ���p��ָ�����ͬһ����ַ
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
////*t��*a��*b�Ǿֲ�����������ָ���ֵ����ı������������ָ��ָ���ֵ
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
//	long* q;//����һ��ָlong�͵�ָ�����
//	q = (long*)p;//��pת����ָ��long�͵�ָ�����������ֵ��q
//	q++;//q++��long��ָ��++������4���ֽڣ�char��ָ��++������һ���ֽ�
//	r = (char*)q;//�ٰ�qת��Ϊchar*����
//	printf("%s\n", r);
//}

/*��������������ȡ��ͬ���޵����ʷֱ�Ϊ�� ����һ����Ϣ����Ϊ 2.25%�� ���޶�
����Ϣ����Ϊ 2.7% �� ����������Ϣ����Ϊ 3.24% �� ����������Ϣ����Ϊ 3.6%�� ������
����Ϣ����Ϊ 5%Ҫ�������Ǯ�ı�������ޣ� ����ʱ�ܴ����еõ�����Ϣ�뱾��ĺ�
�ơ�*/

//main()
//{
//	int year;
//	float money, rate, total; /* money:���� rate:������ total:�����ϼ�*/
//	printf("��������뱾��ʹ�����ޣ� ");
//	scanf("%f%d", &money, &year); /* ���뱾��ʹ������ */
//	if (year == 1) rate = 2.25; /* ��������ȷ������ */
//	else if (year == 2) rate = 2.7;
//	else if (year == 3) rate = 3.24;
//	else if (year == 5) rate = 3.6;
//	else rate = 5;
//	total = money + money * rate * year / 100; /* ���㵽�ڵı����ϼ� */
//	printf("����ʱ��Ϣ�ϼ�Ϊ�� %.2f\n", total);
//}

/*��һ�������У� 2/1�� 3/2�� 5/3�� 8/5�� 13/8�� 21/13...���������е�ǰ n ��֮�͡�*/

//main()
//{
//	int i = 1, n;
//	float x = 1, y = 2, sum = 0, t;
//	printf("����Ҫ�󵽵�n�");
//	scanf("%d", &n);
//	while (i++ <= n)
//	{
//		sum += y/x;
//		t = y;
//		y += x;
//		x = t;
//	}
//	printf("ǰ%d���Ϊ%f\n", n, sum);
//}

/*����һ�����֣� �ҳ����д�д��ĸ�� Сд��ĸ�� �ո� ���ֺ������ַ����ж��١�*/

//main()
//{
//	//dx>��д��ĸ�� xx>Сд��ĸ�� kg>�ո� sz>���ֺ�other>����
//	int dx = 0, xx = 0, sz = 0, kg = 0, other = 0, i = 0;
//	char* p, str[30];
//	printf("input the string:");
//	while ((str[i] = getchar()) != '\n')
//		i++;
//	for (p = str; *p != '\n'; p++)
//	{
//		if ((*p >= 'A') && (*p <= 'Z')) ++dx;
//		else if ((*p >= 'a') && (*p <= 'z')) ++xx;
//		else if (*p == ' ') ++kg;
//		else if ((*p >= '0') && (*p <= '9')) ++sz;
//		else ++other;
//	}
//	printf("upper number:%d,lower number:%d,", dx, xx);
//	printf("space number:%d,digit number :%d, other number:%d\n", kg, sz, other);
//}

