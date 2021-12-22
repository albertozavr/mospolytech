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
	cout<<"ââåäèòå ñòîðîíû ïðÿìîóãîëüíèêà ÷òîáû íàéòè åãî ïåðèìåòð è ïëîùàäü"<<"\n"<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	P=2*(a+b);
	S=a*b;
	cout<<"Ïåðèìåòð Ð="<<P<<"\nÏëîùàäü S="<<S;
}
{
	float L,d;
	cout<<"\n\nââåäèòå äèàìåòð (d) îêðóæíîñòè ÷òîáû íàéòè åãî äëèííó "<<"\n"<<"d=";
	cin>>d;
	L=M_PI*d;
	cout<<"äëèííà L="<<L;
}
{
	float a,b,c;
	cout<<"\n\nââåäèòå à è b ÷òîáû íàéòè ñðåäíåå àðèôìåòè÷åñêîå"<<"\n"<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	c=(a+b)/2;
	cout<<"ñðåäíåå àðèôìåòè÷åñêîå ÷èñåë a è b="<<c;
}
{
	float x,y,a,b,c,d;
	cout<<"\n\nââåäèòå äâà íå íóëåâûõ ÷èñëà ÷òîáû íàéòè ñóììó, ðàçíîñòü, ïðîèçâåäåíèå è ÷àñòíîå èõ êâàäðàòîâ"<<"\nx=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	a=(x*x)+(y*y);
	b=(x*x)-(y*y);
	c=(x*x)*(y*y);
	d=(x*x)/(y*y);
	cout<<"ñóììà ="<<a<<"\nðàçíîñòü ="<<b<<"\nïðîèçâåäåíèå ="<<c<<"\n÷àñòíîå ="<<d;
	
}
{
	float x,y,a,b,c,d;
	cout<<"\n\nââåäèòå äâà íå íóëåâûõ ÷èñëà ÷òîáû íàéòè ñóììó, ðàçíîñòü, ïðîèçâåäåíèå è ÷àñòíîå èõ ìîäóëåé"<<"\nx=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	a=fabs(x)+fabs(y);
	b=fabs(x)-fabs(y);
	c=fabs(x)*fabs(y);
	d=fabs(x)/fabs(y);
	cout<<"ñóììà ="<<a<<"\nðàçíîñòü ="<<b<<"\nïðîèçâåäåíèå ="<<c<<"\n÷àñòíå ="<<d;
}
	return 0;
}
