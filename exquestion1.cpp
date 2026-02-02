#include <iostream>
using namespace std;
class AccountManager;  
class BankAccount
{
private:
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }
    friend class AccountManager;
};
class AccountManager
{
public:
    void show(BankAccount &a)
    {
        cout << "Balance: " << a.balance << endl;
    }

    void add(BankAccount &a, int amt)
    {
        a.balance += amt;
    }

    void deduct(BankAccount &a, int amt)
    {
        a.balance -= amt;
    }
};
int main()
{
    BankAccount acc(1000);
    AccountManager mgr;
    mgr.show(acc);
    mgr.add(acc, 500);
    mgr.show(acc);
    mgr.deduct(acc, 200);
    mgr.show(acc);
    return 0;
}
