#ifndef GPO_H
#define GPO_H
#include"Package.h"
#include<iostream>
#include<fstream>
using namespace std;
//in this class we'll gather all the packages of the same city of recieving
/*
class GPO{
private:
string name;
Package*packages;
public:
GPO(){
this->packages = new Package[3];
}
GPO(string nam){
    this->name = nam;
}
GPO(GPO&obj){
    this->name = obj.name;
}
string getnameo()const{
    return(this->name);
}
void setter(){
    string descr, shap, ahistayataiz;
    int ident, wazan;
    int breaker;
    for(int i=0;; i++){
    cout<<"enter 0 if you dont want to enter info, else press 1"<<endl;
    cin>>breaker;
    if(breaker == 1){
    cout<<"enter the description of the package "<<i+1<<" :"<<endl;
    cin>>descr;
    cout<<"enter the shape of the package :"<<endl;
    cin>>shap;
    cout<<"enter the wight of the package :"<<endl;
    cin>>wazan;
    cout<<"enter the ID number of the Package :"<<endl;
    cin>>ident;
    cout<<"now enter if the package is to be sent on an urgent basis or not"<<endl;
    cin>>ahistayataiz;
    //this->packages[i]->setterp(descr, ident, shap, wazan, ahistayataiz);
    string rec, sen, reccit, sencit;
long reci, sende;
this->packages[i].wieght = wazan;
this->packages[i].delivery_urgent_or_not = ahistayataiz;
this->packages[i].shape = shap;
this->packages[i].order_id = ident;
/*for(int i=0; i<100; i++){
    this->description[i] = ptr[i];
}*/
/*
this->packages[i].description = descr;
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
this->packages[i].Sender.info_getter(sen, sende, sencit);
this->packages[i].Reciever.info_getter(rec,reci, reccit);
ofstream filer;
    filer.open("data.txt", ios::app);
    filer<<"Order Id : ";
    filer<<this->packages[i].order_id;
    filer<<endl;
    filer<<"Description : ";
    filer<<this->packages[i].description;
    filer<<endl;
    filer<<"reciever adress : ";
    filer<<this->packages[i].Reciever.address;
    filer<<endl;
    filer<<"reciever's city : ";
    filer<<this->packages[i].Reciever.city;
    filer<<endl;
    filer<<"reciever contact : ";
    filer<<this->packages[i].Reciever.contact;
    filer<<endl;
    filer<<"sender address : ";
    filer<<this->packages[i].Sender.address;
    filer<<endl;
    filer<<"sender contact : ";
    filer<<this->packages[i].Sender.contact;
    filer<<endl;
    filer.close();
    if(this->packages[i].wieght<=50){
        this->packages[i].price = 10;
    }
    else if(this->packages[i].wieght > 50){
        this->packages[i].price = ((this->packages[i].wieght) / 5) + 10;
    }    
    if(this->packages[i].delivery_urgent_or_not == "urgent"){
        this->packages[i].price = (this->packages[i].price * 0.20) + this->packages[i].price;
    }
    }
    else if(breaker == 0){
        break;
    }
    }
}
void sorter(){
    ofstream obj2;
    obj2.open("sortedmails.txt", ios::app);
for(int i=0; i<2; i++){
for(int j = i+1; j<3; j++){
  if((this->packages->Reciever.getcity()) == (this->packages->Reciever.getcity())){
   obj2<<"City :";
   obj2<<this->packages->Reciever.city;
   obj2<<endl;
   obj2<<"the ID's of the packages of the recivers :";
   obj2<<this->packages->order_id;
   obj2<<" ";
   obj2<<this->packages->order_id;
   }  
}
}
obj2.close();
}


};
*/
//int index = 0;
class GPO:public Package{
private:
string name;
int ID[3] ={0,0,0};
string city[3] = {"", "", ""};
//Package*packages;
public:
GPO(){
//this->packages = new Package[3];
}
GPO(string nam){
    this->name = nam;
}
GPO(GPO&obj){
    this->name = obj.name;
}
string getnameo()const{
    return(this->name);
}
void setter(){
    string descr, shap, ahistayataiz;
    int ident, wazan;
    int breaker;
    for(int i=0;i<3; i++){
    cout<<"enter 0 if you dont want to enter info, else press 1"<<endl;
    cin>>breaker;
    if(breaker == 1){
    cout<<"enter the description of the package "<<i+1<<" :"<<endl;
    cin>>descr;
    cout<<"enter the shape of the package :"<<endl;
    cin>>shap;
    cout<<"enter the wight of the package :"<<endl;
    cin>>wazan;
    cout<<"enter the ID number of the Package :"<<endl;
    cin>>ident;
    cout<<"now enter if the package is to be sent on an urgent basis or not"<<endl;
    cin>>ahistayataiz;
    //this->packages[i]->setterp(descr, ident, shap, wazan, ahistayataiz);
    string rec, sen, reccit, sencit;
long reci, sende;
this->wieght = wazan;
this->delivery_urgent_or_not = ahistayataiz;
this->shape = shap;
this->order_id = ident;
/*for(int i=0; i<100; i++){
    this->description[i] = ptr[i];
}*/

this->description = descr;
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
this->ID[i] = this->order_id;
this->city[i] = this->Reciever.city;
ofstream filer;
    filer.open("data.txt");
    filer<<"Order Id : ";
    filer<<"\n";
    filer<<this->order_id;
    filer<<"\n";
    filer<<"Description : ";
     filer<<"\n";
    filer<<this->description;
    filer<<"\n";
    filer<<"reciever adress : ";
     filer<<"\n";
    filer<<this->Reciever.address;
    filer<<"\n";
    filer<<"reciever's city : ";
     filer<<"\n";
    filer<<this->Reciever.city;
    filer<<"\n";
    filer<<"reciever contact : ";
     filer<<"\n";
    filer<<this->Reciever.contact;
    filer<<"\n";
    filer<<"sender address : ";
     filer<<"\n";
    filer<<this->Sender.address;
    filer<<"\n";
    filer<<"sender contact : ";
     filer<<"\n";
    filer<<this->Sender.contact;
    filer<<"\n";
    filer.close();
    if(this->wieght<=50){
        this->price = 10;
    }
    else if(this->wieght > 50){
        this->price = ((this->wieght) / 5) + 10;
    }    
    if(this->delivery_urgent_or_not == "urgent"){
        this->price = (this->price * 0.20) + this->price;
    }
    }
    else if(breaker == 0){
        sorter();
        break;
    }
    }
    sorter();
}
void sorter(){

/*    ofstream obj2;
    obj2.open("sortedmails.txt", ios::app);
for(int i=0; i<2; i++){
for(int j = i+1; j<3; j++){
  if((this->Reciever.getcity()) == (this->Reciever.getcity())){
   obj2<<"City :";
   obj2<<this->Reciever.city;
   obj2<<endl;
   obj2<<"the ID's of the packages of the recivers :";
   obj2<<this->order_id;
   obj2<<" ";
   obj2<<this->order_id;
   }  
}
}
obj2.close();*/
int IoD[3];
int ind;
string coity[3];
int awain;
string lala;
long int fazool;
ifstream filer;
filer.open("data.txt");
for(ind = 0; ind<3; ind++){
    getline(filer, lala);//filer>>lala;    filer<<"Order Id : ";
    getline(filer, lala);
    filer>>IoD[ind];
    getline(filer, lala);            
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, coity[ind]);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    filer>>fazool;
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    getline(filer, lala);
    filer>>fazool;
    getline(filer, lala);   
    filer>>fazool;//getline(filer, lala);
    getline(filer, lala);
}
    filer.close();
//cout<<this->city[0]<<" "<<this->ID[0]<<endl;
ofstream obj2;
    obj2.open("sortedmails.txt");
for(int i=0; i<2; i++){
for(int j = i+1; j<3; j++){
  if(city[i] == "\0" || city[j] == "\0"){
      continue;
  }
  if(city[i] == city[j]){
   obj2<<"City :";
   obj2<<city[i];
   obj2<<endl;
   obj2<<"the ID's of the packages of the recivers :";
   obj2<<ID[i];
   obj2<<" ";
   obj2<<ID[j];
   }  
}
}
obj2.close();
}


};
#endif