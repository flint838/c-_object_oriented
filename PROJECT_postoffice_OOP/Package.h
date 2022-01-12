#ifndef PACKAGE_H
#define PACKAGE_H
#include<iostream>
#include<fstream>
using namespace std;
class person{
    protected:
    string address;
    string city;
    long int contact;
    public:
    person(){}
    virtual void info_getter(string a, long int b, string d){};
    string getcity()const{
        return this->city;
    }
virtual ~person(){}
};
class sender:public person{
    public:
sender():person(){}
void info_getter(string a, long int b, string d){
    this->address = a;
    this->contact = b;
    this->city = d;
}
friend class Package;
friend class GPO;
~sender(){}
};
class reciever:public person{
public:
reciever():person(){} 
void info_getter(string a, long int b, string d){
    this->address = a;
    this->contact = b;
    this->city = d;
}
friend class GPO;
friend class Package;
~reciever(){}
};


class Package{
protected:
sender Sender;
reciever Reciever;
string description;
int order_id;
string shape;
int wieght;
int price;
string delivery_urgent_or_not;
public:
Package(){
    this->description = "";
    this->order_id = 0;
    this->shape = "";
}
/*
void setterp(string ptr, int ord, string sh, int wei, string duon){
string rec, sen, reccit, sencit;
long reci, sende;
this->wieght = wei;
this->delivery_urgent_or_not = duon;
this->shape = sh;
this->order_id = ord;
/*for(int i=0; i<100; i++){
    this->description[i] = ptr[i];
}*/
/*
this->description = ptr;
cout<<"enter the address of the reciever and the sender>>"<<endl;
cin>>rec;
cin>>sen;
cout<<"enter the recievers city"<<endl;
cin>>reccit;
cout<<"enter the sender's city"<<endl;
cin>>sencit;
cout<<"enter the contact info of the sender and reciever>>"<<endl;
cin>>reci;
cin>>sende;
this->Sender.info_getter(sen, sende, sencit);
this->Reciever.info_getter(rec,reci, reccit);
ofstream filer;
    filer.open("data.txt", ios::app);
    filer<<"Order Id : ";
    filer<<this->order_id;
    filer<<endl;
    filer<<"Description : ";
    filer<<this->description;
    filer<<endl;
    filer<<"reciever adress : ";
    filer<<this->Reciever.address;
    filer<<endl;
    filer<<"reciever's city : ";
    filer<<this->Reciever.city;
    filer<<endl;
    filer<<"reciever contact : ";
    filer<<this->Reciever.contact;
    filer<<endl;
    filer<<"sender address : ";
    filer<<this->Sender.address;
    filer<<endl;
    filer<<"sender contact : ";
    filer<<this->Sender.contact;
    filer<<endl;
    filer.close();
    
}
*/
int get_order()const{
    return this->order_id;
}
string getdescription()const{
    return this->description;
}
string getshape()const{
    return this->shape;
}
long int getrecievercontact(){
    return this->Reciever.contact;
}
string getrecieveraddress(){
return this->Reciever.address;
}
long int getsendercontact(){
    return this->Sender.contact;
}
string getsenderaddress(){
    return this->Sender.address;
}
friend class GPO;
~Package(){}
};
#endif