#include <iostream>
using namespace std;

class Student
{
    string Name;
    int age;

public:
    int rollNumber;
    char sec;
    void display()
    {
        cout << Name << " " << age << " " << rollNumber << " " << sec << endl;
    }
    string getname()
    {
        return Name;
    }
    int getage()
    {
        return age;
    }
    void setName(string a)
    {
        Name = a;
    }
    void setage(int a)
    {
        age = a;
    }
};

int main()
{
    Student s1;
    Student *s2 = new Student;

    s1.setName("gopi");
    s1.setage(19);
    s1.rollNumber = 99;
    s1.sec = 'B';
    s1.display();

    s2->setName("Ajay");
    s2->setage(19);
    s2->rollNumber = 32;
    s2->sec = 'B';
    s2->display();
    delete s2;
    return 0;
}
