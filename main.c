#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , k , i;

    int ar[100];
    int count = 0;

    scanf("%d",&n);//enter the value of n
scanf("%d",&k);//enter the value of k
for(i=0;i<n;i++){
    scanf("%d",&ar[i]);
}
for(i=0;i<n-1;i++){ // loop for i
    for(int j=0;j<n;j++){
        if(i<j){
            if((ar[i]+ar[j])%k==0){
                count++;
            }
        }
    }
}
printf("%d",count);

    return 0;
}
