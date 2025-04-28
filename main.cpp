#include<bits/stdc++.h> 
using namespace std;
int cong(int a,int b,int c)
{
	return a+b+c;
}
long nhan(int a, int b,int c)
{
	return a*b*c;
}
int tru(int a,int b,int c)
{
	return a-b-c; 
}
int main(){
	int a,b,c;
	cout<<"Nhap a,b,c: ";cin>>a>>b>>c;
	int tong= cong(a,b,c);
	long tich= nhan(a,b,c);
	int hieu=tru(a,b,c);
	cout<<"Tong: "<<tong<<endl;
	cout<<"Hieu: "<<hieu<<endl;
	cout<<"Tich: "<<tich<<endl;
}
