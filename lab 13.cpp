#include<iostream>
#include<locale.h>
using namespace std; 
int main()
{
	setlocale(LC_ALL, "Russian");
	float price, k;
	cout << "1 �� ������ ����� = ";
	cin >> price;
	for (k = 0.1; k < 1.1; k += 0.1)
		cout << k <<" �� ������ ����� = "<<k*price<<endl;
	return 0;
}
