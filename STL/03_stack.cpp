//container
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    stack<int> st;  // last in first out
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4);
    st.emplace(5); // {5,4,3,2,1}

    cout<<st.top();//o/p-> 5
    st.pop(); // {4,3,2,1}
    st.size();
    st.empty(); // true(if empty) or false(if not empty)
    stack<int> st1,st2;
    st1.swap(st2);
return 0;
}