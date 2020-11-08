#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v {};
    int vSize;
    
    cin >> vSize;
    for (int i = 0; i < vSize; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    
    int a, b;
    cin >> a;
    v.erase(begin(v) + a - 1);
    cin >> a >> b;
    v.erase(begin(v) + a - 1, begin(v) + b - 1);
    
    cout << v.size() << endl;
    for_each(v.begin(), v.end(), [] (int i) { cout << i << " "; });
    cout << endl;
    
    return 0;
}