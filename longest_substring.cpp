#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="AGGTAB";
    string s1="GXTXAYB";
    int arr[10][10];
    for(int i=0; i<s1.length()+1; i++){
        for(int j=0; j<s.length()+1; j++){
            if(i==0 || j==0){
                arr[i][j]=0;
            }
            else if(s[j-1]==s1[i-1]){
                arr[i][j] = arr[i-1][j-1] + 1;
            }
            else{
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
            }
        }
        
    }
    cout<<arr[s1.length()][s.length()];
    return 0;
}
