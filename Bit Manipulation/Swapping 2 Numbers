#include<iostream>
using namespace std;
//swapping 2 numbers without a 3rd variable
void swap(int a, int b)
{
    a = a^b;
    b = a^b;  //i.e.a^b^b = a^0 = a;
    a = a^b; //i.e. a^a^b = 0^b =  b;
    cout<<a<<" and "<<b<<endl;
}
int main()
{
    int a = 5, b = 6;
    cout<<"After swapping a and b are: ";
    swap(a,b);
    return 0;
}
