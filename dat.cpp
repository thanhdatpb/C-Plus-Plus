#include <bits/stdc++.h>
using namespace std;
class giaodich{
	protected:
		string magd,ngaygd;
		long long sotiengd;
	public:
		giaodich(){
			magd=ngaygd="";
			sotiengd=0.0;
		}
		giaodich(string magd,string ngaygd, double sotiengd){
			this->magd=magd;
			this->ngaygd=ngaygd;
			this->sotiengd;
		}
		string getmagd(){
			return magd;
		}
		string getngaygd(){
			return ngaygd;
		}
		long long getsotiengd(){
			return sotiengd;
		}
		void setmagd(string m){
			magd=m;
		}
		void setngaygd(string n){
			ngaygd=n;
		}
		void setsotiengd(long long s){
			sotiengd=s;
		}
		void nhap(){
			cin.ignore();
			cout<<"Nhap ma giao dich: ";getline(cin,magd);
			cout<<"Nhap ngay giao dich: ";getline(cin,ngaygd);
			cout<<"Nhap so tien giao dich: ";cin>>sotiengd;
		}
		void xuat(){
			cout<<"Ma giao dich: "<<magd<<endl;
			cout<<"Ngay giao dich: "<<ngaygd<<endl;
			cout<<"So tien giao dich: "<<sotiengd<<endl;
		}
		friend bool sapxep(giaodich&,giaodich&);
};
bool sapxep(giaodich& a,giaodich& b){
	return a.getsotiengd()>b.getsotiengd();
}
class ngoaite: public giaodich{
	private:
		long long sl,tg;
		string loait;
	public:
		ngoaite():giaodich(){
			sl=tg=0;
			loait="";
		}
		ngoaite(string magd,string ngaygd, double sotiengd,double sl,double tg,string loaitg):giaodich(magd,ngaygd,sotiengd){
			this->sl=sl;
			this->tg=tg;
			this->loait=loait;
		}
		void nhap(){
			giaodich::nhap();
			cout<<"Nhap so luong: ";cin>>sl;
			cout<<"Nhap ti gia: ";cin>>tg;
			cout<<"Nhap loai tien te: ";cin>>loait;
		}
		void xuat(){
			giaodich::xuat();
			cout<<"So luong: "<<sl<<endl;
			cout<<"Ti gia: "<<tg<<endl;
			cout<<"Loai tien te: "<<loait<<endl;
			cout<<"So tien da giao dich: "<<thanhtien()<<endl;
		}
		string getloait(){
			return loait;
		}
		long long getsl(){
			return sl;
		}
		long long gettg(){
			return tg;
		}
		long long thanhtien(){
			return sl*tg;
		}
		bool operator == (ngoaite &a){
			return a.loait==this->loait;
		}
};
int main(){
	cout<<"Nhap so luong giao dich: ";
	int n;
	cin>>n;
	ngoaite a[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin giao dich ngoai te thu "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"TINH TONG SO TIEN GIAO DICH CUA TUNG LOAI TIEN\n";
	set<string>se;
	for(int i=0;i<n;i++){
		se.insert(a[i].getloait());
	}
	vector<string>vec{se.begin(),se.end()};
	for(int i=0;i<vec.size();i++){
		long long sum=0;
		for(int i=0;i<n;i++){
			if(a[i].getloait()==vec[i]){
				sum+=a[i].getsotiengd();
			}
		}
		cout<<"Tong so tien giao dich cua tien "<<vec[i]<<" la: "<<sum<<endl;
	}
    cout<<"\nCAC GIAO DICH TREN MOT TY\n";
    for(int i=0;i<n;i++){
    	if(a[i].getsotiengd()>=1e9){
    		a[i].xuat();
		}
	}
	cout<<"\nDANH SACH CAC GIAO DICH SAU KHI SAP XEP GIAM DAN\n";
	sort(a,a+n,sapxep);
	for(int i=0;i<n;i++){
		a[i].xuat();
	}
}
