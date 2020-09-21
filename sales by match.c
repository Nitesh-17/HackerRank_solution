#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n,i;
    int ar[100];
    int ar_count=0;
scanf("%d",&n);
for( int i=0;i<n;i++){
    scanf("%d",&ar[i]);
}
for(int i=0;i<n;i++){
   if(ar[i]!=0){
    for(int j= i+1;j<n;j++){
        if(ar[i]==ar[j]){
            ar_count++;
           ar[j]=0;
            break;

            
        }
    }
    

}
}

printf("%d",ar_count);
    }
