#include <iostream>
using namespace std;
//Count minimum steps to get the given desired array
//Incremental operations:Choose 1 element from the array and increment its value by 1.
//Doubling operation: Double the values of all the elements of array.
int calc(int arr[],int n){
    int result=0;
    while(true){
        int zerocount=0;
        int i;
        for(i=0;i<n;i++){
            if(arr[i]&1){
                break;
            }
            if(arr[i]==0){
                zerocount++;
            }
        }
        if(zerocount==n){
            break;
        }
        if(i==n){
            
            for(int j=0;j<n;j++)
                arr[j]=arr[j]/2;
            result++;
        }
        for(int j=i;j<n;j++){
            if(arr[j]&1){
                arr[j]--;
                result++;
            }
        }
        
    }
    return result;
}
int main() {
	int arr[]={16, 16, 16};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<calc(arr,n);
	return 0;
}
