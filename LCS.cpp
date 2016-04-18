#include <iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int LCS(string s,string s1){
    int l=s.size();
    int m=s1.size();
    int DP[l+1][m+1];
    for(int i=0;i<=l;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                DP[i][j]=0;
            }else if(s[i-1]==s1[j-1]){
                DP[i][j]=DP[i-1][j-1]+1;
            }else{
                DP[i][j]=max(DP[i-1][j],DP[i][j-1]);
            }
        }
    }
    return DP[l][m];
}
int main() {
	// here is the dp implementation of the LCS
	string s,s1;
	cin>>s>>s1;
	int x=LCS(s,s1);
	cout<<x;
	return 0;
}
