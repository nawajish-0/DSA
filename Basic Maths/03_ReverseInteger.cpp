#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int reverse(int x) {
        int n = abs(x);
        long ans = 0;
        while(n>0){
            int digit = n%10;
            ans = ans*10 + digit;
            n = n/10;
            if (ans > INT_MAX || ans < INT_MIN) {
                return 0;
            }
        }
        long fans = -ans;
        if(x<0){
            return fans;
        }
        return ans;
    }
};

int main()
{
    Solution sol;
   cout<< sol.reverse(235238);
   
return 0;
}