#include<iostream>
#include<vector>
#include<string.h>
#include <exception>
using namespace std;

class Student{
    public:
    int roll;
    string Sname;
    Student(int rollNo,string name){
        this->roll=rollNo;
        this->Sname=name;


    }
    void display(){
        cout<<"roll no " <<roll<<endl;
        cout<<"name is "<<Sname<<endl;
    }


};

int main(){
    vector<Student> std;
    std.push_back(Student(1,"A"));
    std.push_back(Student(2,"B"));

    for(auto& s :std){

    
    s.display();
    }
}
