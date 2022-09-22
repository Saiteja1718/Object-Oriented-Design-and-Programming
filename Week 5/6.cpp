#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float x,y;
    char c,d;
    
    cout<<"Enter two integers :";
    cin>>a>>b;
    cout<<"Enter two floating point numbers :";
    cin>>x>>y;
    cout<<"Enter two characters :";
    cin>>c>>d;
    
    cout<<"\nIntegers :";
    cout<<"\na="<<a<<"\nb="<<b;
    cout<<"\nAfter swapping :";
    swap(a,b);
    cout<<"\na="<<a<<"\nb="<<b;
     
    cout<<"\nFloating point numbers :";
    cout<<"\nx="<<x<<"\ny="<<y;
    cout<<"\nAfter swapping :";
    swap(x,y);
    cout<<"\nx="<<x<<"\ny="<<y;
    
    cout<<"\nCharacters :";
    cout<<"\nc="<<c<<"\nd="<<d;
    cout<<"After swapping :";
    swap(c,d);
    cout<<"\nc="<<c<<"\nd="<<d;
    return 0;
}
    void swap(int &a,int &b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    void swap(float &x,float &y)
    {
        float temp;
        temp=x;
        x=y;
        y=temp;
    }
    void swap(char &c,char&d)
    {
        char temp;
        temp=c;
        c=d;
        d=temp;
    }