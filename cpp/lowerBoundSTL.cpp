#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N, Q;
    cin >> N;
    vector<int> v(N);
    for(int i = 0;i < N;i++){
        cin >> v[i];
    }
    cin >> Q;
    int query;
    for(int i = 0;i < Q;i++){
        cin >> query;
        int lastIndex = 0;
        std::vector<int>::iterator low;
        low=std::lower_bound(v.begin() + lastIndex, v.end(), query);
        if(*low == query){
            cout << "Yes " << low - v.begin() + 1 << "\n";
        }
        else{
            cout << "No " << low - v.begin() + 1 << "\n";
        }
    }
    return 0;
}