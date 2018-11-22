#include <iostream>
#include <conio.h>

using namespace std;

class time
{
private:
		int hours;
		int minutes;
		int seconds;
public:
	time()
	{
		hours=0;
		minutes=0;
		seconds=0;
	}
	time(int h, int m, int s)
	{
		hours=h;
		minutes=m;
		seconds=s;
	}
	int tinhgio(int hr, int mi, int se)
	{
		while(hr!=12||mi!=60||se!=60)
		{
			if(se>=60)
			{
				se=se-60;
				mi=mi+1;
			}
			else if(mi>=60)
			{
				mi=mi-60;
				hr=hr+1;
			}
			else if(hr>12)
			{
				hr=hr-12;	
			}
			else if(hr<12||mi<60||se<60)
			{
				break;
			}
		}
		cout<<"thoi gian la:\t"<<hr<<":"<<mi<<":"<<se<<endl;	
	}
	int Hours()
	{
		return hours;
	}
	int Minutes()
	{
		return minutes;
	}
	int Seconds()
	{
		return seconds;
	}
	int caidattg(time t1, time t2)
	{
		hours= t1.hours + t2.hours;
		minutes= t1.minutes + t2.minutes;
		seconds= t1.seconds + t2.seconds;
	}
	
		
};
int main()
{
	time t1;
	int a,b,c;
	char chon;
	do{
		cout<<" nhap so gio:"<<endl;
		cin>>a;
		cout<<" nhap so phuc:"<<endl;
		cin>>b;
		cout<<" nhap so giay:"<<endl;
		cin>>c;
		time t2(a,b,c);
		time t3;
		t3.caidattg(t1, t2);
		t3.tinhgio(t3.Hours(),t3.Minutes(),t3.Seconds());
		cout<<" ban muon nhap gio tiep ko:\n"<<" neu co nhap y"<<endl;
		cin>>chon;
	}while(chon=='y'||chon=='y');
	return 0;	
}































