#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main(){
	int n;
	cin>> n;
	double s = 1 - (float)1 / (n + 1);
	cout<< fixed << setprecision(2) << s;
  return 0;
}
// 1/1.2+1/2.3....+1/n.(n+1)
