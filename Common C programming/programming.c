#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//#include<conio.h>
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

//int main() {
//	int i, j = 5, x;
//
//	while (j--)
//	{
//		int a[11] = { 20,18,16,14,13,10,8,6,4,2 };// ����������
//		//���ԭ����
//		printf("ԭ����Ϊ��");
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", a[i]);
//		}
//		printf("\n");
//		// ������������
//		printf("��������������");
//		scanf("%d", &x);
//		// ��x���뵽������������,"�ؼ����"
//
//		i = 9;
//		while (i >= 0 && a[i] < x)
//		{
//			a[i + 1] = a[i];
//			i--;
//		}
//		a[i + 1] = x;
//
//		// �������������
//		printf("����������Ϊ��");
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
//	printf("ԭ����Ϊ��");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d", a[i]);
//	}
//	printf("����һ������");
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
//	printf("���������Ϊ��");
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

/*�Ӽ�������������a,b,c��һԪ���η��̵����������û�о����"������ʵ��"����Ϣ��*/

//main()
//{
//	float a, b, c, d, x1, x2;
//	printf("����abc����ֵ\n");
//	scanf("%f%f%f", &a, &b, &c);
//	//if (fabs(a) <= 1e-6)
//	if (fabs(a) == 0) printf("a=0����һԪ���η���\n");
//	else
//	{
//		d = b * b - 4 * a * c;
//		//if (fabs(d) < 1e-6)
//		if (fabs(d) == 0)
//		{
//			x1 = x2 = (-b) / (2 * a);
//			printf("��������ȵ�ʵ������x1=x2=%f\n", x1);
//		}
//		//else if (d > 1e-6)
//		else if (d > 0)
//		{
//			x1 = (-b + sqrt(d)) / (2 * a);
//			x2 = (b + sqrt(d)) / (2 * a);
//			printf("�����ֱ�Ϊ��x1=%f,x2=%f\n", x1, x2);
//		}
//		else
//		{
//			printf("������ʵ��\n");
//		}
//	}
//}

/*����1000�ڵ���Ȼ���ж��ǲ���"������"���������ƽ����ĩβ����������*/

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

/*շת��������������������Լ������С������*/
/*���壺���Լ�� * ��С������ = ����֮��*/

//main()
//{
//	int m = 0, n = 0, r = 0, p;
//	while (1)
//	{
//		printf("��������������mn:");
//		scanf("%d%d", &m, &n);
//		p = m * n;
//		while (n)
//		{
//			r = m % n;
//			m = n;
//			n = r;
//		}
//		printf("���Լ����%d\n", m);
//		printf("��С��������%d\n", p / m);
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

/*��Ԫ��:����һ��ֵǮ��;��ĸһ��ֵǮ��;��������ֵǮһ����Ǯ��ټ����ʼ��̣���ĸ�ͼ��������Σ�*/

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
//	printf("%d=", n);//���ǰ���"n="��
//	for (i = 2; i <= n; i++)//������2��ʼһֱ���ӡ�
//	{
//		while (n > i)
//		{
//			if (n % i == 0)//�ж�n%i�Ƿ�������
//			{
//				printf("%d*", i);//���������i��
//				n /= i;//���̸�ֵ��n��
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

