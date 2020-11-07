int birthday(vector<int> s, int d, int m) {
    long int count=0;
    long int sum=0;
for(int i=0;i<s.size();i++){
int k=i;
for(int j=0;j<m;j++){
    sum= sum +s[k];
    k++;
}
     if(sum==d){
        count++;
}
sum=0;
}
return count;

}