#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >='0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

// to lowercase
char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string s)
{
    // removing extra symbols and whitespaces
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // lowercasing
    for (int i = 0; i < temp.length(); i++)
    {
        temp[i] = toLowerCase(temp[i]);
    }
    int st = 0;
    int e = temp.length() - 1;
    while (st <= e)
    {
        if (temp[st] != temp[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}
};

 
int main()
{
 
return 0;
}