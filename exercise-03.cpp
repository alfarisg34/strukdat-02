/*	Nama program	: exercise-03
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 05 03 2019
	Deskripsi		: 
********************************************************************/
#include<iostream>
#include<string>
using namespace std;

struct Pegawai
{
    char NIP[1];
    char nama[30];
    char gol[1];
    int gaji[7];
};

void inputPegawai(int& n ,Pegawai[10])
{
    cout<<"masukan banyak pegawai : ";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Pegawai ke-"<<i+1<<endl;
        cout<<"NIP : ";cin>>pegawai[i].NIP;
        cout<<"Nama : ";cin>>pegawai[i].nama;
        cout<<"gol : ";cin>>pegawai[i].gol;
    }
}
void cetakDaftar(int n)
{
    cout<<"Daftar Pegawai"<<endl;
    cout<<"========================="<<endl;
    cout<<"NO.\tNama\tGol\tGaji";
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"\t"<<pegawai[i].nama<<"\t"<<pegawai[i].gol<<"\t"<<pegawai[i].gaji;
    }
    

}
void cariGaji(int n,Pegawai[10])
{
    for(int i;i<n;i++)
    {
        if(pegawai[i].gol==1)
        {
            pegawai[i].gaji=2000000;
        }
        if(pegawai[i].gol==2)
        {
            pegawai[i].gaji=3000000;
        }
        if(pegawai[i].gol==3)
        {
             pegawai[i].gaji=4000000;
        }
        if(pegawai[i].gol==4)
        {
             pegawai[i].gaji=8000000;
        }
    }
}
void rataGaji(int n,Pegawai[10])
{
    for(int i=0;i<n;i++)
    {
        rata=rata+pegawai[i].gaji;
    }
    rata=rata/n;
}
void gajiTerendah(int n,Pegawai[])
{
    terendah=10000000;
    for(int i=0;i<n;i++)
    {
        if(terendah>pegawai[i].gaji)
        {
            terendah=pegawai[i].gaji;
        }
    }
}
void gajiTertinggi(Pegawai[10],tertinggi)
{
    tertinggi=0;
    for(int i=0;i<n;i++)
    {
        if(tertinggi<pegawai[i].gaji)
        {
            tertinggi=pegawai[i].gaji;
        }
    }
}
int main()
{
    int n,rata,terendah,tertinggi;
    Pergawai pegawaiArr[10];
}