#include<iostream>
#include<stdio.h>
using namespace std;

class emp{
	private:
		string name;
		int id;
		int salary;
		
	public:
		void setvalue(string n,int e,int s)
		{
		   name=n;
		   id=e;
		   salary=s;
		}
	
		
};

int main()
{
	emp obj1[3];
	int id,salary[3];
		int i=0,j=0,a=0;
	string name;
			for(i=0;i<3;i++)
			{
				
				cout<<"Enter "<<i+1<<" employee name"<<endl;
				cin>>name;
				fflush(stdin);
				cout<<"Enter "<<i+1<<" employee id"<<endl;
				cin>>id;
				fflush(stdin);
				cout<<"Enter "<<i+1<<" employee salary"<<endl;
				cin>>salary[i];
				fflush(stdin);
				obj1[i].setvalue(name,id,salary[i]);
			}
			
		
			for(i=0;i<3;i++)
			{
				a=0;
				for(j=i+1;j<3;j++)
				{
					if(salary[i]<salary[j])
					{
						a=salary[i];
						salary[i]=salary[j];
						salary[j]=a;
					}
				}
			
			}
			cout<<"Employee with highest salary is: "<<salary[0]<<endl;
			cout<<"Employee name with highest salary: "<<name<<endl;
			
	//obj1.setvalue();
	return 0;
}
