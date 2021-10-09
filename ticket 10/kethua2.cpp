
/////////=========================ticket 10:ke tap=====================================//////////////////
#include<iostream>
using namespace std;

class Dog
{
protected:
string Ten;
int Tuoi;
float ChieuCao;
float CanNang;

public:
//constructor and destructor
Dog();
Dog(string Ten,int Tuoi,float ChieuCao,float CanNang);
virtual ~Dog();

//getter
string GetTen(){return Ten;}
int GetTuoi(){return Tuoi;}
float GetChieuCao(){return ChieuCao;}
float GetCanNang(){return CanNang;}

//setter
void SetTen(string ten);
void SetTuoi(int tuoi);
void SetChieuCao(float chieucao);
void SetCanNang(float cangnang);
 void Sua();
 void Hu();
 void NhapThongTin();
 void XuatThongTin();
};
//Dog definition
//Constructor and destructor

Dog::Dog(){
SetTen("");
SetTuoi(0);
SetChieuCao(0.0);
SetCanNang(0.0);
}

Dog::Dog(string Ten,int Tuoi,float ChieuCao, float CanNang){
SetTen(Ten);
SetTuoi(Tuoi);
SetChieuCao(ChieuCao);
SetCanNang(CanNang);
}
Dog::~Dog(){


}

//setter

void Dog::SetTen(string ten){

    this->Ten=ten;
}
void Dog::SetTuoi(int tuoi){

    this->Tuoi=tuoi;
}
void Dog::SetChieuCao(float chieucao){
this->ChieuCao=chieucao;
}

void Dog::SetCanNang(float cannang){
    this->CanNang=cannang;
}

void Dog::Sua(){
    cout<<"sua ";
}

void Dog::Hu(){
    cout<<"hu";
}

//nhap thong tin
void Dog::NhapThongTin(){
cout<<"ten:";
getline(cin,this->Ten);
cout<<"tuoi:";
cin>>Tuoi;
cout<<"chieu cao:";
cin>>ChieuCao;
cout<<"can nang:";
cin>>CanNang;
cin.ignore();
}

//xuat thong tin
void Dog::XuatThongTin(){
cout<<"\nten:"<<this->Ten;
cout<<"\ntuoi:"<<Tuoi;
cout<<"\nchieu cao:"<<ChieuCao;
cout<<"\ncan nang:"<<CanNang;
cout<<"\n\n";
}



////ticket 10:DogCage

class DogCage:public Dog
{
private:
float KhoiLuongMax;
float Hangsokhoiluong;
public:
DogCage();
DogCage(float KhoiLuongMax,float HangSoKhoiLuong);
 void AddDog();
void RemoveDog();
void ThrowSquirrel();
float Gettotalweight();
float GetKhoiLuongMax(){return this->KhoiLuongMax;}
float GetKhoiLuongChuong(){return this->Hangsokhoiluong;}
void  SetKhoiLuongMax(float khoiluongmax);
void SetHangSoKhoiLuong(float hangsokhoiluong);
void ListHuky();
};

//constructor and Destructor
DogCage::DogCage(){
SetKhoiLuongMax(0);
SetHangSoKhoiLuong(0);
}
DogCage::DogCage(float khoiluongmax,float khoiluongchuong){
SetKhoiLuongMax(khoiluongmax);
SetHangSoKhoiLuong(khoiluongchuong);
}
void DogCage::SetHangSoKhoiLuong(float khoiluongchuong){
  this->Hangsokhoiluong=khoiluongchuong;
}

void DogCage::SetKhoiLuongMax(float khoiluongmax){
 this->KhoiLuongMax=khoiluongmax;
}

//Adddog
void DogCage::AddDog(){
    float cannang;
      cout<<"nhap can nang cua chu cho:";
    cin>>cannang;
if(Hangsokhoiluong+cannang>KhoiLuongMax){

    cout<<"qua tai";
}
else{
    Hangsokhoiluong=Hangsokhoiluong+cannang;
}


}

//removedog
void DogCage::RemoveDog(){
    float cannang;
       cout<<"nhap can nang cua chu cho:";
    cin>>cannang;
    Hangsokhoiluong=Hangsokhoiluong-cannang;

}

//throwsquirrel
void DogCage::ThrowSquirrel(){
cout<<"cac chu cho deu:";
Sua();
cout<<endl;
cout<<"giong cho soi se vua:";
Sua();
Hu();

}
float DogCage::Gettotalweight(){

    return this->KhoiLuongMax;
}

void DogCage::ListHuky(){

/////nhap thong tin cho cac ca the thuoc giong husky////////////
Dog huky[100];
    for(int i=0;i<2;i++){
Dog HUKY;
cout<<"\n\n\t================================thong tin chu co husky thu "<<i+1<<"=================================\n";
HUKY.NhapThongTin();
huky[i]=HUKY;
}
////////danh sach cac ca the thuoc giong husky
cout<<"\n\n\t\t========danh sach giong cho husky trong chuong==========\n";
for(int i=0;i<2;i++){

huky[i].XuatThongTin();
}


}


int main(){

DogCage Dc;
Dog huky[100];
Dc.ListHuky();



    return 0;
}