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
int n,c,k;
int a[100];
int temp;
scanf("%d%d",&n,&k);
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

for(int i=1;i<n;i++){
if(a[i]>a[0]){
    a[0] = a[i];

}

}

if(a[0]>k){
    c =a[0]-k;
    printf("%d",c);
}
else if(a[0]<k){
    printf("0");
}
}
