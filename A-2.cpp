#include<iostream>
using namespace std;
void check(int a[], int n)
{
	for(int i = 0; i<n; i++)
	{
		cout<<&a[i]<<" ";
	}
}
int main()
{
	int n; 
	cin>>n; 
	int a[100];
	for(int i = 0; i<n; i++)
	{
		cout<<&a[i]<<" ";
	}
	check(a,n);
	return 0;
}
// ket qua doi voi mang a tu ben trong ham check va ben ngoai deu giong nhau
