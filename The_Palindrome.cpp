/* Bismillah
 * author:  Rifatul Islam
 * created: 15.10.2023
 */ 
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--){
    string s;
    cin>>s;

    string s1=s;

    reverse(s.begin(),s.end());

    if(s==s1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    }
    return 0;


}