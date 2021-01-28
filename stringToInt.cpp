#include<bits/stdc++.h>
using namespace std;
int main() {
    string str = "1234.5";
    stringstream s(str);
    float a = 0;
    s>>a;
    cout<<a+1;
    return 0;
}