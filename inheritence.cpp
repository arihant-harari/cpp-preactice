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

class car : public vehicle
{
    string model_name;

    public:
    car(long license, int year, string modelname) : vehicle(license, year), model_name(modelname) 
    {
        cout<<"\nmodel:"<<model_name<<endl;
    }
};

int main()
{
    class vehicle car(9620338437);
    class car swift(9620338437, 2016, "swift");
    class car baleno(swift); 

    return 0;

}
