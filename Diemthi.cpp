#include <iostream>
using namespace std;
int main(){
   class Point
{
      private:
              int x,y;
      public:
      		 Point();
      		 Point(float x, float y);
      		 Point(const Point&ob);
             void nhap();
             void xuat();
             float get_hoanhdo();
             float get_tungdo();
             void set_hoanhdo(float hd);
             void set_tungdo(float td);
};
Point::Point(const Point&ob)
{
	this ->x=x;
	this ->y=y;
};
Point::Point()
{
	this ->x=x;
	this ->y=y;
};
void Point::nhap()
{
     cout<<"Nhap hoanh do: "; 
     cin>>x;
     cout<<"Nhap tung do: ";
     cin>>y;
     }
float Point::get_hoanhdo()
{
return x;
}
void Point::set_hoanhdo(float x)
{
    this->x=x;
}
void Point::xuat()
{
    cout<<"Diem vua nhap co gia tri: "<<"("<<x<<","<<y<<")";
}
     int main(){
         Point ob2;
         Point ob(2,3);
         ob2=ob;
         ob2.xuat();
     }
}

class SinhVien
{
	

