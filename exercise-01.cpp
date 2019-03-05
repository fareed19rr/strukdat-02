/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : Exercise 01
Tanggal Buat : 05/03/2019
Deskripsi : Menampilkan data sederhana memakai struct
*/

#include <iostream>
#include <string.h>
using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char goldar[2];
	char jk[1];
};

int main(){
	Orang orang;
	orang.umur=10;
	strcpy(orang.nama, "fahmi");
	strcpy(orang.goldar, "O");
	strcpy(orang.jk, "L");
	
	cout<<orang.umur<<endl;
	cout<<orang.nama<<endl;
	cout<<orang.goldar<<endl;
	cout<<orang.jk<<endl;
}
