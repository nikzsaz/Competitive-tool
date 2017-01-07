#include <iostream>
using namespace std;

int main() {
    string str;
    cin>>str;
    bool bol=true;
    for(int i=0;i<str.size();i++){
       if(str[i]=='*'){
            if(bol){
                cout<<str[i-1];
                bol=false;
            }
            continue;
       }
       else if(str[i-1]=='*')
                cout<<str[i]; 
    }
	return 0;
}
//input adfj***fgh*********bfjv****fjf**dergn
//output jfbfd
