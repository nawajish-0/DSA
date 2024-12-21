#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4]={{1,4,1,4},{2,3,2,3},{3,2,3,2},{4,1,4,1}};
    
    for(int col = 0;col<4;col++){

        if(col&1) // odd column
        {
                for(int row = 4-1;row>=0;row--){
                    cout<<arr[row][col]<<" ";
                }
        }
        else
        {
                for (int row = 0; row < 4; row++) {
                    cout<<arr[row][col]<<" ";
                }
        }
    }
return 0;
}