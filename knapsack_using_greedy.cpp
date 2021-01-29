#include<bits/stdc++.h>
using namespace std;

struct s {
    int profit, item;
};

bool compare(struct s a, struct s b) {
    double r1 = (double)a.profit / (double)a.item;
    double r2 = (double)b.profit / (double)b.item;
    return r1 > r2;
}

double maxProfit(s *arr, int n, int w) {
    sort(arr, arr+n, compare);
    for(int i=0; i<n; i++) {
        cout<<arr[i].item<<" "<<arr[i].profit<<endl;
    }
    double netProfit = 0.0;
    int netWeight = 0;
    for(int i=0; i<n; i++) {
        if(arr[i].item + netWeight <= w){
            netWeight += arr[i].item;
            netProfit += arr[i].profit;
            //cout<<"Net profit:: "<<netProfit<<endl;
        }
        else{
            int currWeight = w - netWeight;
            //cout<<currWeight<<endl;
            //cout << arr[i].profit * ((double)currWeight / (double)arr[i].item)<<endl;
            netProfit += arr[i].profit * ((double)currWeight / (double)arr[i].item);
            break;
        }
    }
    return netProfit;
}

int main() {
    int w=50;
    s arr[] = { { 120, 30 } , { 60, 10 }, { 100, 20 } };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxProfit(arr, n, w);
    return 0;
}