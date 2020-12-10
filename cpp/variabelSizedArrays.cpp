#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; // Number of variable-length arrays
    int q; // Number of queries
    cin >> n >> q;
    std::vector<std::vector<int>> v(n);
    for(int i = 0;i < n;i++){
        int size;
        cin >> size;
        for(int j = 0;j < size;j++){
            int element;
            cin >> element;
             v[i].push_back(element);
        }
    }
    for(int i = 0;i < q;i++){
        int a;
        int b;
        cin >> a >> b;
        cout << v[a][b] << std::endl;
    }
    return 0;
}