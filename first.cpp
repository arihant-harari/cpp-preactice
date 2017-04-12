#include <iostream>
#include <string.h>

using namespace std;

class student
{
        char name[50];
        int rno;

    public:

        student(const char *name, int rno)
        {
            strcpy(this->name, name);
            this->rno = rno;
        }

        ~student()
        {
            cout<<"\ndestructor called"<<endl;
        }

        int get_details(class student *);
};

int student::get_details(class student *s)
{
    cout<<"\nstudent name : "<<s->name;
    cout<<"\nstudent rno : "<<s->rno<<endl;

    return 0;
}

int main()
{
    class student s("arihant", 9);
    s.get_details(&s);

    return 0;
}
