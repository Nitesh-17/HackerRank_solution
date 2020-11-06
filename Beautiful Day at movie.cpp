#include <bits/stdc++.h>

using namespace std;

int main(){
long int a=0,b=0,c=0,i=0,x=0,d=0,rem=0,m=0;
cin>>a>>b>>c;
for(i=a;i<=b;i++)
{
    rem=0;
    m=i;
    while(m!=0)
    {
        d=m%10;
        rem=rem*10+d;
        m=m/10;
    }
    if((abs(rem-i)%c)==0)
        x++;
}
cout<<x;
return 0;}

