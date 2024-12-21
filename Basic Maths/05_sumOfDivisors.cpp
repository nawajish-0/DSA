
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int sumOfDivisors(int n) {
        int sum = 0;
        for(int i =1;i<=n;i++){
            sum+=i*(n/i);
        }
        return sum;
    }
};

int main() {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;
    return 0;
}
