// To print the numbers form 1 to 100 using the while loop
#include<iostream>
using namespace std;
int main()
{
int i=1;
while(i<=100){
    cout<<i<<" ";
    i++;
}
}




// Using break statement
#include<iostream>
using namespace std;
int main()
{
    int i;
    int input;
    for(i=1;i<101;i++){
        cin>>input;
        if(input==65){
            cout<<"congrats you have gussed correct";
            break;
        }
    }
}