/*��ҵ���ŵĽ������������ɡ� ����(I)���ڻ���� 10 ��Ԫʱ�� ������� 10%; �����
�� 10 ��Ԫ�� ���ڻ���� 20 ��Ԫʱ�� ���� 10 ��Ԫ�Ĳ��ְ� 10%��ɣ� ���� 10 ��Ԫ�Ĳ��֣�
�ɿ���� 7.5%; 20 �� 40 ��֮��ʱ�� ���� 20 ��Ԫ�Ĳ��֣� ����� 5%; 40 �� 60 ��֮
��ʱ���� 40 ��Ԫ�Ĳ��֣� ����� 3%; 60 �� 100 ��֮��ʱ�� ���� 60 ��Ԫ�Ĳ��֣� ����
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
//	for (i = 1; i < 7; i++)//�ܹ��ȽϵĴ�����������ȣ�һ��6��;
//	{
//		t = c[i]; j = i - 1;//����һ�µ�ǰ��ֵ�����ŵ�С�����ұߵ�ֵ;
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

//#define F(X,Y) (X)*(Y)//��Ȼ�ǣ���ʹ��a,b�ٽ���++;
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

//main()//������ѭ��������for�м��ж�Ϊk=1�Ǹ�ֵ��䣬����һֱΪ1�ҳ���;
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

//�ļ���д��"w"
//main()
//{
//	char c = 0;
//	char ch[20], * p = ch;
//	FILE* fp;
//
//	fp = fopen("ftssk1_3", "w");
//	if (fp == NULL)//�ļ��Ƿ�ɹ����ж�;
//	{
//		printf("���ļ�ʧ�ܣ�");
//		return 0;
//	}
//
//	fclose(fp);//�ر��ļ�(������)
//	while (c != '\n')//��ȡ���س���ֹͣ;
//	{
//		fputc(c, fp);//д�뵽�ļ�;
//		c = getchar();//�ٴζ�ȡ��һ���ַ�;
//	}
//	fclose(fp);//�ر��ļ�(������)
//	p = gets();//��ȡ�ַ���;
//	fputs(p, fp);
//	//c = getchar();//�ȶ�ȡ��Ļ���������һ���ַ�;
//	//while (c != '\n')//��ȡ���س���ֹͣ;
//	//{
//	//	fputc(c, fp);//д�뵽�ļ�;
//	//	c = getchar();//�ٴζ�ȡ��һ���ַ�;
//	//}
//	fclose(fp);//�ر��ļ�(������)
//}

//�ļ��Ķ�ȡ"r"

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

//�ļ���׷��"a"

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
//		t = x[n-1];//1�����һ��Ԫ��ȡ��;
//		for ( j = n-1; j >=0; j--)//2����Ԫ�غ���һλ;
//		{
//			x[j] = x[j - 1];
//		}
//		x[0] = t;//3���һ��Ԫ�طŵ���һ��;
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
//	struct test //�����ȡ�����ֽ����͵���С����;
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

/*��������������ȡ��ͬ���޵����ʷֱ�Ϊ�� ����һ����Ϣ����Ϊ 2.25%; ���޶�
����Ϣ����Ϊ 2.7% ; ����������Ϣ����Ϊ 3.24% ; ����������Ϣ����Ϊ 3.6%; ������
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
//main()
//{
//	int i, n = 0;
//	for (i = 0; i < 8; i++)
//	{
//		//n = rand() % 5;//0-4�������
//		printf("����һ��0-4���������");
//		scanf("%d", &n);
//		switch (n)
//		{
//		case 1:
//		case 3:printf("%d\n", n); break;//ֻ����switch��䣬����ִ��switch֮������
//		case 2:
//		case 4:printf("%d\n", n); continue;//��������forѭ����������һ��forѭ��
//		case 0:exit(0);//�˳���������
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

/*����һ����������λ�������������ж����Ǽ�λ���������� ��
��λ���֡�*/
//����1
//f(int n)//�ݹ鵹�����
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
//	while (i--)//����ʹ��
//	{
//		printf("����һ����λ���ڵ���\n");
//		scanf("%d", &n);
//		if (n / 10000 > 0)x = 5;
//		else if (n / 1000 > 0)x = 4;
//		else if (n / 100 > 0)x = 3;
//		else if (n / 10 > 0)x = 2;
//		else x = 1;
//		printf("%d��%dλ��\n�������Ϊ:", n, x);
//		f(n);
//	}
//}
//����2
//main()//�򵥷�ʽwhileѭ��
//{
//	int i = 0, n;
//	printf("����һ����λ���ڵ���\n");
//	scanf("%d", &n);
//	printf("�������Ϊ��");
//	while (n)
//	{
//		printf("%d", n % 10);//������λ
//		n /= 10;//��ȥ���λ
//		i++;//λ��+1
//	}
//	printf("\nһ����%dλ\n", i);
//}

