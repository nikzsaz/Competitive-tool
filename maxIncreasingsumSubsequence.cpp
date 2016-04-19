#include <iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int main() {
	// maximum sum increasing sequence
	//author Niraj
	int n;
	cin>>n;
	int arr[10001];
	int lmsi[10001];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    lmsi[i]=arr[i];
	}
	for(int i=1;i<n;i++){
	    for(int j=0;j<i;j++){
	        if(arr[j]<arr[i]){
	            lmsi[i]=max(lmsi[i],lmsi[j]+arr[i]);
	        }
	    }
	}
	int maxi=lmsi[0];
	for(int i=0;i<n;i++){
	    if(maxi<lmsi[i]){
	        maxi=lmsi[i];
	    }
	}
	cout<<maxi;
	return 0;
}
