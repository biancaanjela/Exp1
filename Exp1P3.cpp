#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

int main()

{ 

double NetBalance;
double Payment;
double d1;
double d2;
double AverageBalance;
double Interest;
	cout<<"Enter the data asked below\n";
	cout<<"Balance in bill:\n";
	cin>>NetBalance;
	cout<<"Payment:\n";
	cin>>Payment;
	cout<<"No of days in billing cycle:\n";
	cin>>d1;
	cout<<"No of days after payment was done before the billing cylce:\n";
	cin>>d2;
	AverageBalance = (NetBalance*d1-Payment*d2)/d1;
	Interest = (AverageBalance * 0.0152);
	cout<<setprecision(2)<<fixed;
	cout<<"The total interest is"<<" "<<"$"<<Interest<<endl;
	

	getch();
	return 0;
	
}
