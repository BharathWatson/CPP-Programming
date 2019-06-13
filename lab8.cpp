#include<iostream>
#include<iomanip>
using namespace std;
template<typename bubble>
void Sort(bubble a[],int n)
{
	int i, j;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				bubble element=a[i];
				a[i]=a[j];
				a[j]=element;
			}
}
int main()
{
	int a[10],n,i;
	char str[10];
	cout<<"enter number of elements in array - ";
	cin>>n;
	cout<<"enter elements in integer array : "<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	Sort(a,n);
	cout<<"enter single characters in char array : "<<endl;
	for(i=0;i<n;i++)
		cin>>str[i];
	Sort(str,n);
	cout<<"\nSorted Order Integers: ";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
	cout<<"\nSorted Order Characters: ";
	for(i=0;i<n;i++)
		cout<<str[i]<<"\t";
}