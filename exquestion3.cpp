#include <iostream>
using namespace std;
class AcademicRecord
{
protected:
    int rollNo;
    int marks;

public:
    void readAcademic()
    {
        cout << "enter rollno: ";
        cin >> rollNo;
        cout << "marks: ";
        cin >> marks;
    }
};
class SportsRecord
{
private:
    string sportName;
    int sportScore;
public:
    void readSports()
    {
        cout << "enter sport name: ";
        cin >> sportName;
        cout << "enter sports score: ";
        cin >> sportScore;
    }
};
class Student : public AcademicRecord, public SportsRecord
{
public:
    void display()
    {
        int total = marks + sportScore;

        cout << "\nstudent details\n";
        cout << "rollno: " << rollNo << endl;
        cout << "marks: " << marks << endl;
        cout << "sport: " << sportName << endl;
        cout << "sports score: " << sportScore << endl;
        cout << "overall score: " << total << endl;
    }
};

int main()
{
    Student s;
    s.readAcademic();
    s.readSports();
    s.display();
    return 0;
}
