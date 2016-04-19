#include <iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int main() {
	int n;
	cin>>n;
	int arr[10001];
	int lis[10001];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    lis[i]=1;
	}
	for(int i=1;i<n;i++){
	    for(int j=0;j<i;j++){
	        if(arr[j]<arr[i]){
	            lis[i]=max(lis[j]+1,lis[i]);
	        }
	    }
	}
	int max=lis[0];
	for(int i=0;i<n;i++){
	    if(max<lis[i]){
	        max=lis[i];
	    }
	}
	cout<<max;
	return 0;
}