/*��дһ�����򣬽��������ַ�����������������ʹ�� strcat ��
����*/

//main()
//{
//	char a[20] = "abcdef";
//	char b[10] = "fghij";
//	int i = 0, j = 0;
//	while (a[i] != '\0')i++;//�Ȱѵ�һ���ַ�������һ��ֱ��\0
//	while (b[j] != '\0')
//	{
//		a[i++] = b[j++];//��\0�Ժ�ʼ�ɵڶ����ַ������ں���
//	}
//	a[i] = '\0';//������һ��\0��ֹͣ��
//	printf("%s", a);
//}

/*һ�������ǡ�õ�����������(�ܱ���������)֮�ͣ����������Ϊ"����"����
1000 ���ڵ�����������*/

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

/*����һ����������λ�������������ж����Ǽ�λ���������� ��
��λ���֡�*/
//����1
//f(int n)//�ݹ鵹�����
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
//	while (i--)//����ʹ��
//	{
//		printf("����һ����λ���ڵ���\n");
//		scanf("%d", &n);
//		if (n / 10000 > 0)x = 5;
//		else if (n / 1000 > 0)x = 4;
//		else if (n / 100 > 0)x = 3;
//		else if (n / 10 > 0)x = 2;
//		else x = 1;
//		printf("%d��%dλ��\n�������Ϊ:", n, x);
//		f(n);
//	}
//}
//����2
//main()//�򵥷�ʽwhileѭ��
//{
//	int i = 0, n;
//	printf("����һ����λ���ڵ���\n");
//	scanf("%d", &n);
//	printf("�������Ϊ��");
//	while (n)
//	{
//		printf("%d", n % 10);//������λ
//		n /= 10;//��ȥ���λ
//		i++;//λ��+1
//	}
//	printf("\nһ����%dλ\n", i);
//}

/*��дһ�����򣬽��������ַ�����������������ʹ�� strcat ��
����*/
//main()
//{
//	char a[20] = "abcdef";
//	char b[10] = "fghij";
//	int i = 0, j = 0;
//	while (a[i] != '\0')i++;//�Ȱѵ�һ���ַ�������һ��ֱ��\0
//	while (b[j] != '\0')
//	{
//		a[i++] = b[j++];//��\0�Ժ�ʼ�ɵڶ����ַ������ں���
//	}
//	a[i] = '\0';//������һ��\0��ֹͣ��
//	printf("%s", a);
//}

/*һ�������ǡ�õ�����������֮�ͣ����������Ϊ"����"����
1000 ���ڵ�����������*/

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
//	//p = a;//x   pΪ����
//	p[0] = a;//x   p[0]Ӧ�ô��ָ��
//	p[0] = &a[1][2];//��
//	p[1] = &a;//x   p[1]Ӧ�ô��ָ��
//}

/*���³���Ĺ������������ x ��"������"Ԫ��֮���� ���о��� x ����������Ԫ�ص�ֵ��
�ɼ������롣*/
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

/*�������Ĺ��������ַ��� s ���ҳ������ַ������ڵ�һ��λ���ϣ� �������ַ�ǰ��
ԭ�ַ�����˳���ƶ��� �磺 boy&girl ��� ybo&girl��*/

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

/*���³�������ָ�������ݸ� x ����������������� ����������ʽ���*/
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
//	scanf("%f%f%f", &a, &b, &c);//ֻ���ÿո���߻س���������10.0,22.0,33.0<�س�>������ʽ��
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
//	int* a[2][3];//����һ��ָ���ά���飬������ָ��
//	int i, j;
//	int** p, m;
//	for (i = 0; i < 2; i++)
//		for (j = 0; j < 3; j++)
//			a[i][j] = *(b + i) + j;
//	p = a[0];//��a[0]ָ���'��'��ַ��ֵ������ָ��p��
//	for (m = 0; m < 6; m++)
//	{
//		printf("%4d", **p);
//		p++;
//	}
//}

/*�������Ĺ�����ͳ���ִ� sub ��ĸ�� s �г��ֵĴ�����*/

