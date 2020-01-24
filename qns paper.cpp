#include<iostream>
#include<conio.h>
using namespace std;
class fac
{
	private:
		int a,temp=1;
	public:
		fac(int b)
		{
			a=b;
			}	
		void display()
		{
			for(int i=a;i>=1;i--)
			{
				temp=temp*i;
			}
			cout<<"\n Factorial of a "<<a<<" is : "<<temp;
			}	
};

main()
{
	fac obj(5);
	obj.display();
	getch();
}
