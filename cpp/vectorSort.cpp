#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    vector<int> v(N);
    for(int i = 0;i < N;i++){
        cin >> v[i];
    } 
    sort(v.begin(),v.end());
    for(auto i = v.begin();i != v.end();++i){
        cout << *i << "\n";
    }
    cout << endl;
    return 0;
}