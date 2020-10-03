#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n=0;
  int p=0;
  int min;
  scanf("%d",&n);
  scanf("%d",&p);
  min = (n/2)-(p/2);
  if(min>(p/2)){
    min=p/2;
  }
  printf("%d",min);
}