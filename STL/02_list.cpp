// list is a container
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(2);
    ls.push_front(5);// push_front is very cheap in time complexity
    ls.emplace_front(5);

    //rest function same as vector

 
return 0;
}