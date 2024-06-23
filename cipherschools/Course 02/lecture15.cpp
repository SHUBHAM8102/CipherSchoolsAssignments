// To compare two numbers and the greatest integres 
#include<iostream>
using namespace std;
int compare(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}




//Addition of two numbers.
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b;
    int add_sum;
    a=3;
    b=5;
    add_sum=sum(a,b);
    cout<<add_sum;
    return 0;

}
