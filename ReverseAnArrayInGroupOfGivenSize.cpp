#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[1001];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        reverse(arr+i,arr+i+k);
        i+=k;
        i-=1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}
