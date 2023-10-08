/* Bismillah
 * author:  Rifatul Islam
 * created: 09.10.2023
 */   
#include<bits/stdc++.h>
 using namespace std;
 
 int main() {
     
     int t;

     cin>>t;

     while(t--){
     	int x,n;

     	cin>>x>>n;

     	vector<int> v(x);

     	for(int i=0;i<x;i++){
     		cin>>v[i];
     	}

     	sort(v.begin(),v.end());

     	int s=unique(v.begin(),v.end())-v.begin();

     	if(s==n){
     		cout<<"Good"<<endl;
     	}
     	else if(s<n){
     		cout<<"Bad"<<endl;
     	}
     	else{
     		cout<<"Average"<<endl;
     	}
     }
     
 	return 0;
 } 

