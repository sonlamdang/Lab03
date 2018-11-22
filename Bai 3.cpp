#include<iostream>
using namespace std;
class MASO
{
private:
       static int dem;
       int so;
public:
MASO()
       {
		static int dem=0;
        so=++dem;
       }
void xuat()
       {
        cout<<" Oject "<<so<<"\n";
       }
};
int main()
{
	MASO x[3];
    for(int i=0;i<3;i++)
      {
		x[i].xuat();
      }	 
	  return 0;  	
}
 
