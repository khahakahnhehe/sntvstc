#include <bits/stdc++.h>
using namespace std;
typedef struct 
{
	string ten;
	int ngay;
	int thang;
	int nam;
}thanhvien;
static int d=0;
void cuoithang (int &ng, int &th, int &y)
{
	th++;
	ng=1;
}
void cuoinam (int &ng, int &th, int &y)
{
	y++;
	th=1;
	ng=1;
}
void ngaythuong (int &ng, int &th, int &y)
{
	ng++;
}
void sinhnhat (int ng, int th, int y, thanhvien *tv)  
{
   for (int i=0;i<40;i++)
   {
   		if (ng==tv[i].ngay)
   		{
   			if (th==tv[i].thang)
			{
				cout << tv[i].ten << "\t" << tv[i].ngay << "/" << tv[i].thang << "/" << tv[i].nam << endl;	
				d=1;
				break;
		 	}
			else
				continue;  	
		}
   }
}
int main() 
{
   time_t now = time(0);
   tm *ltm = localtime(&now);
   cout <<  ltm->tm_mday << "/";
   cout << 1 + ltm->tm_mon<< "/";
   cout << 1900 + ltm->tm_year << endl;
   
   
   // Danh sach sinh nhat
   thanhvien *tv;
   tv=new thanhvien[40];
   
   tv[0].ten="Do Mai Duong";
   tv[0].ngay=19;
   tv[0].thang=11;
   tv[0].nam=2002;
   
   tv[1].ten="Nguyen The Huyen Trang";
   tv[1].ngay=15;
   tv[1].thang=7;
   tv[1].nam=2002;
   
   tv[2].ten="Dang Phuong Nam";
   tv[2].ngay=21;
   tv[2].thang=3;
   tv[2].nam=2000;
   
   tv[3].ten="Do Van Hoang";
   tv[3].ngay=8;
   tv[3].thang=5;
   tv[3].nam=2000;
   
   tv[4].ten="Vu Thanh Nam";
   tv[4].ngay=3;
   tv[4].thang=1;
   tv[4].nam=2001;
   
   tv[5].ten="Nguyen Thi Ngoc Khanh";
   tv[5].ngay=24;
   tv[5].thang=5;
   tv[5].nam=2002;
   
   tv[6].ten="Nguyen Anh Tuan";
   tv[6].ngay=18;
   tv[6].thang=7;
   tv[6].nam=2001;
   
   tv[7].ten="Nguyen Cong Thanh";
   tv[7].ngay=15;
   tv[7].thang=12;
   tv[7].nam=2002;
   
   tv[8].ten="Nguyen Sy Hoc";
   tv[8].ngay=23;
   tv[8].thang=1;
   tv[8].nam=2002;
   
   tv[9].ten="Nguyen Tien Dung";
   tv[9].ngay=15;
   tv[9].thang=10;
   tv[9].nam=2001;
   
   tv[10].ten="Nguyen Thi Trang Nhung";
   tv[10].ngay=31;
   tv[10].thang=1;
   tv[10].nam=2002;
   
   tv[11].ten="Doan Thi Mai Hien";
   tv[11].ngay=5;
   tv[11].thang=7;
   tv[11].nam=2002;
   
   tv[12].ten="Pham Duc Minh";
   tv[12].ngay=27;
   tv[12].thang=9;
   tv[12].nam=2002;
   
   tv[13].ten="Nguyen Thi Thu Trang";
   tv[13].ngay=25;
   tv[13].thang=11;
   tv[13].nam=2001;
   
   tv[14].ten="Nguyen Van Hoang";
   tv[14].ngay=15;
   tv[14].thang=12;
   tv[14].nam=2000;
   
   tv[15].ten="Le Thi Ngoc Khanh";
   tv[15].ngay=30;
   tv[15].thang=10;
   tv[15].nam=2002;
   
   tv[16].ten="Pham Thi Thu Quyen";
   tv[16].ngay=4;
   tv[16].thang=10;
   tv[16].nam=2002;
   
   tv[17].ten="Hoang Ngoc Minh Anh";
   tv[17].ngay=5;
   tv[17].thang=1;
   tv[17].nam=2002;
   
   tv[18].ten="Nguyen Thi Huyen";
   tv[18].ngay=23;
   tv[18].thang=8;
   tv[18].nam=2001;
   
   tv[19].ten="Nguyen Viet Thang";
   tv[19].ngay=17;
   tv[19].thang=4;
   tv[19].nam=2001;
   
   tv[20].ten="Mai Duc Hieu";
   tv[20].ngay=5;
   tv[20].thang=10;
   tv[20].nam=2001;
   
   tv[21].ten="Doan Thanh Hai";
   tv[21].ngay=13;
   tv[21].thang=1;
   tv[21].nam=2002;
   
   tv[22].ten="Nguyen Chi Thanh";
   tv[22].ngay=13;
   tv[22].thang=1;
   tv[22].nam=2001;
   
   tv[23].ten="Nguyen Huy Hoang";
   tv[23].ngay=18;
   tv[23].thang=1;
   tv[23].nam=2001;
   
   tv[24].ten="Bui Thi Ngoc Anh";
   tv[24].ngay=19;
   tv[24].thang=8;
   tv[24].nam=2001;
   
   tv[25].ten="Nguyen Thi Ngoc Anh";
   tv[25].ngay=27;
   tv[25].thang=1;
   tv[25].nam=2001;
   
   tv[26].ten="Bui Anh Truc";
   tv[26].ngay=12;
   tv[26].thang=8;
   tv[26].nam=2001;
   
   int ng,th,y;
   ng=ltm->tm_mday;
   th=1+ltm->tm_mon;
   y=1900+ltm->tm_year;
   
   cout << "Hom nay la sinh nhat cua ";
   sinhnhat(ng,th,y,tv);
   if (d==0)
   		cout << "khong co ai :((";
   d=0;
   
   cout << "Cac sinh nhat sap toi:\n";
   for (int i=0;i<7;i++)
   {
	   	if (y%100==0)
		{
			if (y%400==0)
			{
				if (ng==29&&th==2)
				{
					cuoithang(ng,th,y);
					sinhnhat(ng,th,y,tv);
					d=0;
				}
				if (ng!=29&&th==2)
				{
					ngaythuong(ng,th,y);
					sinhnhat(ng,th,y,tv);
					d=0;
				}
				
			}
			else
			{
	
				if (ng==28&&th==2)
				{
					cuoithang(ng,th,y);
					sinhnhat(ng,th,y,tv);
					d=0;
				}
				if (ng!=28&&th==2)
				{
					ngaythuong(ng,th,y);
					sinhnhat(ng,th,y,tv);
					d=0;
				}
			}
		}
		if (th==2)
		{
			if (y%4==0)
			{
				if (ng==29&&th==2)
				{
					cuoithang(ng,th,y);
					sinhnhat(ng,th,y,tv);
					d=0;
				}
				if (ng!=29&&th==2)
				{
					ngaythuong(ng,th,y);
					sinhnhat(ng,th,y,tv);
					d=0;
				}
			}
			else{
				if (ng==28&&th==2)
				{
					cuoithang(ng,th,y);
					sinhnhat(ng,th,y,tv);
					d=0;
				}
				if (ng!=28&&th==2)
				{
					ngaythuong(ng,th,y);
					sinhnhat(ng,th,y,tv);
					d=0;
				}
			}
		}
		if (th==12)
			if (ng==31)
			{
				cuoinam(ng,th,y);
				sinhnhat(ng,th,y,tv);
				d=0;
			}
		if ((ng==31&&th<=8&&th%2==1)||(ng==31&&th>8&&th%2==0)||(ng==30&&th<8&&th%2==0)||(ng==30&&th>8&&th%2==1))
		{
			cuoithang(ng,th,y);
			sinhnhat(ng,th,y,tv);
			d=0;
		}
		if ((ng!=31&&th<=8&&th%2==1)||(ng!=31&&th>8&&th%2==0)||(ng!=30&&th<8&&th%2==0)||(ng!=30&&th>8&&th%2==1))
		{
			ngaythuong(ng,th,y);
			sinhnhat(ng,th,y,tv);
			d=0;
		}
	}
   return 0;
}


