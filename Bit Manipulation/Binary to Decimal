#include<bits/stdc++.h>
using namespace std;
//binary to decimal Conversion----------->T.C: O(length of binary num i.e. string)  S.C: O(1)
int convertBtoD(string n)
{
    int number = 0;
    int powerOf2 = 1; //initially the power is 0 since, index = 0 therefore 2^0 = 1;
    int index = n.length() - 1;
    while(index >= 0)
    {
        if(n[index] == '1')
        {
            number += powerOf2;
        }
        powerOf2 *= 2;  //incrementing power for each index;
        index--;
    }
    return number;
}
int main()
{
    cout<<convertBtoD("1101001");
    return 0;
}
