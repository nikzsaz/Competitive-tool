#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// to print the permutation of all string
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	do{
	    cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));
	return 0;
}
