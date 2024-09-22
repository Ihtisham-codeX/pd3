#include<iostream>
using namespace std;
main()
{
	float size,cost_bag,area,cost_per_pound,cost_per_square;
	cout<<"Enter the size of fertilizer bag in pounds:";
	cin>> size;
	cout<<"Enter the cost of bag:";
	cin>> cost_bag;	
	cout<<"Enter the area in square feet that can be covered by bag:";
	cin>> area;
	cost_per_pound=cost_bag/size;
	cost_per_square=cost_of_bag/area;
	cout<<"Cost of fertilizer per pound:"<< cost_per_pound;	
	cout<<"Cost of fertilizing per square:"<< cost_per_pound;	
	}
