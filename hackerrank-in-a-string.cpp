#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    int i = 0;
    int count =0;
    string s1 = "hackerrank";
    for (int j = 0; j < s.size(); j++) {
        if (s1[i] == s[j]) {
            i++;
            count ++;
        
        } 
    }
    if(count ==10){
        return "YES";
    }
    return "NO";
}