#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int n=5;
     int k=14;
     int i;
     int arr[n]={1,3,5,7,9};
    rotate(arr, arr + (k % n), arr + n);
  for(i=0;i<n;i++)
  {
      cout<<arr[i]<<" "; 
  }   
 }