//Swap

#include<iostream>
using namespace std;
void swap(int a,int b)
{
c=a;
a=b;
b=c;
cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;
return;
}
int main(){
    int a,b;
    int c;
    a=4;
    b=6;
    swap(a,b);
    cout<<"The values of a and b after swapping outside the function are: "<<a<<" "<<b<<endl;
    return 0;
}
