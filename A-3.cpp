#include<iostream>
using namespace std;
int count_even(int* p, int a[])
{
	int count = 0;
	for(int i = 0; i<(*p); i++)
	{
		if(a[i] % 2 == 0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n;
	cout<<"Nhap vao so N bat ky: "<<endl;
	cin>>n;
	cout<<"Nhap vao mang: "<<endl;
	int a[1000];
	for(int i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	count_even(&n,a);
	cout<<"So so chan trong mang la: "<<endl;
	cout<<count_even(&n,a);
}
