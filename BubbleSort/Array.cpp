#include <iostream>
#include "Array.h"
using namespace std;
void Nhap(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap a["<<i<<"] = ";
		cin>>a[i];
	}
}
void Xuat(int *a,int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"\t";
}