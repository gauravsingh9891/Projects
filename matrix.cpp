#include<iostream>
#include<conio.h>
using namespace std;
class Matrix
{
	private:
		int a[5][5],i,j,m,d1_sum,d2_sum;
	public:
		
		Matrix()	//Default constructor
		{
			d1_sum=0;
			d2_sum=0;
			}
			
	void calculate()
	{
		cout<<"\n Enter the size of Matrix :";
		cin>>m;
		cout<<"\n Enter the element of matrix in row wise : \n\n"; 
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==j)
				d1_sum+=a[i][j];
				if(i+j==(m-1))
				d2_sum+=a[i][j];
			}
		}
	}
	
	void display()
	{
		cout<<"\nElements of Matrix : \n";
		for(i=0;i<m;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<a[i][j]<<"\t";
			}
			cout<<endl;
		}
		
		cout<<"\n The sum of 1st diagonal elements : "<<d1_sum;
		cout<<"\n The sum of 2nd diagonal elements : "<<d2_sum;
			}		
				
};
main()
{
	Matrix obj;
	obj.calculate();
	obj.display();
	getch();
}
