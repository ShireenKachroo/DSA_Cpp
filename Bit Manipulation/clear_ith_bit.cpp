#include<bits/stdc++.h>
using namespace std;
//set the ith bit to 0
int setIthBit(int n, int i)
{
   n  = ~(1<<i)&n;
    return n;
}
int main()
{
    cout<<"Number after setting ith bit to 1 is: "<<setIthBit(13,2);
    return 0;
}
