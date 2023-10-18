
#include <iostream>
#include <string>
using namespace std;

class Nguoi
{
     string hodem;
     string ten;
     string ngaysinh;

public:
     void setHodem(string hodem);
     string getHodem();
     void setTen(string ten);
     string getTen();
     void Nhap();
     void Xuat();
     friend bool operator>(Nguoi ng1, Nguoi ng2);
};


void Nguoi::setHodem(string hodem)
{
     this->hodem = hodem;
}
string Nguoi::getHodem()
{
     return hodem;
}
void Nguoi::setTen(string ten)
{
     this->ten = ten;
}
string Nguoi::getTen()
{
     return ten;
}
void Nguoi::Nhap()
{
     cout << "Nhap ho dem: ";
     getline(cin, hodem);
     cout << "\nNhap ten: ";
     getline(cin, ten);
     cout << "\nNhap ngay sinh: ";
     getline(cin, ngaysinh);
}
void Nguoi::Xuat()
{    
     cout << "\nHo va ten: " << this->hodem + this->ten;
     cout << "\nNgay sinh: " << this->ngaysinh;
}
bool operator>(Nguoi ng1, Nguoi ng2)
{
     if (ng1.getTen().compare(ng2.getTen()) == 0)
     {
          if (ng1.getHodem().compare(ng2.getHodem()) > 0)
               return true;
          else
               return false;
     }
     else
     {
          if (ng1.getTen().compare(ng2.getTen()) > 0)
               return true;
          else
               return false;
     }
}

class SinhVien : public Nguoi
{
     string maSV;
     float dtb;

public:
     void Nhap();
     void Xuat();
     string get_maSV();
     float get_Dtb();
};

void SinhVien::Nhap()
{
     Nguoi::Nhap();
     cout << "\nNhap ma sinh vien: ";
     getline(cin, maSV);
     cout << "\nNhap diem trung binh: ";
     cin >> this->dtb; cin.ignore();
}

void SinhVien::Xuat()
{
     Nguoi::Xuat();
     cout << "\nMa sinh vien: " << this->maSV;
     cout << "\nDiem trung binh: " << this->dtb;
}
string SinhVien::get_maSV()
{
     return maSV;
}
float SinhVien::get_Dtb()
{
     return dtb;
}
void Input(SinhVien DSSV[], int n)
{
     for (int i = 0; i < n; i++)
     {
          DSSV[i].Nhap();
     }
}
void Display(SinhVien DSSV[], int n)
{
     for (int i = 0; i < n; i++)
     {
          DSSV[i].Xuat();
     }
}
float Max_Dtb(SinhVien DSSV[], int n)
{
     float max = 0;
     for (int i = 0; i < n; i++)
     {
          if(DSSV[i].get_Dtb() > max)
          {
               max = DSSV[i].get_Dtb();
               return max;
          }
     }
}
int main()
{
     int n; 
     cout << "\nNhap so sinh vien trong danh sach: ";
     cin >> n;
     cin.ignore();
     SinhVien DSSV[200];
     Input(DSSV, n);
     // Sap xep tang dan
     SinhVien tmp;
     for (int i = 0; i < n; i++)
          for (int j = i + 1; j < n; j++)
          {
               if(DSSV[i] > DSSV[j])
               {
                    tmp = DSSV[i];
                    DSSV[i] = DSSV[j];
                    DSSV[j] = tmp;
               }
          }
     Display(DSSV, n);
     // Sinh vien co diem trung binh cao nhat
     cout << "\nSinh vien co diem trung binh cao nhat: " << Max_Dtb(DSSV, n);
}


