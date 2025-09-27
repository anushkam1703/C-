#include<iostream>
using namespace std;

class Cdate{

    int dd,mm,yy;
    public:
    Cdate(){
        dd=mm=yy=0;

    }
    Cdate(int d,int m,int y){
        dd=d;
        mm=m;
        yy=y;

    }
    void show(){
        cout<<dd<<" /"<<mm<<" /"<<yy<<endl;

    }
};

int main(){

    Cdate *ptr=new Cdate (10,6,2026);
    ptr->show();
    delete ptr;
}

