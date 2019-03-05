/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : Exercise 02
Tanggal Buat : 05/03/2019
Deskripsi : Membuat struct theater
*/
#include <iostream> //memasukkan library input outputs standar
#include <string.h> //memasukkan library string agar bisa memakai fungsi strcpy
using namespace std; //mengaktifkan penulisan standar

struct Theater{ //membuat struct theater
	int room; //var1 berupa nomor ruangan
	char seat[3]; //var2 berupa kursi
	char movieTitle[30]; //var3 berupa nama film
};

int main(){ //fungsi utama
	Theater bioskop; //mendeklarasikan ulang
	bioskop.room = 7; //memasukkan nomor ruang
	strcpy(bioskop.seat, "J9"); //memasukkan kode kursi
	strcpy(bioskop.movieTitle, "Adit & Jarwo"); //memasukkan nama film
	//hasil
	cout<<bioskop.room<<endl;
	cout<<bioskop.seat<<endl;
	cout<<bioskop.movieTitle<<endl;
}
