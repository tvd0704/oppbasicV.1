
/////////=========================ticket 9:ke thua trua tuong=====================================////////////

#include<iostream>
using namespace std;

class Dog
{
private:
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




//pitbull
class Pitbull:public Dog
{
private:
string Ten;
int Tuoi;
float ChieuCao;
float CanNang;
public:
void Suagugu();

};

void Pitbull::Suagugu(){
Sua();
cout<<"gugu"<<endl;
}


//begie
class Begie:public Dog
{
    private:
string Ten;
int Tuoi;
float ChieuCao;
float CanNang;
public:
void Suagaugau();
};
void Begie::Suagaugau(){
    Sua();
    cout<<"gaugau"<<endl;
}

//mastiff
class Mastiff:public Dog
{
private:
string Ten;
int Tuoi;
float ChieuCao;
float CanNang;
string hu;
public:
};


//alaskan
class Alaskan:public Dog 
{
private:
string Ten;
int Tuoi;
float ChieuCao;
float CanNang; 
  public:  
void Suawoof();

};
void Alaskan::Suawoof(){
    Sua();
    cout<<"woof woof"<<endl;
}

//husky
class Husky:public Dog
{
private:
string Ten;
int Tuoi;
float ChieuCao;
float CanNang;
public:
void Suawooooo();

};
void Husky::Suawooooo(){
    Sua();
    cout<<"Wooooooo"<<endl;
}


int main(){

Husky hk;
hk.Suawooooo();



    return 0;
}