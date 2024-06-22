//do while
#include<iostream>
using namespace std;
int main()
{
    int password;
    do
    {
        cin>>password;
    } 
    while (password<999999);

    return 0;
    
}




//infinte loop using for .cpp
#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;  ;i++){
        cout<<i<<" ";
    
    if(i>100) break;
    }
    return 0;
}
