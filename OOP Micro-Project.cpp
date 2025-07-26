#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int a;
class currency
{
   public :
  int dollars;
    float B,i,J,P,ba,sk,zi,ir,ch,ru,uk,sa,au,pe;
     void accept();
     void in();
}c;
void currency::accept()
{
 cout<<"Enter currency in American Dollars"<<endl;
 cin>>dollars; 
}
void currency::in()
{
 system("Color 0B");
 i=dollars*81.34;
 cout<<"\n"<<dollars<<" $ are equal to "<<i<<" Indian Rupees"<<endl;
 B=dollars*0.871818;
 cout<<"\n"<<dollars<<" $ are equal to "<<B<<" British pounds"<<endl;
 J=dollars*144.25;
 cout<<"\n"<<dollars<<" $ are equal to "<<J<<" Japanese yen"<<endl;  
 P=dollars*223.14;
 cout<<"\n"<<dollars<<" $ are equal to "<<P<<" Pakistani rupees"<<endl;
 ba=dollars*5.06;
 cout<<"\n"<<dollars<<" $ are equal to "<<ba<<" Brazilian Real"<<endl;
 sk=dollars*1394.50;
 cout<<"\n"<<dollars<<" $ are equal to "<<sk<<" South Korean Won"<<endl;
 zi=dollars*16.27;
 cout<<"\n"<<dollars<<" $ are equal to "<<zi<<" Zambian Kwacha"<<endl;
 ir=dollars*1;
 cout<<"\n"<<dollars<<" $ are equal to "<<ir<<" Irish Euro"<<endl;
 ch=dollars*7.23;
 cout<<"\n"<<dollars<<" $ are equal to "<<ch<<" Chienese Yuan"<<endl;
 ru=dollars*61.90;
 cout<<"\n"<<dollars<<" $ are equal to "<<ru<<" Russian Ruble"<<endl;
 uk=dollars*36.75;
 cout<<"\n"<<dollars<<" $ are equal to "<<uk<<" Ukrainian Hryvnia"<<endl;
 sa=dollars*17.75;
 cout<<"\n"<<dollars<<" $ are equal to "<<sa<<" South African Rand"<<endl;
    au=dollars*1.55;
 cout<<"\n"<<dollars<<" $ are equal to "<<au<<" Austrailian Dollars"<<endl;
 pe=dollars*364.51;
 cout<<"\n"<<dollars<<" $ are equal to "<<pe<<" Sri Lankan Rupee"<<endl;
}
class india:public currency
{
 private :
  int r;
    public :
     void accept()
 {
  cout<<"Enter currency in Indian Rupees";
     cin>>r;
    }
    void in()
{
 system("Color 0B");
 i=r*0.012;
 cout<<"\n"<<r<<" Rupees are equal to "<<i<<" American Dollars"<<endl;
 B=r*0.011;
 cout<<"\n"<<r<<" Rupees are equal to "<<B<<" British pounds"<<endl;
 J=r*1.80;
 cout<<"\n"<<r<<" Rupees are equal to "<<J<<" Japanese yen"<<endl;  
 P=r*2.72;
 cout<<"\n"<<r<<" Rupees are equal to "<<P<<" Pakistani rupees"<<endl;
 ba=r*0.064;
 cout<<"\n"<<r<<" Rupees are equal to "<<ba<<" Brazilian Real"<<endl;
 sk=r*16.80;
 cout<<"\n"<<r<<" Rupees are equal to "<<sk<<" South Korean Won"<<endl;
 zi=r*0.20;
 cout<<"\n"<<r<<" Rupees are equal to "<<zi<<" Zambian Kwacha"<<endl;
 ir=r*0.012;
 cout<<"\n"<<r<<" Rupees are equal to "<<ir<<" Irish Euro"<<endl;
    ch=r*0.089;
 cout<<"\n"<<r<<" Rupees are equal to "<<ch<<" Chienese Yuan"<<endl;
 ru=r*0.75;
 cout<<"\n"<<r<<" Rupees are equal to "<<ru<<" Russian Ruble"<<endl;
 uk=r*0.45;
 cout<<"\n"<<r<<" Rupees are equal to "<<uk<<" Ukrainian Hryvnia"<<endl;
 sa=r*0.22;
 cout<<"\n"<<r<<" Rupees are equal to "<<sa<<" South African Rand"<<endl;
 au=r*0.019;
 cout<<"\n"<<r<<" Rupees are equal to "<<au<<" Austrailian Dollars"<<endl;
 pe=r*4.51;
 cout<<"\n"<<r<<" Rupees are equal to "<<pe<<" Sri Lankan Rupee"<<endl;
} 
};

 currency c1;
 india i1;
  char ch;
void san()
{
 c1.accept();
 c1.in();
 printf("\nWant to convert more Y/N?");
 ch=getche();
 if(ch=='Y'||ch=='y')
 {
    cout<<"\nEnter 1 for converting American Dollars into various currencys : ";
 cout<<"\nEnter 2 for converting Indian Rupees into various currencys : ";
 cin>>a;
    }
}
void ket()
{
  i1.accept();
    i1.in();
    printf("\nWant to convert more Y/N?");
 ch=getche();
 if(ch=='Y'||ch=='y')
 {
    cout<<"\nEnter 1 for converting American Dollars into various currencys : ";
 cout<<"\nEnter 2 for converting Indian Rupees into various currencys : ";
 cin>>a;
    }
}
int main()
{
 system("Color 0B");
 cout<<"\n                                                        Welcome to Currency Converter"<<endl;
 system("color 0C");
 cout<<"Enter 1 for converting American Dollars into various currencys : ";
cout<<"\nEnter 2 for converting Indian Rupees into various currencys : ";
 cin>>a;
 while(a==1)
 {
 san();
  if(ch=='y' && a==1)
 {
 san(); 
 }
 else
 {
  if(ch=='y' && a==2)
  {
   ket();
  }
  else
  {
   cout<<"Wrong choice entered";
   break;
  }
 }
    }
    while(ch=='y' && a==2)
    {
     ket();
 if(ch=='y' && a==2)
 {
 ket(); 
 }
 else
 {
  if(ch=='y' && a==1)
  {
   san();
  }
  else
  {
   cout<<"Wrong choice entered";
   break;
  }
 }
    }
    getch();
    return 0;
}