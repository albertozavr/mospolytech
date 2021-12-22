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
	cout<<"введите стороны прямоугольника чтобы найти его периметр и площадь"<<"\n"<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	P=2*(a+b);
	S=a*b;
	cout<<"Периметр Р="<<P<<"\nПлощадь S="<<S;
}
{
	float L,d;
	cout<<"\n\nвведите диаметр (d) окружности чтобы найти его длинну "<<"\n"<<"d=";
	cin>>d;
	L=M_PI*d;
	cout<<"длинна L="<<L;
}
{
	float a,b,c;
	cout<<"\n\nвведите а и b чтобы найти среднее арифметическое"<<"\n"<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	c=(a+b)/2;
	cout<<"среднее арифметическое чисел a и b="<<c;
}
{
	float x,y,a,b,c,d;
	cout<<"\n\nвведите два не нулевых числа чтобы найти сумму, разность, произведение и частное их квадратов"<<"\nx=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	a=(x*x)+(y*y);
	b=(x*x)-(y*y);
	c=(x*x)*(y*y);
	d=(x*x)/(y*y);
	cout<<"сумма ="<<a<<"\nразность ="<<b<<"\nпроизведение ="<<c<<"\nчастное ="<<d;
	
}
{
	float x,y,a,b,c,d;
	cout<<"\n\nвведите два не нулевых числа чтобы найти сумму, разность, произведение и частное их модулей"<<"\nx=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	a=fabs(x)+fabs(y);
	b=fabs(x)-fabs(y);
	c=fabs(x)*fabs(y);
	d=fabs(x)/fabs(y);
	cout<<"сумма ="<<a<<"\nразность ="<<b<<"\nпроизведение ="<<c<<"\nчастное ="<<d;
}
	return 0;
}
