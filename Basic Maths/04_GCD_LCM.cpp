//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long gcd(long long a, long long b){
            //Eeclidian algo
            while(b!=0){
               long long temp = b;
                b = a%b;
                a = temp;
            }
            return a;
    }
    
    long long lcm(long long a, long long b){
        long long gcd_val = gcd(a,b);
        long long lcm_val = (a*b)/gcd_val;
        return lcm_val;
    }
    
    vector<long long> lcmAndGcd(long long a, long long b) {
        // gcd 
        vector<long long> ans;
        long long gcd_val = gcd(a,b);
        long long lcm_val = lcm(a,b);
        ans.push_back(static_cast<long long>(lcm_val));
        ans.push_back(static_cast<long long>(gcd_val));
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A, B;

        cin >> A >> B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends