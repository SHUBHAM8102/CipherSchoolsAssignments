//Stringoperator

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    string b;
    string c;
    //int a;
    //int b;
    //int c;
    //getline(cin,a);

    cout<<"The strings which you have given as input are: "<<a<<b<<endl;
    c=a+b;
    cout<<"The combined word is: "<<c<<endl;
    cout<<"The length of the combined name is: "<<c.length();
    return 0;

}
