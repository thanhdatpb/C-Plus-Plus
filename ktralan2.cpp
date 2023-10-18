#include <bits/stdc++.h>
using namespace std;
class Computer{
    protected:
	   string ma,hsx,nsx;
	   int gia;
	public:
	    Computer(){
	   	    ma=hsx=nsx="";
	   	    gia=0;
	    }
		string getma(){
			return ma;
		}	
		string gethsx(){
			return hsx;
		}
		string getnsx(){
			return nsx;
		}
		int getgia(){
			return gia;
	    }
	    void setma(string ma){
	    	this->ma=ma;
		}
		void sethsx(string hsx){
	    	this->hsx=hsx;
		}
		void setnsx(string nsx){
	    	this->nsx=nsx;
		}
	    void nhap();
	    void hienthi();
	    int giatriconlai(){
	    	return gia-gia*(2022-stoi(nsx)*10/100;
		}
};
void Computer::nhap(){
	cout<<"Nhap ma may tinh: ";cin>>ma;
	cin.ignore();
	cout<<"Nhap hang san xuat: ";getline(cin,hsx);
	cout<<"Nhap nam san xuat: ";getline(cin,nsx);
	cout<<"Nhap gia:";cin>>gia;
}
void Computer::hienthi(){
	cout<<"Ma may tinh: "<<ma<<endl;
	cout<<"Hang san xuat: "<<hsx<<endl;
	cout<<"Nha san xuat: "<<nsx<<endl;
	cout<<"Gia: "<<gia<<endl;
}
class Laptop:public Computer{
    protected:
       float cn,dd,ktmh;
	   string hdh;	
	public:
		Laptop():Computer(){
			cn,dd,ktmh=0;
			hdh="";
		}
		float getcn(){
			return cn;
		}
		float getdd(){
			return dd;
		}
		float getktmh(){
			return ktmh;
		}
		string gethdh(){
			return hdh;
		}
		void setcn(float cn){
			this->cn=cn;
		}
		void setdd(float dd){
			this->dd=dd;
		}
		void setktmh(float ktmh){
			this->ktmh=ktmh;
		}
		void setjdh(string hdh){
			this->hdh=hdh;
		}
		void nhap(){
			Computer::nhap();
			cout<<"Nhap can nang: ";cin>>cn;
			cout<<"Nhap do day: ";cin>>dd;
			cout<<"Nhap kich thuoc man hinh: ";cin>>ktmh;
			cin.ignore();
			cout<<"Nhap he dieu hanh: ";getline(cin,hdh);
		}
		void hienthi(){
			Computer::hienthi();
			cout<<"Can nang: "<<cn<<" gam"<<endl;
			cout<<"Do day: "<<dd<<" mm"<<endl;
			cout<<"Kich thuoc man hinh: "<<ktmh<<" inch"<<endl;
			cout<<"He dieu hanh: "<<hdh<<endl;
		}
		friend bool operator >(Laptop&,Laptop&);
		friend  bool sapxep(Laptop&,Laptop&);
		friend  bool comp(Laptop&,Laptop&);
};
bool operator > (Laptop& a,Laptop& b){
	return a.giatriconlai()<b.giatriconlai();
}
bool sapxep(Laptop& a,Laptop& b){
	return a.giatriconlai()<b.giatriconlai();
}
bool comp(Laptop& a,Laptop& b){
	return (2022-stoi(a.getnsx()))<(2022-stoi(b.getnsx()));
}
int main(){
	int n;
	cin>>n;
	vector<Laptop>v(n);
	for(int i=0;i<n;i++){
		v[i].nhap();
	}
	sort(v.begin(),v.end(),sapxep);
	cout<<"\nSap xep theo gia tri con lai\n";
	for(int i=0;i<n;i++){
		v[i].hienthi();
	}
	sort(v.begin(),v.end(),comp);
	cout<<"\nIn ra man hinh may tinh co so nam su dung nhieu nhat\n";
	for(auto x:v){
		if((2022-stoi(x.getnsx()))==(2022-stoi(v[v.size()-1].getnsx()))){
		      x.hienthi();	
		}
	}
	string hsmcx;
	cout<<"Nhap hang san xuat can xoa: ";cin>>hsmcx;
	cout<<"\nXoa tat ca cac may tin co hang san xuat da nhap\n";
	for(int i=0;i<v.size();i++){
		if(v[i].gethsx()==hsmcx){
			v.erase(v.begin()+i);
		}
	}
	for(int i=0;i<v.size();i++){
         v[i].hienthi();
	}
}

