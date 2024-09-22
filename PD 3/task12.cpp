#include<iostream>
using namespace std;
main()
{	int sq_meter,width,height,walls;
 	cout<<"Nmuber of square of meters you can paint:";
	cin>> sq_meter;
	cout<<"Width of single wall:";
	cin>> width;
	cout<<"Height of single wall:";
	cin>>height;
	walls=sq_meter/(height*width);
	cout<<"Number of walls you can paint:"<< walls;
}


	