#include<bits/stdc++.h>
using namespace std;
//Decimal to binary Conversion-------------> T.C: O(log n ) and S.C: O(log n)
string convertDtoB(int n)
{
    if(n == 0 ) return "0";
    string res = "";
    while(n != 0)
    {
        if(n % 2 == 1) res += '1';
        else res += '0';
        n = n/2;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    cout<<convertDtoB(13);
    return 0;
}
