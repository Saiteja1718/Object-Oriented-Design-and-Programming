#include <iostream>
using namespace std;

class Compare{
    public:
        string s1;
        Compare(){
            this->s1="";
        }
        Compare(string n1){
            this->s1=n1;
        }
        int operator == (Compare &o2){
            
            if(this->s1!=o2.s1){
                cout<<"\nNot same\n";
                return 0;
            }
            else{
                cout<<"\nSame\n";
                return 1;
            }

        }

};

int main(){
    int e;
    Compare o1("sai teja");
    Compare o2("teja");
    e=o1 == o2;

    return 0;
}