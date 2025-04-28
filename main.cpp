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
	int tong= cong(3,4,5);
	long tich= nhan(2,3,4);
	int hieu=tru(6,2,1);
	cout<<tong<<endl;
	cout<<hieu<<endl;
	cout<<tich<<endl;
}
