#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float f,c;
	cout<<"\n Enter the temperature in Fahrenheit = ";
	cin>>f;
	c=(f-32)*5/9;
	cout<<"\n The temperature in celsius = "<<c<<" 'c";
	getch();
}
