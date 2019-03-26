#include <iostream>
#include <conio.h>
using namespace std;

int main()

{ 
int TicketPrice, NumberOfTicketsSold, Product;
	cout<<"Enter the required data below\n";
	cout<<"Ticket Price:\n";
	cin>>TicketPrice;
	cout<<"No of Tickets Sold:\n";
	cin>>NumberOfTicketsSold;
Product=NumberOfTicketsSold*TicketPrice;
cout<<"Total income from the tickets sold was"<<" "<<"$"<<Product<<"."<<endl;
	getch();
	return 0;
	
}
