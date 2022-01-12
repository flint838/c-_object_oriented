#ifndef POSTOFFICE_H
#define POSTOFFICE_H
#include<iostream>
#include<fstream>
#include"Gpo.h"
using namespace std;
class Employee{
    private:
    string name;
    int ID;
    GPO*obj;
    public:
    Employee(){

    }
    Employee(string a, int b, GPO pop){
        this->name = a;
        this->ID = b;
        obj = &pop;
    }
    bool Login(string a, int b){
     bool flag = false;
     if(b == this->ID && a == this->name){
     flag = true;
     }
     return flag;   
    }
    string getnem()const{
        return (this->name);
    }
    void loginsys(){
        string a;
        int b;
        cout<<"Enter Your name>>:"<<endl;
        cin>>a;
        cout<<"enter the ID>>:"<<endl;
        cin>>b;
        if(Login(a, b)){
            cout<<"<<<< WELCOME "<<this->name<<">>>>"<<endl;
        }
        else{
            cout<<"WRONG ID AND NAME ENTERED !!!"<<endl;
        }
    }
    void enter_data(){
        cout<<"enter the data for the Packages in the data file mr."<<this->getnem()<<endl;
        this->obj->setter();
    }
    void get_data(){
        ifstream objfile;
        //obj.open("data.txt");

    }
};
#endif