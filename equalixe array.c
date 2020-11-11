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
    int arr_count;
   int count,c,i,j;
   int max=0;
   int arr[100];
    scanf("%d",&arr_count);
for(i=0;i<arr_count;i++){
    scanf("%d",&arr[i]);
}
   
    for(int i=0;i<arr_count;i++)
    {   
        count = 1;
        for(int j=i+1;j<arr_count;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
     
        if(count>max)
        {
            max=count;
        }
    
    }



c = arr_count-max;
printf("%d",c);

}