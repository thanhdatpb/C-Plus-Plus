#include<iostream>
#include<math.h>
using namespace std;
class Htron 
{
	private:
		float x, y, banKinh;
	public:
		Htron(float x=0,float y=0){
			x=x;
			y=y;
		}
		void nhap();
		void xuat();
		float chuVi();
		float DienTich();
	    Htron KiemTra1Diem(Htron h1);
		
};

void Htron::nhap() {
	cin>>x>>y>>banKinh;
}
void Htron::xuat() {
	cout<<"("<<x<<", "<<y<<")"<<endl;
}

float Htron::chuVi() {
	float chuVi =banKinh*2*3.14;
	return chuVi;
}

float Htron::DienTich() {
	float dienTich = pow(banKinh,2)*3.14;
	return dienTich;
}

Htron Htron::KiemTra1Diem(Htron h1) {
	float z = sqrt(pow(x-h1.x,2) + pow(y-h1.y,2));
	if(z>banKinh) cout<<"nam trong hinh tron";
	else cout<<"nam ngoai hinh tron";
}

int main()
{
	cout<<"nhap n: ";
	int n;
	cin>>n;
	Htron a[n];
	for(int i=0; i<n; i++) {
		a[i].nhap();
	}
		for(int i=0; i<n; i++) {
		a[i].xuat();
	}
	float max = 0;
	Htron maxx;
			for(int i=0; i<n; i++) {
				float min =0;
				 min =  a[i].DienTich();
				 if(min >max) {
				 	max = min;
				 	maxx = a[i];
				 }
	}
	
	cout<<max<<endl;
	Htron diem;
	cout<<"nhap 1 diem toa do: ";
	diem.nhap();
	maxx.KiemTra1Diem(diem);
	
	return 0;
}
