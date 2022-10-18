#include<iostream>
using namespace std;
float luas,panjang,r,sisi,lebar,alas,tinggi,luas1,luas2,luas3,luas4,alasa,alasb,d1,d2;

float segitiga()
{
    luas1=0.5*alas*tinggi;
    cout<<"\nluas ="<<luas1;
    cout<<"\n";

}

float persegip()
{
    luas2=panjang*lebar;
    cout<<"\nluas="<<luas2;
    cout<<"\n";

}



float lingkaran()
{
    luas3=22/7*r*r;
    cout<<"\nluas= "<<luas3;
    cout<<"\n";

}

float persegi()
{
    luas4=sisi*sisi;
    cout<<"\nluas = "<<luas4;
    cout<<"\n";

}

float trapesium()
{
    luas1=0.5*alasa+alasb*tinggi;
    cout<<"\nluas ="<<luas1;
    cout<<"\n";

}

float jajargenjang()
{
    luas2=alas*tinggi;
    cout<<"\nluas="<<luas2;
    cout<<"\n";

}

float layanglayang()
{
    luas3=0.5*d1*d2;
    cout<<"\nluas= "<<luas3;
    cout<<"\n";

}

float belahketupat()
{
    luas4=0.5*d1*d2;
    cout<<"\nluas = "<<luas4;
    cout<<"\n";

}

int main()

{
    cout<<"\n========================";

    cout<<"\nmenghitung luas segitiga";
    cout<<"\nalas =";cin>>alas;
    cout<<"\ntinggi =";cin>>tinggi;
segitiga();

cout<<"\n===========================";

cout<<"\nmenghitug luas persegi panjang";
cout<<"\npanjang=";cin>>panjang;
cout<<"\nlebar=";cin>>lebar;
persegip();

cout<<"\n============================";

cout<<"\nmenghitung luas lingkaran";
cout<<"\njari=";cin>>r;
lingkaran();

cout<<"\n============================";

cout<<"\nmenghitung luas persegi ";
cout<<"\nsisi = ";cin>>sisi;
persegi  ();

cout<<"\n=======================";

    cout<<"\nmenghitung luas trapesium";
    cout<<"\nalasa =";cin>>alasa;
    cout<<"\nalasb =";cin>>alasb;
    cout<<"\ntinggi =";cin>>tinggi;
trapesium ();

cout<<"\n===========================";

cout<<"\nmenghitug luas jajar genjang";
cout<<"\nalas=";cin>>alas;
cout<<"\ntinggi=";cin>>tinggi;
jajargenjang();


cout<<"\n============================";

cout<<"\nmenghitung luas layang layang";
cout<<"\nd1 =";cin>>d1;
cout<<"\nd2 =";cin>>d2;
layanglayang();


cout<<"\n============================";

cout<<"\nmenghitung luas belah ketupat ";
cout<<"\nd1 = ";cin>>d1;
cout<<"\nd2 =";cin>>d2;
belahketupat ();


}
