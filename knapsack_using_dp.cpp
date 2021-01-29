#include <bits/stdc++.h>
using namespace std;
int main()
{
    int weight = 50;
    int itemWeight[] = { 10, 20, 30 };
    int profit[] = { 60, 100, 120 }; 
    int totalItems = sizeof(itemWeight) / sizeof(itemWeight[0]);
    //Sorting is important
    //sort(itemWeight, itemWeight + totalItems);
    //sort(profit, profit + totalItems);
    int arr[totalItems+1][weight+1] = {0};
    for (int i = 0; i <= totalItems; i++)
    {
        for (int j = 0; j <= weight; j++)
        {
            if (i == 0 || j == 0)
            {
                arr[i][j] = 0;
            }
             else if(itemWeight[i-1] <= j)
            {
                    arr[i][j] = max(profit[i - 1] + arr[i - 1][j - itemWeight[i - 1]], arr[i - 1][j]);
            }
            else
            {
                arr[i][j] = arr[i - 1][j];
            }
           
        }
    }
    cout<<arr[totalItems][weight];
    return 0;
}