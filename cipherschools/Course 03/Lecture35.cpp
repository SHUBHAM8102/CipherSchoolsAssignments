//STL(List)

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>a;
    a.push_back(4);
    a.push_front(2);
    a.push_back(3);
    a.push_front(2);

    a.pop_back();
    a.pop_front();

    for(auto i=a.begin();i!=a.end();i++)
    {
        cout<<*i;    }

}




//STL(Map)

#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int>hash;
    hash["Gagan"]=1;
    hash["programming"]=2;
    hash["Deep"]=3;

    //to get the key individually
    // cout<<"The value of Gagan in the hashtable is: "<<hash["Gagan"];

    //to get all the keys together 

    for(auto.j=hash.begin();j!=hash.end();j++)
    {
        cout<<"The key will be "<<j->first<<"The key value in the key will be "<<j->second<<endl;
    }

}





//STL(Queue)

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    queue<int>a;
    a.push(5);
    a.push(6);
    a.push(7);

    cout<<a.front();
    
    a.pop();

    cout<<a.back()<<endl;

    if(a.empty()==0)
    {
        cout<<"The stack is currently not empty ";
    }
    else{
        cout<<"The stack is empty ";
    }

    a.pop();
    a.pop();

     if(a.empty()==0)
    {
        cout<<"The stack is currently not empty ";
    }
    else{
        cout<<"The stack is empty ";
    }

}





//STL(Stack)

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stak<int>a;
    a.push(5);
    a.push(6);
    a.push(7);

    cout<<a.top();
    
    a.pop();

    cout<<a.top()<<endl;

    if(a.empty()==0)
    {
        cout<<"The stack is currently not empty ";
    }
    else{
        cout<<"The stack is empty ";
    }

    a.pop();
    a.pop();

     if(a.empty()==0)
    {
        cout<<"The stack is currently not empty ";
    }
    else{
        cout<<"The stack is empty ";
    }

}
