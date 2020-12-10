#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        int bNumberOfDigits = log10(B) + 1;
        cout << hex << trunc(A) << endl;
        stringstream ss = stringstream();
        for(int i = 0;i < bNumberOfDigits;i++){ ss.put('-'); }
        string padding = ss.str();
        B < 0 ? cout << padding << "-" << round(B) : cout << padding << "+" << round(B);
        cout.precision(9);
        cout << scientific << C;
	}
	return 0;

}