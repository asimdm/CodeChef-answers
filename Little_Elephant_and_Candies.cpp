#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
#include <cmath>
#define ll long long int
using namespace std;


    
int main() {
        int t;
        cin>>t;
        while(t--){
         int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            
                k-=arr[i];
            
        }
        if(k<0){
            cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
        }
        
        
  }     
    return 0;
}