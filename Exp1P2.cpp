#include <iostream>
#include <conio.h>
#include<iomanip>

using namespace std;

int main()

{ 
double Mass;
double Density;
double Volume;
	cout<<"Enter the data needed below\n";
	cout<<"Mass:\n";
	cin>>Mass;
	cout<<"Density:\n";
	cin>>Density;
Volume=Mass/Density;
cout<<setprecision(2)<<fixed;
cout<<"Total Volume is"<<" "<<Volume<<" "<<"cubic cm."<<endl;
	getch();
	return 0;
	
}
