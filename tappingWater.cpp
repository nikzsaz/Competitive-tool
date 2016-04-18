#include <iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a>b?b:a;
}
int main() {
    int arr[10001];
    int left[10001];
    int right[10001];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	left[0]=arr[0];
	for(int i=1;i<n;i++){
	    left[i]=max(left[i-1],arr[i]);
	}
	right[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--){
	    right[i]=max(right[i+1],arr[i]);
	}
	int result=0;
	for(int i=0;i<n;i++){
	    result+=min(left[i],right[i])-arr[i];
	}
	cout<<result;
	return 0;
}
