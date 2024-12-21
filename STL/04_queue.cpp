//container
//fifo 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    queue<int> q;
    q.push(1); //{1}
    q.emplace(2); //{1,2}
    q.push(4); //{1,2,4}
    q.emplace(3);//{1,2,4,3}

    q.back()+= 5; // 8->(5+3)
    q.pop(); //{2,4,8}
    q.back(); // 8
    q.front(); // 2
    // similar to vector
 
return 0;
}