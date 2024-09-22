#include<iostream>
using namespace std;
int main()
{
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,add1,mul,sub,add2,sub2;
	cout<<"Enter any 15 integers:";
	cin>> n1 >> n2>> n3>> n4>>n5>>n6 >>n7 >>n8>> n9>> n10>> n11>> n12>> n13>> n14 >> n15;
	add1=n1+n2+n3+n4+n5;
	mul=n6*n7*n8*n9*n10;
	sub=n11-n12-n13-n14-n15;
	add2=add1+mul;
	sub2=add2-sub;
	cout<<"Final result is"<< sub2;


}