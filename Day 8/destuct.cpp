#include<iostream>
using namespace std;

class Student{

    int roll_no;
    char name[20];

    public:
    void accept(){
     //cout<<"accept the roll no:"<<endl;
    cin>>roll_no;
    cin>>name;
    }
    
    void display(){
        cout<<"roll no is:\t"<<roll_no<<"name is:\t"<<name<<endl;

    }

    ~Student(){
        cout<<"destructor is called";

    }
};

int main(){

    int n,i;
    cout<<"enter no of student:"<<endl;
    cin>>n;
    Student *ptr=new Student[n];
    cout<<"accept the details"<<endl;
    for(i=0;i<n;i++)
        ptr[i].accept();
        cout<<"display details"<<endl;
    for(i=0;i<n;i++)
        (ptr+i)->display();
        delete[] ptr;
    


}



