#include<iostream>
using namespace std;
main()
{
	int n,d1,d2,d3,d4;
	cout<<"enter a four digit number";
	cin>> n;
	d1=(n/1000)%10;
	d2=(n/100)%10;
	d3=(n/10)%10;
	d4=(n/1)%10;
	cout<< "sum of each digit of the given number is"<< d1+d2+d3+d4;
}