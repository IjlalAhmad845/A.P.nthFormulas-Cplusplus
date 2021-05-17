#include <iostream>
#include<conio.h>
using namespace std;

int main()
{int a[4],i,d;char ch;
cout<<"enter A.P. up to 4 terms=";
for(i=0;i<4;i++)
cin>>a[i];
d=a[1]-a[0];
if(a[0]-d>0)
   {ch='+';i=1;}
else
    {ch='-';i=-1;}
if(a[1]-a[0]!=a[2]-a[1] || a[3]-a[2]!=a[2]-a[1])
      cout<<"This is not an A.P.";
else
{if(d==1 && a[0]==1)       {cout<<"Nth term="<<"n";cout<<"\nSn term="<<"1/2(n"<<char(253)<<"+"<<"n)";}
else if(d==1)              {cout<<"Nth term="<<"n"<<ch<<i*(a[0]-d);cout<<"\nSn term="<<"1/2(n"<<char(253)<<"+"<<2*a[0]-d<<"n)";}
else if(d>0)               {cout<<"Nth term="<<d<<"n";if((a[0]-d)!=0)cout<<ch<<i*(a[0]-d);
                            if(d%2==0 && d==2 && a[0]==2)
                                cout<<"\nSn term="<<"n"<<char(253)<<"+"<<"n";
                            else if(d%2==0 && d==2 && a[0]==1)
                                cout<<"\nSn term=n"<<char(253);
                            else if(d%2==0 && d==2)
                                cout<<"\nSn term=n"<<char(253)<<"+"<<(2*a[0]-d)/2<<"n";
                            else
                                {if((2*a[0]-d)%2==0 && d%2==0 && (2*a[0]-d)!=2)
                                cout<<"\nSn term="<<d/2<<"n"<<char(253)<<"+"<<(2*a[0]-d)/2<<"n)";
                                else if((2*a[0]-d)%2==0 && d%2==0 && (2*a[0]-d)==2)
                                    cout<<"\nSn term="<<d/2<<"n"<<char(253)<<"+"<<"n";
                                   else if((2*a[0]-d)==0 && d%2==0)
                                    cout<<"\nSn term="<<d/2<<"n"<<char(253);
                                    else if((2*a[0]-d)==1)
                                    cout<<"\nSn term="<<"1/2("<<d<<"n"<<char(253)<<"+n)";
                                    else if((2*a[0]-d)!=1)
                                    cout<<"\nSn term="<<"1/2("<<d<<"n"<<char(253)<<"+"<<2*a[0]-d<<"n)";
                                    }}
else if(d==-1)             {cout<<"Nth term="<<i*(a[0]-d)<<"-"<<"n\nSorry this program is in development for decreasing APs sums";}
else if(d<0)               {cout<<"Nth term="<<i*(a[0]-d)<<"-"<<-1*d<<"n\nSorry this program is in development for decreasing APs sums";}
}
getch();}
