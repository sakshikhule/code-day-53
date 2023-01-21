#include <bits/stdc++.h>
using namespace std;
int SubArr(int arr[], int n)
{
 int ans = arr[0];
 for (int i = 0; i < n; i++)
 {
 int prod = arr[i];
 for (int j = i + 1; j < n; j++)
 {
 ans = max(ans,prod);
 prod =prod * arr[j];
 }
 ans = max(ans,prod);
 }
 return ans;
}
int main()
{
int n;
cout<<"enter no = ";
cin>>n;
int arr[n];
for(int i = 0 ; i<n ; i++)
{
cin>>arr[i];
}
cout<<SubArr(arr,n);
return 0;
}

