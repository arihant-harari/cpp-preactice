#include <iostream>
#include <string.h>

using namespace std;

class student
{
        string name;
        int rno;

    public:

        student(string my_name, int my_rno) : name(my_name), rno(my_rno)
        {
            //strcpy(this->name, name);
            //this->rno = rno;
        }

        ~student()
        {
            cout<<"\ndestructor called"<<endl;
        }

        int get_details(class student&);
};

int student::get_details(class student &s)
{
    cout<<"\nstudent name : "<<s.name;
    cout<<"\nstudent rno : "<<s.rno<<endl;

    s.name = "harari";

    return 0;
}

int main()
{
    class student s("arihant", 9);
    s.get_details(s);
    s.get_details(s);

    return 0;
}
