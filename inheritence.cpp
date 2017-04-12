#include <iostream>
using namespace std;
class vehicle
{
    char number[50];
    long license;
    int year;

    public:
    vehicle(long my_license, int my_year = 2017) : license(my_license), year(my_year)
    {
        cout<<"\nyear:"<<year<<"\nlicense:"<<license<<endl;
    }

    vehicle()
    {
        cout<<"\nvehicle class constructor called"<<endl;
    }

};

class car:public vehicle
{
    string model_name;

    public:
    car(long license, int year, string modelname) : vehicle(license, year), model_name(modelname)
    {
        cout<<"\nmodel:"<<model_name<<endl;
    }

    car(car &obj)
    {
        cout<<"copy constructor called"<<endl;
        cout<<"model_name"<<model_name<<endl;
    }
};

int main()
{
    class vehicle car(9620338437);
    class car swift(9620338437, 2017, "swift");
    /*when copy constructor is called,
      you must copy the values which you need,
      by default no values will be coopied*/
    class car baleno = swift;//copy constructor called
    class car brezza(swift);//copy constructor called

    return 0;
}
