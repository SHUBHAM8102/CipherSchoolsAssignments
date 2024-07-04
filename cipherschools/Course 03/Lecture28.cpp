//Accessspecifier1

#include<iostream>
using namespace std;
class Bank_client{
    public:

    string name;
    int credit_number;
    int cvv;
    string user_name;
    stirng password;

};

int main(){
Bank_client a,b,c;
a.name="Gagan";
a.passsword="Enjoyc++";
a.cvv=788;
a.credit_number=345676;
cout<<"The password of gagan is: "<<a.password;

return 0;
}




//Accessspecifier2

#include<iostream>
using namespace std;
class Bank_client{
    private:

    string name;
    int credit_number;
    int cvv;
    string user_name;
    stirng password;

    public:
    string name;


    void set_credit_card_number(int number){ 
        credit_number = number;
    }
    void get_creditcardnumber(){
        cout<<"The card number is "<<credit_number
    }

};

int main(){
Bank_client a,b,c;
a.name="Gagan";
a.set_credit_card_number(78645);
a.get_creditcardnumber();
return 0;
}




//simpleclass

#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int attendence;
    float total_marks;

    void calculate_percentage(){
        cout<<total_marks<<"%";
    }

};
int main(){
    Student a,b;
    a.name="Gagan";
    a.attendence=90;
    a.total_marks=69;
    a.calculate_percentage();
    return 0;
}
