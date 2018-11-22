#include <iostream>
#include <conio.h>

using namespace std;

class nhanvien{
 private:
  char msnv[10];
  float tien;
 public:
  void nhapdulieu(){
   cout << "nhap ma so nhan vien: ";
   cin >> msnv;
   cout << "nhap tien luong: " ;
   cin >> tien;
  }
  void xuatdulieu(){
   cout << "ma so nhan vien la: " << msnv << endl;
   cout << "tien luong nhan vien la: " << tien << endl;
  }
  void tinhtien()
  {
  	cout<<"tien la:"<<tien+(tien*0.055)<<endl;
  }
};

int main(){
 
 nhanvien nv1, nv2, nv3;
 cout << "nhap du lieu nhan vien 1" << endl;
 nv1.nhapdulieu();
 cout << "nhap du lieu nhan vien 2" << endl;
 nv2.nhapdulieu();
 cout << "nhap du lieu nhan vien 3" << endl;
 nv3.nhapdulieu();
 cout << "Thong ke du lieu :" << endl;
 nv1.xuatdulieu();
 nv1.tinhtien();
 nv2.xuatdulieu();
 nv2.tinhtien();
 nv3.xuatdulieu();
 nv3.tinhtien();
 
 
 
}
