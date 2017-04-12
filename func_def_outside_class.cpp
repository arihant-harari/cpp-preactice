#include <iostream>
#include <string.h>

using namespace std;

class student
{
    string name;
    int rno;

    public:
    student(string my_name, int my_rno ) :  name(my_name), rno(my_rno)
    {

    }
    string get_name();
    int get_rno();
};

int student::get_rno()
{
    return rno;
}

string student::get_name()
{
    return name;
}

int main()
{
    class student s("arihant", 9);

    cout<<"\nroll number:"<<s.get_rno()<<endl;
    cout<<"\nname:"<<s.get_name()<<endl;

    return 0;
}
