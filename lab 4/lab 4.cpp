#define _USE_MATH_DEFINES 
#include <cmath>
#include <iostream>
#include <stdio.h>
#include <locale>

using namespace std;
int main()
{
{
	
	float a,b,P,S,c;
	setlocale(LC_ALL, "Russian");
	cout<<"������� ������� �������������� ����� ����� ��� �������� � �������"<<"\n"<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	P=2*(a+b);
	S=a*b;
	cout<<"�������� �="<<P<<"\n������� S="<<S;
}
{
	float L,d;
	cout<<"\n\n������� ������� (d) ���������� ����� ����� ��� ������ "<<"\n"<<"d=";
	cin>>d;
	L=M_PI*d;
	cout<<"������ L="<<L;
}
{
	float a,b,c;
	cout<<"\n\n������� � � b ����� ����� ������� ��������������"<<"\n"<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	c=(a+b)/2;
	cout<<"������� �������������� ����� a � b="<<c;
}
{
	float x,y,a,b,c,d;
	cout<<"\n\n������� ��� �� ������� ����� ����� ����� �����, ��������, ������������ � ������� �� ���������"<<"\nx=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	a=(x*x)+(y*y);
	b=(x*x)-(y*y);
	c=(x*x)*(y*y);
	d=(x*x)/(y*y);
	cout<<"����� ="<<a<<"\n�������� ="<<b<<"\n������������ ="<<c<<"\n������� ="<<d;
	
}
{
	float x,y,a,b,c,d;
	cout<<"\n\n������� ��� �� ������� ����� ����� ����� �����, ��������, ������������ � ������� �� �������"<<"\nx=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	a=fabs(x)+fabs(y);
	b=fabs(x)-fabs(y);
	c=fabs(x)*fabs(y);
	d=fabs(x)/fabs(y);
	cout<<"����� ="<<a<<"\n�������� ="<<b<<"\n������������ ="<<c<<"\n������� ="<<d;
}
	return 0;
}
