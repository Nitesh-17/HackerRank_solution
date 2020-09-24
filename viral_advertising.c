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
 int n;
 scanf("%d",&n);
int a=5;
int liked;
int total_liked = 0 ;
for( int i=0;i<n;i++){
    liked = a/2;
    total_liked = total_liked+liked;
    a = liked*3;

}

printf("%d",total_liked);
}