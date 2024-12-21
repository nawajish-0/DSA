#include <bits/stdc++.h>
using namespace std;

int i =1;
void printNos(int n)
{
    if (i>n)
        return;
    cout << i << " ";
    i++;
    printNos(n);
}

int main()
{
    int N = 5;
    printNos(N);
    return 0;
}