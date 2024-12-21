//largest element stays on top
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    //max heap
    priority_queue<int> pq;
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.emplace(8); //{8,5,2}
    
    pq.pop(); // pops 8 {5,2}
    
    pq.top();// 5

    //min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}

    pq.top(); // 2

return 0;
}