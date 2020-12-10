#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> mydeque(k);
    for(int i = 0;i < k;i++){
        int currentElement = arr[i];
        while (mydeque.back() < currentElement){ mydeque.pop_back(); }
        mydeque.push_back(currentElement);
        for(int j = k;j < n;j++){
            cout << mydeque.front() << endl;
        }
    }
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}