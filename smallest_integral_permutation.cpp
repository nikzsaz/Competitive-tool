#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
   string str;
   cin>>str;
   sort(str.begin() , str.end());
   int i = 0 ;
   while(str[i] == '0')
        i++;
    
   swap(str[0] , str[i]);
   cout<<str;
    
	return 0;
}
