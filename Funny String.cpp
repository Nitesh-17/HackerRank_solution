#include <bits/stdc++.h>

using namespace std;

int main(){
   int n;
    
    string s,r;
    cin>>n;
    
    for(int j=0;j<n;j++)
{ 
    int count=0;
    cin>>s;
    r=s;reverse(r.begin(),r.end());
    for(int i=1;i<s.length();i++)
       {
          if(abs(s[i]-s[i-1])==abs(r[i]-r[i-1]))
            {count++;

            }
       }
if(count==s.length()-1)
{cout<<"Funny\n";
}else cout<<"Not Funny\n";

}

}
