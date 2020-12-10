#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin >> a >> b;
    int aLength = a.length();
    int bLength = b.length();
    string aPlusB = a + b;
    string aPrim = a;
    string bPrim = b;
    aPrim[0] = b[0];
    bPrim[0] = a[0];
    cout << aLength << " " << bLength;
    cout << aPlusB;
    cout << aPrim << " " << bPrim << endl;

    return 0;
}