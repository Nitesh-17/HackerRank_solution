#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int n;
    cin>>n;
    int val;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
     int count=0;
  
for(int i=0;i<v.size()-1;i++){
    if(v[i]%2!=0){
        v  [i] =v[i]+1;
        v[i+1] = v[i+1]+1;
        count++;
    }
    
}
if(v[v.size()-1]%2!=0){
    cout<<"NO"<<endl;
}
else cout<<count*2;
}
