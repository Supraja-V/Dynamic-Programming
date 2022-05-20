#include<iostream>
using namespace std;
const int N = 100;
int dp[N][N];


int grid(int m,int n){
	if(m==1 || n==1){
		return 1;
	}
	if(m==0 || n==0){
		return 0;
	}
	if(dp[m][n]!=-1){
		return dp[m][n];
	}
	
		dp[m][n] = grid(m-1,n)+grid(m,n-1);
		return dp[m][n];
}

int main(){
	int i,j,m,n;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			dp[i][j] = -1;
		}
	}
	cout<<"ENter m: ";
	cin>>m;
	cout<<"ENter n: ";
	cin>>n;
	cout<<grid(m,n);
}
