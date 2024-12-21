
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int lastInd = arr.size()-1;
        if(arr[0]==0) return -1;
        int curInd = 0;
        while(curInd< lastInd){
             int val = arr[curInd];
             int indJump = arr[curInd+val];
             curInd = curInd + indJump;
        }
        return curInd;
    }
};


int main() {
        int n, i, j;
        vector<int> arr;
        arr.push_back(1);
        arr.push_back(3);
        arr.push_back(5);
        arr.push_back(8);
        arr.push_back(9);
        arr.push_back(2);
        arr.push_back(6);
        arr.push_back(7);
        arr.push_back(6);
        arr.push_back(8);
        arr.push_back(9);
        Solution obj;
        cout << obj.minJumps(arr)<<endl;
    return 0;
}
