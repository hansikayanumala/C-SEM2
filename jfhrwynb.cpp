#include<iostream>
using namespace std;
class employee{
	public:
		int id;
		string name;
		float salary;
		void readdetails(){
			cin>>id;
			cin>>name;
			cin>>salary;
		}
		void Display(){
			cout<<"Employeeid "<<id<<endl;
			cout<<"Name is: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
};
class manager:public employee{
	public:
		float allowance;
		
		float totalsalary(employee e )
		{
			cin>>allowance;
			float c=e.salary+allowance;
			cout<<"Total salary: "<<c<<endl;
			
		}
		void display(){
			cout<<"Allowance is: "<<allowance<<endl;
		    
			
		}
		
};
int main(){
	employee e1;
	manager m;
	e1.readdetails();
	
	m.totalsalary(e1);
	e1.Display();
	m.display();
}
