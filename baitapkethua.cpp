#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool ss(string a,string b){
	return a<b;
}
class Nguoi{
	private:
		string hodem,ten,ns;
	public:
		Nguoi(){
			hodem=ten=ns="0";
		}
		Nguoi(string hodem,string ten,string ns){
			this->hodem=hodem;
			this->ten=ten;
			this->ns=ns;
		}
		
		friend istream& operator >>(istream&,Nguoi&);
		friend ostream& operator <<(ostream&,Nguoi);
		friend bool operator <(Nguoi a, Nguoi b);

};
istream& operator >>(istream& in,Nguoi& a){
	in.ignore();
	cout<<"Nhap ho dem: "; getline(in,a.hodem);
	cout<<"Nhap ten: "; in>>a.ten;
	cout<<"Nhap ngay sinh: "; in>>a.ns;
	return in;
}
ostream& operator <<(ostream& out,Nguoi a){
	out<<"Ho va ten: "<<a.hodem<<" "<<a.ten<<endl;
	out<<"Ngay sinh: "<<a.ns<<endl;
	return out;
}
bool operator <(Nguoi a, Nguoi b){
	if(a.ten < b.ten)
	return true;
	if(a.ten==b.ten){
		if(a.hodem <b.hodem) return true;
	}
	return false;
}

int main(){
	int n; cout<<"Nhap n: ";
	cin>>n;
	Nguoi a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
sort(a,a+n);
	for(int i=0; i<n; i++){
		cout<<a[i];
	}
    return 0;
}
class SinhVien:public Nguoi{
	protected:
		float msv,dtb;
	
	public:
		SinhVien(): Nguoi(){
			msv,dtb=0;
		}
		float getline(){
			
		};
};
