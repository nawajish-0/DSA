// set container
// sorted and unique

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    set<int> st;
st.insert(1); //{1}
st.emplace(2); // {1,2}
st.insert(2); // {1,2}  // only unique
st.insert(3); //{1,2,3}

//{1,2,3,4,5}
auto it = st.find(3); // returns an iterator which points to the three

//{1,2,3,4,5}
auto it = st.find(6);  // if element not found, return st.end(); which points past last elemnt

st.erase(5); 

auto it = st.find(3);
st.erase(it); //take constant time

//{1,2,3,4,5}
auto it1 = st.find(2);
auto it2 = st.find(4);
st.erase(it1,it2); // after erase {1,4,5} [first,last)

//lower_bound gives you the number you're looking for (or the next larger one if it’s missing).
auto it = st.lower_bound(2);
//upper_bound finds the position of the first element that is larger than a given number.
auto it = st.upper_bound(2);



 
return 0;
}