//main()
//{
//	char s[80], sub[80];
//	int n;
//	printf("����ĸ��s��");
//	gets(s);
//	printf("\n�����ִ�sub��");
//	gets(sub);
//	printf("\n");
//	printf("%s��%s�г���%d��\n", sub, s, count(s, sub));
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

/*���³���Ĺ����ǣ� �Ӽ�����������ɸ�ѧ���ĳɼ��� �����븺���������룩 �� ͳ��
��ƽ���ɼ��� ���������ƽ���ֵ�ѧ���ɼ���*/

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

/* ���³����ӡ������ʽ��ͼ������ա�
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

/*1�� ������о��� 9 * 9 �˷��ھ����*/

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

/*2�� ����һ�� 3�w3 ���������� ����Խ���Ԫ��֮�͡�*/

//main()
//{
//	int a[3][3], i, j, sum = 0;
//
//	printf("����3X3�ľ���\n");
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
//	printf("�Խ���֮��Ϊ%d\n", sum);
//}

/*3�� �� 10 ��ѧ���� ÿ��ѧ�������ݰ���ѧ�ţ�stu_num�� 6 ���ַ��� �� s00101�� �� ������name��
8 ���ַ��� �� ���ſγ̵ĳɼ���score[3]�� ʵ�ͣ� ����ƽ���֣�avr�� ʵ�ͣ� ��ʼʱ����ֵ�� ����
���������� 10 ��ѧ�������ݣ� Ȼ���ټ���ÿ��ѧ�� 3 �ſγ̵�ƽ���֣� ��� avr �У� ����
���� 6 ��ѧ����������Ϣ��*/

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
//	printf("����ʮλѧ������Ϣ��\n");
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

//int a = 1;//ȫ�ֱ���a
//int f(int c)
//{
//	static int a = 2;//�ֲ���̬����a
//	c = c + 1;
//	return (a++) + c;
//}
//main()
//{
//	int i, k = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int a = 3;//�ֲ�����a
//		k += f(a);
//	}
//	k += a;//�˴�aΪȫ�ֱ���a
//	printf("%d\n", k);
//}
/*��������ͬ������*/
//int a = 1;//ȫ�ֱ���a
//int f(int c)
//{
//	static int b = 2;//�ֲ���̬����b
//	c = c + 1;
//	return (b++) + c;
//}
//main()
//{
//	int i, k = 0;
//	for (i = 0; i < 2; i++)
//	{
//		int c = 3;//�ֲ�����c
//		k += f(c);
//	}
//	k += a;//�˴�aΪȫ�ֱ���a
//	printf("%d\n", k);
//}

/*��дһ�������� ���� n Ϊż��ʱ�� ���ú����� 1/2+1/4+...+1/n,������ n Ϊ����ʱ��
���ú��� 1/1+1/3+...+1/n*/

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
//	printf("����n��");
//	scanf("%d", &n);
//	printf("\n%f\n", f(n));
//}

/*�������ĺ���sort���ú�����ѡ�񷨶�����a��С������������a��n��Ԫ��*/

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

/*���������ַ���s1��s2������s1��ɾ��s2�е��ַ������磬
s1Ϊ"abcaa63akdfk"��s2Ϊ"ayk5"���������к������bc63df��*/

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
//			while (s2[i] == s1[j])//ֻҪ��һ���ľ�һֱѭ���������if�ͻ��������һ����ֻ��ɾ��һ��
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

/*��2��n�ڵ���������*/

//void prime(int n); // ��������������
//int main()
//{
//    int n;
//    printf("������һ������2����Ȼ����");
//    scanf("%d", &n); // ������Ȼ��n
//    prime(n); // ��������������
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
//        if (flag == 1) // ���i������
//        {
//            printf("%d  ", i);
//        }
//    }
//}

/*ð������*/

