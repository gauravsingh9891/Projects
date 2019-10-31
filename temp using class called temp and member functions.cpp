#include<iostream>
#include<conio.h>
using namespace std;
class temp
{
	private:
		float f,c;
	public:
	 void get_temp()
	 {
	 	cout<<"\n Enter the temperture in Fahrenhiet = ";
	 	cin>>f;
		 }	
		void show()
		{
			c=((f-32)*5)/9;
			cout<<"\n Temperture in Celsius is = "<<c;
		 } 
}obj;

main()
{
	obj.get_temp();
	obj.show();
	getch();
}
