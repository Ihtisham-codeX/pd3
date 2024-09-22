#include<iostream>
using namespace std;
main()
{
	int a_price,c_ticket,n_adult,n_child,t_amount,adult,child,r_amount;
	float donate_per,donation;
	string movie;
	cout<<"Enter the movie name:";
	cin>> movie;
	cout<<"Enter the adult ticket price:";
	cin>> a_price;	
	cout<<"Enter the child ticket price:";
	cin>> c_ticket;
	cout<<"Enter the number of adult ticket lost:";
	cin>> n_adult;
	cout<<"Enter the number of child ticket lost:";
	cin>> n_child;	
	cout<<"Enter the percentageamount to be donated to charity:";
	cin>> donate_per;	
	adult=a_price*n_adult;	
	child=c_price*n_child;
	t_amount=adult+child;
	donation=(t_amount*donation_per)/100;
	r_amount=t_amount-donation;
	cout<<"Movie :"<< movie;
	cout<<"Total amount generated from ticket sales:"<< t_amount;	
	cout<<"Donation to charity:"<< donation;
	cout<<"Remaining amount after Charity:"<< r_amount;
	
	
 	
	
}
