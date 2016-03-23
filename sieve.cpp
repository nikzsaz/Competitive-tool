#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int n;
	cin>>n;
    bool arr[n+1];
    memset(arr,true,sizeof(arr));
    for(int p=2;p*p<=n;p++){// for this line we need to have a understanding of wheel factor
    //https://en.wikipedia.org/wiki/Wheel_factorization
        if(arr[p]){
            for(int i=2*p;i<=n;i+=p){
                // then on the multiple of the i with p we are incrementing and marking all as false.
                arr[i]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(arr[i]){
            cout<<i<<" ";
        }
    }

	return 0;
}
