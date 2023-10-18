#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//ham tinh so nguyen to
//Do phuc tap thuat toan O(logn)
bool nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return n > 1;
}

int main(){

  return 0;
}

