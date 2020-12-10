#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q, y, x;
    set<int> s; 
    cin >> Q;
    for(int i = 0;i < Q;i++){
        cin >> y >> x;
        switch (y)
        {
        case 1:
            s.insert(x);
            break;
        case 2:
            if (s.find(x) != s.end()){
                s.erase(x);
            }
            break;
        case 3:
            if (s.find(x) != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}



