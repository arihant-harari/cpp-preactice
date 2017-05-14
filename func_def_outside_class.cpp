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
    const string get_name();
    const int get_rno();
};

const int student::get_rno()
{
    return rno;
}

const string student::get_name()
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
