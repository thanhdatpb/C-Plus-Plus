#include<iostream>
#include<iostream>

using namespace std;

int main(){
	int n;
	cin>> n;
	long long s = (long long) n * ( n + 1) * (2 * n + 1) / 6;
	cout<< s<<endl;

  return 0;
}

