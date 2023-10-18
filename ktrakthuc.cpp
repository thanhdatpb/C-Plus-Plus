#include <bits/stdc++.h>
using namespace std;
class nguoi {
    protected:
    	string ho_dem,name;
    	int age;
    public:
    	nguoi(){
    		ho_dem="";
    		name="";
    		age=0;
		}
		nguoi(string &xau_string_1,string &xau_string_2,int &temp){
			ho_dem=xau_string_1;
			name=xau_string_2;
			age=temp;
		}
		int age_(){
			return age;
		}
		string getho_dem(){
			return ho_dem;
		}
		string getnam(){
			return name;
		}
		void vao(){
			cout<<"Nhap ho dem :  ";  getline(cin,ho_dem);
			cout<<"Nhap ten    :  ";  getline(cin,name);
			cout<<"Nhap tuoi   :  ";  cin>>age;
			cin.ignore();
		}
		void ra(){
			cout<<ho_dem<<" "<<name;   cout<<" - ";
			cout<<age;   cout<<" - ";
		}
		friend int operator > (nguoi x,nguoi y){ 
			if (x.name>y.name) return 1; else
			if (x.name<y.name) return 2; else {
				if (x.ho_dem>y.ho_dem) return 1; else
				if (x.ho_dem<y.ho_dem) return 2; else return 1;
			}
		}
};

class sinhvien : public nguoi{
	string masv;
	string nganhdaotao;
	double dtb;
	public:
		sinhvien(): nguoi(){
			masv="";  
			nganhdaotao="";
			dtb=0.0;
	    }
		sinhvien(string xau_string_1,string xau_string_2,int temp1, string xau_string_3,string xau_string_4, double temp2){
			ho_dem=xau_string_1;  name=xau_string_2;  temp1=0;  masv=xau_string_3;   nganhdaotao=xau_string_4;  dtb=temp2;
		}
		void vao(){
			nguoi:: vao();
			cout<<"Ma sinh vien:  ";  getline(cin,masv);
			cout<<"Nganh : ";  getline(cin,nganhdaotao);
			cout<<"Diem trung binh:  "; cin>>dtb;
		}
		bool xeploai(){
			if (dtb<5) return false; else return true;
		}
		double diemtb(){
			return dtb;
		}
		string ndt(){
			return nganhdaotao;
		}
		void ra(){
			nguoi:: ra();
			cout<<masv;  cout<<" - ";
			cout<<nganhdaotao;  cout<<" - ";
			cout<<dtb<<endl;  cout<<" - ";
			if (xeploai()) cout<<"dat"; else cout<<"khong dat";
			cout<<"\n";
		}
};
bool sapxep(sinhvien &x,sinhvien &y){
	return (x>y)==1;
}
int main(){
Next_:
	int n; 
	cin>>n;
	if (n<0 || n>50) goto Next_;
	vector<sinhvien> a;
	sinhvien temp111;
	a.push_back(temp111);
	double maxn=0;
	int dem_dat=0;
	int dem_age=0;
	for (int i=1; i<=n; i++) {
		cout<<"Sinh vien "; cout<<i<<"\n";
		cin.ignore();
		sinhvien t;
		t.vao();
		a.push_back(t);
		maxn=max(maxn,a[i].diemtb());
		if (a[i].xeploai()) {
			dem_dat++;
			dem_age+=a[i].age_();
		}
	}
	sort(a.begin()+1,a.begin()+n+1,sapxep);
	for (int i=1; i<=n; i++) a[i].ra();
	cout<<"\n";
    cout<<"\n";cout<<"\n";
	for (int i=1; i<=n; i++){
		if 	(a[i].diemtb()==maxn) a[i].ra();
	}
	cout<<"\n";
	if (dem_dat==0) cout<<"Khong co sinh vien xep loai dat"; else {
		cout<<"Trung binh tuoi : ";
		printf("%.5f",dem_age*1.0/dem_dat);
	}
	cout<<"\n";cout<<"\n";
	cout<<"Nhap chuoi ki tu ndt= ";
	string temp;
	cin.ignore();
	getline(cin,temp);
	bool kt=false;
	for (int i=1; i<=n; i++) {
		if (a[i].ndt()!=temp) {
			kt=true;
			a[i].ra();
		}
	}
	if (kt==false) cout<<" TRONG ";
}
