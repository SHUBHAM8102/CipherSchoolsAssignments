//function

#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c;
     a=10;
     b=11;
    c=a+b;
    return c;
}
int main()
{
    int a,b;
    a=3;
    b=5;
    int c;
    cout<<a<<" "<<b<<endl;
    c=sum(a,b);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;

}




//function prototype

#include<iostream>
using namespace std;
int sum(int ,int )
int main()
{
    int a,b;
    a=3;
    b=5;
    int c;
    cout<<a<<" "<<b<<endl;
    c=sum(a,b);
    cout<<c<<endl;
    cout<<a<<" "<<b<<endl;
    return 0;

}
int sum(int a,int b)
{
    return a+b;
}
