#include<iostream>
using namespace std;
class bankacc{
	private:
		float balance;
	public:
		bankacc(float b){
			balance=b;
		}
	friend class accmanager;
};
class accmanager{
	public:
	void display(bankacc b1){
		cout<<"Balance is: "<<b1.balance<<endl;
	}
};
int main(){
	bankacc b1(1000);
	accmanager a;
	a.display(b1);
	return 0;
}