//#define n 10
//main()
//{
//	int a[n] = { 9,8,5,4,7,3,6,0,1,2 }, i, j, temp;
//	int t = 0;
//	//printf("������10��������\n");
//	//for (i = 0; i < 10; i++)
//	//	scanf("%d", &a[i]);
//	for (i = 1; i < 10; i++)//һ������Ÿ��ֻ�
//		for (j = 0; j < n - i; j++)//�˴�j<n-iÿ���ֻض�����һ��
//		{
//			t++;
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j]; a[j] = a[j + 1]; a[j + 1] = temp;
//			}
//		}
//	printf("\n�ź����10������Ϊ��\n");
//	for (i = 0; i < 10; i++)
//		printf("%5d", a[i]);
//	printf("\n���д���%d\n", t);
//}

/*��ʽ������*/

//main()
//{
//	int a, b, c;
//	scanf("a=%db=%dc=%d", &a, &b, &c);
//	//�����ʽֻ����a=1b=2c=3<�س�>��������a=1<�س�>b=2<�س�>c=3<�س�>
//	printf("a=%db=%dc=%d", a, b, c);
//}

/*�ṹ�����ȷ����*/

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
//	//printf("%d\n", *p.id);//����
//	printf("%d\n", (*p).id);
//	printf("%d\n", p->id);
//}

//main()//��ά�����ʼ��
//{
//	int i = 0, j = 0;
//	int a[][4] = { 0,0 };//���ֳ�ʼ����δ��ʼ������Ĭ��Ϊ0��
//	int b[1][4];		 //δ��ʼ�������ֵ��
//	printf("%d", a[1][2]);
//}

//main()
//{
//	char s[10];
//	int a1, a2;
//	char c1, c2;
//	scanf("%d%c%d%c", &a1, &c1, &a2, &c2);
//	//1.������ʽ��1a<�ո�>2b<�س�>
//	//2.������ʽ��1a2b<�س�>
//	printf("%d\n%c\n%d\n%c\n", a1, c1, a2, c2);
//	//����������
//	//1
//	//a
//	//2
//	//b
//
//	//scanf("%s", s);
//	//printf("%s", s);
//}

/*�õݹ�����������ĳ��ĳ�е�ֵ*/

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

/*��C���Եݹ�����������"������"��ǰ10��*/

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

/*���õݹ飬����������"������"��ǰ10��*/

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
//	k = &p;//k���洢�����p�ĵ�ַ��
//	printf("%d  ", *(p++));
//	printf("%d\n", **k);
//}

//point(char* p)
//{
//	p += 3;//����ַ���Ը�ֵ�������ܸĵ�ַ��
//}
//main()
//{
//	char b[4] = { 'a','c','s','f' }, * pt = b;
//	point(pt);
//	printf(" % c\n", *pt);
//}

/*�ú���mypow(a,n)��a��n�η�*/

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

/*C ���Եݹ麯��,ʵ�ֽ������ 5 ���ַ����෴˳���ӡ����*/

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
//	b = (a++) + (a++) + (a++);//a++��ֵ���ڣ�������ż���ȥ��
//	printf("%d\n", b);
//	printf("%d\n", a);
//}

//main()
//{
//	int a = 3, b = 5;
//	printf("%d", a<<1);
//}

/*����ĳ��ĳ��ĳ�죬������Ǹ���ĵڼ���,"switch��ʽ"*/

//// �ж�ĳһ���Ƿ�Ϊ���꣬���򷵻�1�������򷵻�0
//int is_leap_year(int year) {
//    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//}
//
//// ����ĳ���·ݵ���������Ҫ������ݺ��·�
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
//// ���㵱ǰ������һ���еĵڼ���
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
//    printf("���������ڣ���ʽ���� �� �գ��ÿո�ָ����\n");
//    scanf("%d %d %d", &year, &month, &day);
//    printf("���ǽ���ĵ�%d��\n", day_of_year(year, month, day));
//    return 0;
//}

/*����ĳ��ĳ��ĳ�죬������Ǹ���ĵڼ���,"������ʽ"*/

