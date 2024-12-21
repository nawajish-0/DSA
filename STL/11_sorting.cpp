#include <bits/stdc++.h>
using namespace std;
 
bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    //they are same
    if(p1.first>p2.first) return true;
    return false;
} 

int main()
{
    vector<int>v = {1,2,3,4};
    int a[4] = {1,2,3,4};
    sort(a,a+4);
    sort(a,a+4, greater<int>());


    sort(v.begin(),v.end());// ascending
    sort(v.begin(),v.end(), greater<int>()); //descending

    pair<int,int> b[3] = {{1,2},{2,1},{4,1}};
    //sort it acc to 2nd element,
    // if 2nd element is same, then sort it acc to 1st element
    //but in descending order.
    sort(b,b+3,comp);    
    for (int i = 0; i < 3; ++i) {
        cout << "(" << b[i].first << ", " << b[i].second << ")" << endl;
    }

 
return 0;
}
