#include <bits/stdc++.h>
using namespace std;
 
 bool isPrime(int n)
{
	int count = 0;
	while(count<=2){
		for(int i =1;i<=n;i++){
			if(n%i==0) count++;
			if(count==2) return false;
		}
	}
	return true;

}


int main()
{
    int n = 6;
    if(isPrime) cout<<"Yes";
    else cout<<"NO";
 
return 0;
}