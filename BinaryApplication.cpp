#include <iostream>
using namespace std;

int main() {
    int arr[1001];
	int n;
	cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int x;
    cin>>x;
    int result=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            result=mid;
           // high=mid-1; this is to find the lower indices within the bianry search
           low=mid+1; // this is to find the heigher indices within the binary search
        }else if(arr[mid]<x){
           low=mid+1; 
        }else{
            high=mid-1;
        }
    }
    cout<<result;
	return 0;
}