//// �ж�ĳһ���Ƿ�Ϊ���꣬���򷵻�1�������򷵻�0
//int is_leap_year(int year) {
//    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//}
//
//// ���㵱ǰ������һ���еĵڼ���
//int day_of_year(int year, int month, int day) {
//    int i, days = 0;
//    // ����һ������洢ÿ���·ݶ�Ӧ������
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
//    printf("���������ڣ���ʽ���� �� �գ��ÿո�ָ����\n");
//    scanf("%d %d %d", &year, &month, &day);
//    printf("���ǽ���ĵ�%d��\n", day_of_year(year, month, day));
//    return 0;
//}

/*�ṹ������Ĺ�����*/

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

/*������֧����a,b,c��С��������������ע�⣺�ַ����ȽϺ���Ϊstrcmp();�ַ�����ֵ����Ϊstrcyp();*/

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
//	puts("qwe");puts("qwe");puts("qwe");//puts();�����ַ�������������Զ���һ��\n����
//}

/*�� n ����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ�������� 1 �� 3 �������������� 3 ����
�˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��*/

//main()
//{
//	int i, j, m, n = 0, a[50];
//	printf("����n\n");
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
//	printf("���һ������ԭ����%d��\n", a[i]);
//}

//#define nmax 50
//int main()
//{
//	int i, k, m, n, num[nmax];
//	printf("����������:");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		num[i] = i + 1;
//	i = 0;
//	k = 0;
//	m = 0;
//	while (m < n - 1)
//	{
//		if (num[i] != 0) k++; //����
//		if (k == 3)
//		{
//			num[i] = 0; //�˳�
//			k = 0;
//			m++; //�˳���������
//		}
//		i++;
//		if (i == n) i = 0;
//	}
//	i = 0;
//	while (num[i] == 0) i++;
//	printf("���µ���ԭ����%d��\n", num[i]);
//	return 0;
//}

/*��дһ���� int strcmp_u(char *p1,char *p2)��ʵ�������ַ����ıȽϡ����ַ��� 1=�ַ���
2 ʱ������ 0�����ַ��� 1 ���ַ��� 2 ʱ�������������ߵ�һ����ͬ�ַ��� ASCII ��Ĳ�
ֵ*/

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
//	printf("%d\n", a);//����������
//	printf("%d\n", (int)a);
//}

//main()
//{
//	int a = 1, b = 2, c = 3, d = 4, e = 5;
//	printf("%d\n", a > b ? a : d > e ? d : e);//5
//	printf("%d\n", a > b ? a : (d > e ? d : e));//5
//	printf("%d\n", (a > b ? a : d) > e ? d : e);//5
//}

/*��дһ���� int strcpy_u(char *p1,char *p2)��ʵ�������ַ����ĸ��ơ�*/

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

/*��д��������һ�������� 10 λ�����������жϸ����Ƿ��ǻ������������������ֶ�
�ƣ��� 12321,123321 �ǻ���������Ҫ��������ʵ�֡�*/

//main()
//{
//	int a[10], i, j, flag = 1, m = 5;
//	long n, num;
//	while (m--)
//	{
//		printf("����һ��������ʮλ����:");
//		scanf("%d", &n);
//		num = n;
//		for (i = 0; n != 0; n /= 10, i++)a[i] = n % 10;
//		for (j = 0; j < i / 2; j++)
//			if (a[j] != a[i - j - 1])flag = 0;
//		if (flag)printf("%ld�ǻ�����\n", num);
//		else printf("%ld���ǻ�����\n", num);
//	}
//}

//main()
//{
//	printf("%.1f\n", 3.159);
//	printf("%.1f\n", 3.161);
//}

/*���ӳ��ң�ÿ���һ���һ����ʮ��ֻʣһ�����ʵ�һ��ժ����*/

//main()
//{
//	int x = 1, d;
//	for (d = 9; d >= 1; d--)
//	{
//		x = (x + 1) * 2;
//	}
//	printf("��һ��ժ%d�����ӡ�\n", x);//1534��
//}
//main()
//{
//	int day, x1, x2;
//	day = 9;
//	x2 = 1;
//	while (day > 0)
//	{
//		x1 = (x2 + 1) * 2;/*��һ����������ǵ�2����������1���2��*/
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

