#include<iostream>
#include<conio.h>
using namespace std;
class table
{
	int i,n;
	public:
		void get()
		{
			cout<<"\n Enter the no. that you want to show table =";
			cin>>n;
		}
		void show()
		{
			for(i=1;i<=10;i++)
			{
				cout<<"\n"<<n<<"X"<<i<<"="<<n*i;
			}
		}
}t;

main()
{
	t.get();
	t.show();
	getch();
}
