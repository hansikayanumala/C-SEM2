#include<iostream>
using namespace std;
class arecord{
	public:
		int rollno;
		int marks;
		void read(){
	cin >> rollno;
	cin >>marks;
	}
};
class srecord{
	public:
		string name;
		int score;
		void readdetails(){
		
		cin>>name;
		cin>>score;
	}
};
class student:public arecord,public srecord
{
	public:
	void display(arecord a,srecord b){
		cout<<"roll no: "<<a.rollno<<endl;
		cout<<"Marks: "<<a.marks<<endl;
		cout<<"Name: "<<b.name<<endl;
		cout<<"score: "<<b.score<<endl;
	}
	void overallscore(arecord a,srecord s){
		int c=a.marks+s.score;
		cout<<"Total score: "<<c<<endl;
	}
};
int main(){
	arecord a1;
	srecord b1;
	student s1;
	a1.read();
	b1.readdetails();
	s1.display(a1,b1);
	s1.overallscore(a1,b1);
}
