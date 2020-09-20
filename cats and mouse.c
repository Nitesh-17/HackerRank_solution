#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);


char* str = "Cat A";
char* str2 = "Cat B";
char* str3 = "Mouse C";
char* catAndMouse(int x, int y, int z) {
  
int a = abs(x-z);//2-5=3
int b = abs(y-z);//5-4=1
if(a<b)
return str;
if(a>b)
return str2;
else return str3;
}