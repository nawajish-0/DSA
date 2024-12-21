// n = 5, n to binary, then reverse binary, then covert binary to decimal
#include <bits/stdc++.h>
using namespace std;
 

 
int main()
{
    int n = 12;
    bitset<32> b(n);
    for(int i =0;i<16;i++){
        int temp = b[i];
        b[i] = b[31-i];
        b[31-i] = temp;
    }
    unsigned long ans = b.to_ulong();
    cout<< ans;
 
return 0;
}