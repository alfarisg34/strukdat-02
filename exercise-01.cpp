/*	Nama program	: exercise-01
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 05 03 2019
	Deskripsi		: 
********************************************************************/
#include<iostream>
#include<string>
using namespace std;

struct Orang
{
    int umur;
    char nama[30];
    char jk[1];
    char goldar[2];
};

int main()
{
    Orang orang;
    cin>>orang.umur;
    cin>>orang.nama;
    cin>>orang.goldar;
    cin>>orang.jk;

    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.goldar<<endl;
    cout<<orang.jk<<endl;
}