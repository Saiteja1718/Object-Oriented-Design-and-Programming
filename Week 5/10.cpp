#include<iostream>
 using namespace std;

 int sum(int x, int y)
 {
     return x+y;
 }
 double sum(double x, double y)

 {
     return x+y;
 }

 int sum (int x, int y, int z)
 {
     return x+y+z;
 }

 int main()
 {
     cout <<"The Sum of two integers: "<<sum(5, 7)<<endl;
     cout <<"The Sum of two floats: "<<sum(12.5, 13.7)<<endl;
     cout <<"The Sum of three integers: "<<sum(10, 20, 30)<<endl;
 }