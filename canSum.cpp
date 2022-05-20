#include<iostream>
using namespace std;
int canSum(int target, int a[10]){
	int i,rem;
	int n = sizeof(a)/sizeof(a[0]);
	
	if(target==0)
	return 1;
	if(target<0)
	return 0;
	for(i=0;i<n;i++){
		rem = target - a[i];
		if((canSum(rem,a))==1){
			return 1;
		} 
	}
	return 0;
}
int main(){
	int a[10] ={2,4};

    if(canSum(7,a)){
    	cout<<"True";
	}	
	else{
		cout<<"False";
	}
}

