#include <bits/stdc++.h>
using namespace std;
 

 
int main()
{
    int n = 101;
    int temp = n;
    int ans = 0;
    while(n>0){
        int digit = n%10;
        ans = ans*10 + digit;
        n = n/10;
    }
    if(ans==temp) cout<<"true";
    else cout<<"false";
return 0;
}