// sorted but not unique
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // cout<<"hello";
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2); // {1,1,1,1,1,2}

    // ms.erase(1); // all 1's erased
    int cnt = ms.count(1); // will count all 1's

    //to erase a single 1
    // ms.erase(ms.find(1)); // will find first occurence and will erase

    // to erase from to. {1,1,1,1,1,2}
    // ms.erase(ms.find(1), next(ms.find(1),2)); 
    auto it = ms.lower_bound(1);
    ms.erase(ms.find(1), next(it,2));  // {1,1,1,2}  [first,end)
    
    for(auto it:ms){
        cout<<it<<" ";
    }
return 0;
}