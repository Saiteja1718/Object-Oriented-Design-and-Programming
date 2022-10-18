#include <iostream>
using namespace std;

class Base{
    public:
        string name;
        Base(){
            name="";
        }
};

class Student: public Base{
    public:
        void get(string temp){
            name=temp;
        }
        void print(){
            cout<<name;
        }
};

int main(){
    Student s1;
    s1.get("saiteja");
    s1.print();
}
