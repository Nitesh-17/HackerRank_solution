#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int sum = 0;
    for(i=0;i<n;i++)
        sum += a[i];
    int paid;
    scanf("%d",&paid);
    int toBePaid = sum-a[k];
    if((toBePaid)/2==paid)
        printf("Bon Appetit\n");
    else
        printf("%d\n",paid-(toBePaid)/2);
    return 0;
}