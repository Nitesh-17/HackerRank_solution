#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
    int count=0;
    int num2 = n;
    for(int i=0;i<2;i++){
while(n>0){
   int num=0;
   num = n%10;
   if( num!=0 && num2%num==0)
       count++;
       n = n/10;
   

}
    }
return count;
}