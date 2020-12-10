#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long N, S, P, Q;
    long long max = pow(2,31);
    cin >> N >> S >> P >> Q;
    vector<long long> a(N);
    a[0] = S % (max);
    for(int i = 1;i < N;i++){
        a[i] = a[i-1]*P+Q % max;
    }
    sort(a.begin(),a.end(), [](long long a, long long b){
        return a < b;
    });
    if (a.size() == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    else if(a.size() == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << a.size() << endl;
    int counter = 1;
    auto i = a.begin();
    auto end = a.end();
    while(true){
        int currentInt = *i;
        cout << currentInt << endl;
        i++;
        if (i == end){
            break;
        }
        if(currentInt != *i){
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}