#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2) {
for(int i=0;i<s1.size();i++){
    for(int j=0;j<s2.size();j++){
        if(s1[i]==s2[j]){
           s1.erase(i,1);
           s2.erase(j,1);
           i=0;
           j=0;
           
        }
    }
}
return s1.size()+s2.size();

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
