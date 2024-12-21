#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100); // {100,100,100,100,100}

    vector<int> v1(2,3);// {2,2,2}
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end(); // points(address) one past the lastelement (last wale se agey), --it will points to last
    vector<int>::reverse_iterator it2 = v.rend(); //points to one before the first element
    vector<int>::reverse_iterator it2 = v.rbegin(); // points to the last element but traverse backward

    cout<<v[0]<<"same as"<<v.at(0)<<endl;


    // for(vector<int>::iterator it = v.begin(); it!=v.end();it++){
    //     cout<<*(it)<<" ";
    // }

    for(auto it = v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    //more simple(for each loop)
    for(auto it :v){
        cout<<it<<" ";
    }

    //delete 
    //{10,20,30,40}
    v.erase(v.begin()+1);  // {10,30,40}
    //{10,20,12,23,35}
    v.erase(v.begin()+2, v.begin()+4); // {10,20,35} [start,end) doesnt include end

    //insert
    vector<int> v(2,100); 
    v.insert(v.begin(),300); // {300,100,100}
    v.insert(v.begin()+1,2,10); // {300,10,10,100,100}
    v.pop_back();// pop last element
    v1.swap(v2); // v1  will become v2 vice n versa.
    v.clear(); // erase the entrire vector
    v.empty(); // true(if empty) or false(if not empty)
return 0;
}