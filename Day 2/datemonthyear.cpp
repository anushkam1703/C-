#include<iostream>
using namespace std;

class Cdate
{
	int dd, mm, yy;
	 
	public:
		void accept();
		void display();
		void setdate(int);
		void setmonth(int);
//		void setyear(int);
		int getdate();
		int getmonth();
		int getmm();
//		int getyear();
		
};

void Cdate::accept()
{
	cout<<"Enter the date, month and year\n";
	cin>>dd>>mm>>yy;
}

void Cdate ::display()
{
	cout<<"Date Month and Year is : "<<dd<<"/"<<mm<<"/"<<yy;
	
}

void Cdate::setdate(int d)
{
	dd = d; 
}

//void Cdate::setmonth{int m)
//{
//	mm = m; 
//}
//
//void Cdate::setyear(int y)
//{
//	yy = y; 
//}

int Cdate::getdate()
{
	return dd;
}

int Cdate::getmonth()
{
	return mm;
}
//
//int Cdate::getyear()
//{
//	return yy;
//}

int main()
{
	 Cdate d1;
	 d1.accept();
	 d1.display();
	 d1.setdate(5);
	 d1.getmonth();
//	 d1.getmm();
	return 0;
}
