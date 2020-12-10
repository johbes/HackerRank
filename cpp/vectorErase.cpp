#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N, x, a, b;
    cin >> N;
    vector<int> v(N);
    for(int i = 0;i < N;i++){
        cin >> v[i]; 
    }
    cin >> x >> a >> b;
    v.erase(v.begin()+x);
    v.erase(v.begin()+a,v.begin()+b);
    cout << v.size() << "\n";
    for(int i = 0;i < v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
