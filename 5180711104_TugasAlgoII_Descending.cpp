#include<iostream>
#include<conio.h>

int data[10];
int n;
using namespace::std;
int main()
{
int tmp,i,j;

cout<<"-------------------------------------------------"<<endl;
cout<<"INSERTION SORT DESCENDING"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"INPUTKAN BANYAKNYA DATA = ";
cin>>n;
cout<<"-------------------------------------------------"<<endl;
for(int i=0;i<n;i++)
{
cout<<"INPUTKAN DATA KE-"<<(i+1)<<" = " ;
cin>>data[i];
}

cout<<"-------------------------------------------------"<<endl;
cout<<"DATA YANG DIINPUTKAN :"<<endl;
for(i=0;i<n;i++)
{
cout<<data[i]<<" ";
}
cout<<endl<<"-------------------------------------------------"<<endl;

for(i=1;i<n;i++)
{
tmp=data[i];
j=i-1;
while(data[j]<tmp && j>=0)
{
data[j+1]=data[j];
j--;
}
data[j+1]=tmp;
}

cout<<"DATA YANG TELAH DIURUTKAN SECARA DESCENDING : "<<endl;
for(int i=0;i<n;i++)
{
cout<<data[i]<<" ";
}
cout<<endl;

cout<<"-------------------------------------------------"<<endl;
cout<<"INSERTION SORT SELESAI !"<<endl;
cout<<"-------------------------------------------------"<<endl;
getch();
}
