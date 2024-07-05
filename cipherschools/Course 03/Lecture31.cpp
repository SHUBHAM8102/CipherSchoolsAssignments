//Inheritence

#include<iostream>
using namespace std;
//This is a base class

class vehicle{
    private:
    int number_tyres;
    string name;
    int capacity;
    int mileage;

    public:
    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage;
    }
};
//This is derived class and we will inherit .....

class SchoolBus:public vehicle
{
    public:
    void printnameofSchool()
    {
        cout<<"The name of the school is "<<name;
    }
};

class car:public vehicle
{
private:

int number_airbags;
int ac_consumption;
};

int main(){
    Car a;
    a.mileage=50;
    a.calculatemileage();
}




//Encapsulation

#include<iostream>
using namespace std;
class Student{
private:
int marks;
int attendence;
string name;

public:
void displaymarks()
{
    cout<<marks;
}
};

int main()
{
int marks;
int attendence;
string name;

}