/*��д����ɾ��һά�������ظ����ֵ�Ԫ�ء�*/

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

/*����ƹ����ӽ��б������������ˡ��׶�Ϊ a,b,c ���ˣ��Ҷ�Ϊ x,y,z ���ˡ��ѳ�ǩ����
�����������������Ա���������������� a ˵������ x �ȣ� c ˵������ x,z �ȣ�������
�ҳ��������ֵ�������*/

//int main()
//{
//	char i, j, k;/*i �� a �Ķ��֣� j �� b �Ķ��֣� k �� c �Ķ���*/
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
//	z = x-- || x++;//||���Ϊ1ֱ�Ӷ�·��
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
//	scanf("%s", a);//���� �ո񣬻س���tabֹͣ���룻
//	printf("%s", a);
//}

/*���г������ǣ���֤һ�����ڵ��� 6 ż�����ܱ�ʾΪ��������֮�͡�����ա�*/

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

/*����һ����д��ĸ�������ĸ������ǰ�����ĸ�ͺ������ĸ������������ĸΪ A
�� Z����ֱ������ʾ��Ϣ��û��ǰ�����ĸ����û�к������ĸ����*/

//main()
//{
//	char ch;
//	int m = 5;
//	printf("����һ����д��ĸ��");
//	ch = getchar();
//	if (ch > 'A' && ch < 'Z')
//	{
//		printf("ǰ����ĸΪ%c�������ĸΪ%c\n", ch - 1, ch + 1);
//	}
//	else if (ch == 'A')
//	{
//		printf("û��ǰ����ĸ�������ĸΪ%c\n", ch + 1);
//	}
//	else if (ch == 'Z')
//	{
//		printf("ǰ����ĸΪ%c��û�к����ĸ\n", ch - 1);
//	}
//	else
//	{
//		printf("�������д��ĸ��\n");
//	}
//}

/*һ��� 100m �߶��������£�ÿ����غ�����ԭ���߶ȵ�һ�룬�����¡������� 10
�����ʱ�������������ף��� 10 �η�����ߣ�*/

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
//	printf("��%d�����һ������%lf�ף���%d�η����߶�Ϊ%lf��", x, s, x, h);
//}

/*��дһ������void fun(char *ss)�����Ĺ����ǣ���ss��ָ�ַ����������±�Ϊ����λ
���ϵ���ĸת��Ϊ��д(���λ���ϲ�����ĸ����ת��)��*/

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
//	char s[] = "jashdkxuzchiq";//���ֱ�Ӷ���char *s = "jashdkxuzchiq";���޸�*sʱ�����ֱ����"�������쳣: д�����Ȩ�޳�ͻ��"
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

/*������һ�ӱ�������֪���ж����ˣ�����ʿ���Ŷӱ��������� 1 �� 5 ��������ĩһ��ʿ
��������Ϊ 1������ 1 �� 6 ��������ĩһ��ʿ��������Ϊ 5������ 1 �� 7 ��������ĩһ��ʿ
��������Ϊ 4������ٰ��� 1 �� 11 ��������ĩһ��ʿ��������Ϊ 10����̣��ﺫ�������
����ʿ����*/

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
//			printf("������%d��ʿ��\n", n);//2111��
//			break;
//		}
//	}
//}

/*��д��������һ�в����� 80 ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ�
����*/

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
//	printf("�� %d �����ʡ�\n", num);
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

/*��100-200֮�������������һ��ʮ�����*/

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

/*��дint fun(char* ss, char c)�����ǣ�����ַ�����ָ���ַ��ĸ����������ش�ֵ*/

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

/*��д���� fun �����ǣ��� Fibonacci �����д��� t ����С��һ����������ɺ������ء�
���� Fibonacci ���� F(n)�Ķ���Ϊ��F(0)=0��F(1)=1,F(n)=F(n��1)��F(n��2) ���磺��
t = 1000 ʱ������ֵΪ��1597��*/

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
//	printf("����һ������");
//	scanf("%d", &x);
//	printf("����%d�ĵ�һ��Fibonacci����%d\n", x, fun(x));
//}

