/*	Nama program	: moveZeroToEnd
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 05 03 2019
	Deskripsi		: menenpatkan angka 0 di akhir
********************************************************************/
#include<iostream>
using namespace std;

void moveZeroToEnd(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
void input(int (&arr)[100],int& n)
{
    cout<<"Masukan panjang data : ";cin>>n;
    cout<<"Masukan data cth[1 2 3 4 5]: ";
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
}
void output(int arr[],int n)
{
    cout<<"Hasil : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100];
    int n;
    input(arr,n);
    moveZeroToEnd(arr,n);
    output(arr,n);
}