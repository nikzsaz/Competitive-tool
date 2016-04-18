#include <iostream>
using namespace std;
int gcd(int a,int b){
    return a?gcd(b%a,a):b;
}
int main() {
	int x=gcd(25,30);
	cout<<x;
	return 0;
}
