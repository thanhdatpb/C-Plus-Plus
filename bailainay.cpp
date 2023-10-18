#include <bits/stdc++.h>
using namespace std;
class canbo{
	protected:
		string macb,hoten,ngayvcq;
	public:
		canbo(){
			macb=hoten=ngayvcq="";
		}
		canbo(string macb,string hoten,string ngayvcq){
			this->macb=macb;
			this->hoten=hoten;
			this->ngayvcq=ngayvcq;
		}
		void nhap(){
			cin.ignore();
			cout<<"Nhap ma can bo: ";getline(cin,macb);
			cout<<"Nhap ho ten: ";getline(cin,hoten);
			cout<<"Nhap ngay vao co quan: ";getline(cin,ngayvcq);
		}
		void xuat(){
			cout<<"Nhap ma can bo: "<<macb<<endl;
			cout<<"Nhap ho ten: "<<hoten<<endl;
			cout<<"Nhap ngay vao co quan: "<<ngayvcq<<endl;
		}
		bool operator >(canbo&a){
			string s=(a.ngayvcq).substr(0,2);
			string k=(a.ngayvcq).substr(3,2);
			string l=(a.ngayvcq).substr(6,4);
			string s1=(this->ngayvcq).substr(0,2);
			string k1=(this->ngayvcq).substr(3,2);
			string l1=(this->ngayvcq).substr(6,4);
			return l<=l1&&k<=k1&&s<=s1;
		}
};
class giangvien:public canbo{
	private:
		string dv;
		int hsl,phucapcv;
	public:
		giangvien():canbo(){
			dv=hsl=phucapcv=0.0;
		}
		giangvien(string macb,string hoten,string ngayvcq,string dv,double hsl,double phucapcv):canbo(macb,hoten,ngayvcq){
			this->dv=dv;
			this->hsl=hsl;
			this->phucapcv=phucapcv;
		}
		void nhap(){
			canbo::nhap();
			cout<<"Nhap don vi: ";cin>>dv;
			cout<<"Nhap he so luong: ";cin>>hsl;
			cout<<"Phu cap chuc vu: ";cin>>phucapcv;
		}
		void xuat(){
			canbo::xuat();
			cout<<"Nhap don vi: "<<dv<<endl;
			cout<<"Nhap he so luong: "<<hsl<<endl;
			cout<<"Phu cap chuc vu: "<<phucapcv<<endl;
		}
		string getdv(){
			return dv;
		}
		double tinhluong(){
			return hsl*1490000+phucapcv;
		}
};
int main(){
	cout<<"Nhap so giang vien: ";
	int n;
	cin>>n;
	giangvien a[n];
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	double tbluong=0;
	cout<<"\nLUONG TRUNG BINH CUA CAC GIANG VIEN\n";
	for(int i=0;i<n;i++){
		tbluong=a[i].tinhluong();
	}
	cout<<"Luong trung binh cua cac giang vien la: "<<tbluong<<endl;
	cout<<"\nTHONG KE THEO DON VI\n";
	map<string,int>mp;
	for(int i=0;i<n;i++){
		mp[a[i].getdv()]++;
	}
	for(int i=0;i<n;i++){
		for(auto it:mp){
			if(it.second>0&&it.first==a[i].getdv()){
				cout<<"Don vi "<<a[i].getdv()<<" bao gom cac giang vien sau\n";
				a[i].xuat();
			}
		}
	}
	cout<<"\nSAP XEP THEO NGAY VAO CO QUAN\n";//ngay vao co quan co dang dd/mm//yy
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				giangvien temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
}