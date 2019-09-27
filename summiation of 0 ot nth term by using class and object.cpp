#include<iostream>
#include<conio.h>
using namespace std;
class special
{
	private:
		int i,n,sum;
	public:
		special()
		{
			sum=0;
			}	
		void get()
		{
			cout<<"\n Enter the nth term =";
			cin>>n;
			}	
		void show()
		{
			for(i=0;i<=n;i++)
			{
				sum=sum+i;
			}
			cout<<"\nThe sum of 0 to nth term is ="<<sum;
			}	
};

main()
{
	special s;
	s.get();
	s.show();
	getch();
}