/*쳲�������������*/

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
//	b = (a++) + (a++) + (a++);//a++ֻ���ڣ�������һ�̼���ȥ���ڣ�֮ǰȫ������,��ʹ�������š�
//	printf("%d", b);
//	return 0;
//}

/*�Զ����������������Լ�%d�������������*/

//main()
//{
//	int a;
//	float b = 2.77;
//	a = 2.7;//��int�͸�ֵ�����������Զ�ȥ��С����������С�
//	printf("%d\n", a);
//	printf("%d\n", b);//print������%d�����ʽ�������������
//	printf("%d\n", 2.77);//print������%d�����ʽ�������������
//
//	printf("%.1f\n", b);//print������%.1f�����ʽ,���Զ���������
//	printf("%.1f\n", 2.77);//print������%.1f�����ʽ,���Զ���������
//}

//main()
//{
//	char* p = "1201230";
//	while (*p)//��*pָ������ַ�������ʱ��while��������*p��*p!='\0'ͬ���
//	{
//		printf("%c", *p++);
//	}
//}

/*������������N����Ӧ���N�µ�Ӣ����ĸ��N����1-12֮�䣬�������"illegal mounth"*/

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
//		printf("��������N��");
//		scanf("%d", &n);
//		printf("%d�µ�Ӣ��Ϊ%s\n", n, mounth_name(n));
//	}
//}

/*�Ӽ���������һ���ַ����������ַ���ת����������������Զ��庯��long fun(char *p)����ɣ�
eg�������ַ�����-1234�����������-1234*/
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
//	printf("����һ���ַ�����");
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
//	printf("\n");//����pa,pb,pc,pd����ָ�����ͣ�
//}

//void fun(char* w, int m)
//{
//	char s, * p1, * p2;
//	p1 = w; p2 = w + m - 1;
//	while (p1 < p2)
//	{
//		s = *p1++; *p1 = *p2--; *p2 = s;//���ǳ���Ľ�����
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
//	printf("%d", printf("%d", printf("********************")));//printf����ֵΪ������ַ�������
//}

//main()
//{
//	int x = 5, y = 5;
//	int b, c;
//	b = --x + --x + --x + --x + --x;//�Ȱ�����--x����ִ�����Ժ��ٰ�x��ֵ��ӣ�
//	c = --y + --y + ++y + y++ + y++ + y--;
//
//	printf("%d\n", x);
//	printf("%d\n", y);
//	printf("%d\n", b);
//	printf("%d\n", c);
//}

//main()
//{
//	float a;
//	scanf("%3.2f", &a);//����
//	scanf("%3f", &a);
//	printf("%f", a);
//}

/*���Ѿ��ź�����ַ���a����s�е�ÿ���ַ���������Ĺ��ɲ��뵽a�С�*/

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

/*�Ӽ�������һ���ַ���ͳ�������ж��ٸ����ʣ�ÿ�������ÿո�����*/

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
//	printf("��%d�����ʡ�\n", num);
//}

/*����%lx�͵����*/

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

/*"ˮ�ɻ���"һ����λ������������������Ϊ�������*/

//main()
//{
//	int i, a, b, c;
//	for (i = 100; i < 1000; i++)
//	{
//		a = i / 100;//��λ
//		b = i / 10 % 10;//ʮλ
//		c = i % 10;//��λ
//		if (i == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%4d", i);
//		}
//	}
//}

/*���� 10 �����������䴺���ġ�����ĸ����ڵ�ƽ���¶�ֵ����д���򣬶�����ʵ�
�ṹ�壬���� 10 �����������ļ��¶ȣ�����������е�ȫ��ƽ���¶ȣ�������ƽ���¶ȴ�
�͵��ߵ�˳��������������ļ��¶ȼ�ȫ��ƽ���¶ȡ�*/

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
//	printf("����ʮ�����е���Ϣ��\n");
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

/*�ò��뷨������a���н�������*/

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
//		a[j+1] = m;
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
