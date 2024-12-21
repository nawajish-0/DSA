// container(lifo)
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);//{3,4,1,2}

    dq.pop_back();
    dq.pop_front();
    dq.back(); 
    dq.front();
    // similar to vector
 
return 0;
}