/*	Nama program	: exercise-02
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 05 03 2019
	Deskripsi		: Theater stuct
********************************************************************/
#include<iostream>
#include<string.h>
using namespace std;

struct Theater
{
    int room;
    char seat[3];
    char movieTitle[30];
};

int main()
{
    Theater theater;
    theater.room=7;
    strcpy(theater.seat,"J9");
    strcpy(theater.movieTitle,"Adit & Jarwo");

    cout<<theater.room<<endl;
    cout<<theater.seat<<endl;
    cout<<theater.movieTitle<<endl;
}