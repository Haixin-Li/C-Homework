#include"stdlib.h"
#include"math.h"
#include"stdio.h"
#include<iostream>
using namespace std;
void m(int a,int b,int c)
{
	float x1, x2;
	x1 = (-b + sqrt(b*b - 4 * a*c)) / (2 * a);
	x2 = (-b - sqrt(b*b - 4 * a*c)) / (2 * a);
	cout << "���̵ĸ�x1Ϊ:" << x1 << endl << "���̵ĸ�x2Ϊ:" << x2<<endl;
}
void n(int a, int b, int c)
{
	float x;
	x = (-b) / (2 * a);
	cout<<"���̵ĸ�Ϊ��" <<x<< endl;
}
void f(int a, int b, int c)
{
	cout << "������ʵ��" << endl;
}
void area(float x, float y, float z)
{
	float q,area;
	q = (x + y + z) / 2;
	area = sqrt(q*(q - x)*(q - y)*(q - z));
	cout << "�����ε����Ϊ��" << area << endl;
}
void w(int y1, int m, int d)
{
	int i, d1, n, w, b, a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	for (d1 = d, i = 1; i < m; i++)d1 += a[i];
	b = y1+ (y1- 1) / 4 - (y1 - 1) / 100 + (y1 - 1) / 400;
	b %= 7;
	w = (b + d1 - 1) % 7;
	n = (d1 - 1) / 7 + (w < d) + 1;
	cout<< y1<< m<< d<< "����һ��ĵ�"<<n<<"��"<< endl;
}
int main()
{
	int a, b, c;
	cout << "������a,b,c��ֵ" << endl;
	cin >> a >> b >> c;
	if (b*b - 4 * a*c > 0)
		m(a, b, c);
	if (b*b - 4 * a*c == 0)
		n(a, b, c);
	if (b*b - 4 * a*c < 0)
		f(a, b, c);
	float x, y, z;
	cout << "�����������ε������߳�" << endl;
	cin >> x >> y >> z;
	if (x + y <= z || fabs(x - y) >= z)
		cout << "����������޷�����������" << endl;
	else
		area(x, y, z);
	int i,y1,m,d,d1, n, w, b1,sum=0,leap,p[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	char c1, c2;
	cin >> y1>>c1 >> m>>c2 >> d;
	if (y1 < 1 || m < 1 || m>12 || d<1 || d>p[m])
	{
		cout << "�������������" << endl;
		return 0;
	}
	for (d1 = d, i = 1; i < m; i++) d1 += p[i];
	b1 = y1 + (y1 - 1) / 4 - (y1 - 1) / 100 + (y1 - 1) / 400;
	b1 %= 7;
	w = (b1+ d1 - 1) % 7;
	n = (d1 - 1) / 7 + (w < d) + 1;
	cout << y1 <<"-"<< m <<"-"<< d << "����һ��ĵ�" << n << "��" << endl;
	switch (m)
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break; 
	case 3:sum = 59; break;
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default:cout << "�������";  
	break;
	}
	sum = sum + d;
	if ((y1 % 400 == 0 || (y1 % 4 == 0 && y1 % 100 != 0)) && m > 2)
	  sum++;
	cout << "������һ��ĵ�" << sum << "��"<<endl;
	system("pause");
}