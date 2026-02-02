#include <iostream>
using namespace std;
class Student
{
private:
  int rollNo;
  int marks;

public:
string collegeName;
Student(int r, int m)
{
    rollNo = r;
    marks = m;
}
void display()
{
   cout << "college name: " << collegeName << endl;
   cout << "rollno: " << rollNo << endl;
   cout << "marks: " << marks << endl;
   cout << endl;
}
};
int main()
{
    Student s1(101, 85);
    Student s2(102, 90);

    s1.collegeName = "ABC College";
    s2.collegeName = "ABC College";

    s1.display();
    s2.display();

    return 0;
}
