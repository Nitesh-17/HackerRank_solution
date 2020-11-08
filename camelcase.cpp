#include <bits/stdc++.h>
#include<string>

using namespace std;

// Complete the camelcase function below.
int main(){
    string s;
    cin>>s;
    int i;
    int count = 1;
    
    for(i=0;i<s.size();i++){
        if(isupper(s[i])){
            count++;
            
        }
    }
    cout<<count;
    return 0;
    
}
