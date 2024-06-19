#include <iostream>
using namespace std;


int main(){

    float a,b;
    cout<<"Give 2 floating point numbers"<<endl;
    cin>>a>>b;

    if(a>0.01){
        cout<<"this condition in if statement is correct"<<endl;
    }
    if(a>0.01 && b>a){
        cout<<"this condition in if statement is correct"<<endl;
    }
    if(a>0.01 || b>a){
        cout<<"this condition in if statement is correct"<<endl;
    }
    else{
        cout<<"This condition is false"<<endl;
    }


    int marks;
    cout<<"Enter student marks";
    cin>>marks;

    if(marks>90){
        cout<<"A";
    }
    else if(marks>80){
        cout<<"B";
    }
    else if(marks>70){
        cout<<"C";
    }
    else{
        cout<<"Pass";
    }




    int a,b,c,d;
    cout<<"enter 3 numbers a,b,c,d"<<endl;
    cin>>a>>b>>c>>d;
    if(a>b && c>d){
        cout<<"haha";
    }
    else if(a>b && c<d){
        cout<<"hehe";
    }
    else if(a<b && c>d){
        cout<<"huhu";
    }

    int a;
    cout<<"Enter a intger"<<endl;
    cin>>a;
    switch(a){
        case 1:
            cout<<"The value of a is 1";
            break;
        case 2:
            cout<<"The value of a is 2";
            break;
        case 3:
            cout<<"The value of a is 3";
            break;
        default:
            cout<<"default will be always printed";
    }
    return 0;
}
