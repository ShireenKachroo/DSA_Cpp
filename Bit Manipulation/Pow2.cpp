#include<bits/stdc++.h>
using namespace std;
//check 2's power
bool isPow2(int n)
{
    n = n&(n-1);
    if(n) return false;
    return true;
}
int main()
{
    cout<<"Is power of 2? ---> "<<isPow2(1024);
    return 0;
}
