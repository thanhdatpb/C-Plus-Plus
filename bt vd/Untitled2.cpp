#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<< "Nhap n tu ban phim: ";
	cin>> n;
//	int x = 0;
	int tich=1;
	if (n==0 || n==1){
		tich=1;
	}
	else if(n%2==0&&n!=0){
//		4
//		1*2*4
		for(int i=2;i<=n;i+=2){
			tich*=i;
		}
	}
	else if(n%2==1&&n!=1){
//		7
//		1*3*5*7
		for(int i=1;i<=n;i+=2){
			tich=tich*i;
		}
	}
	cout<<tich;
//	for(int i=0;-1<=n&&n>=30;i++){
//		x
//		for(-1<=n&&n>=30;n%2==1; i++){
//		x =*n;
//	}
//	cout<< x;
	return 0;
}
