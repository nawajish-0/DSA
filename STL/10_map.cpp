// container (map)
//  map stores unique keys in sorted order
#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> mpp;
    mpp[1] = 2;  // key = 1, value = 2
    mpp.emplace(3,1);
    mpp.emplace(2,5);
    // {
    //     {1,2}
    //     {3,1}
    // }

    cout<<mpp[3]<<endl;
    for(auto it:mpp){
        cout<<it.first<<":"<<it.second<<endl;
    }
    auto it = mpp.find(3);
    cout<<it->second;  // arrow operator

    map<int, pair<int, int>> map3; // key sinlge integer, values;- two integers
    map3[1] = {1, 2};

    for (auto &it : map3)
    {
        cout << it.first << " " << it.second.first << ":" << it.second.second;
    };

    map<pair<int,int>,int> map2;  // key;- two integers
    map2[make_pair(1,2)] = 5;
    cout<<map2[make_pair(1,2)];

    

    // auto it = mpp.find(5); // if 5 is not there, it points to mpp.end();

    // auto it = mpp.lower_bound(2);
    // auto it = mpp.lower_bound(3); // same as in set but on on key.

    // multi map:- same as map but stores duplicate keys
    multimap<int,string> map1;
    
    // Insert elements (duplicate keys are allowed)
    map1.insert({1, "one"});
    map1.insert({2, "two"});
    map1.insert({3, "three"});
    map1.insert({1, "uno"});
    map1.insert({2, "dos"});
    for (auto pair : map1) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Unordered map:- same as map but keys are not sorted
    unordered_map<int, string> umap;
    // Insert elements
    umap[1] = "one";
    umap[2] = "two";
    umap[3] = "three";

    for(auto it:umap){
        cout<<it.first<<":"<<it.second<<endl;
    }
    return 0;
}