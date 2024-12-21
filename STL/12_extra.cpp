#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int num = 5;
    int cnt1 = __builtin_popcount(num);
    cout<<cnt1<<endl;

    long long lnum = 1982634986;
    int cnt2 = __builtin_popcountll(lnum);
    cout<<cnt2<<endl;

    string s = "123";

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

return 0;
}