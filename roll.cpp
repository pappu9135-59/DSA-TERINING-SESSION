#include<iostream>
using namespace std;

class btech{
    public:
    int roll;
    double cgpa;
    char section;
};

int main(){
    btech*obj= new btech; //rull time a

    obj->roll=123;
    obj->cgpa=8.3;
    obj->section='A';

    cout<<"Roll:"<<obj->roll <<endl;
    cout<<"cgpa:"<<obj->cgpa <<endl;
    cout<<"section"<<obj->section<<endl;
    
    return 0;

}

// g++ 126.cpp -o 126.exe -static-libgcc -static-libstdc++