/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : Exercise 03
Tanggal Buat : 05/03/2019
Deskripsi : Membuat daftar gaji menurut golongan
*/

#include <iostream>
using namespace std;

struct Pegawai{
	char nip[20];
	char nama[30];
	int gol;
};
typedef Pegawai pegawai[100];

void inputPegawai(pegawai pegawai[100],int n){
	cout<<"Masukkan banyak pegawai : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Masukkan NIP pegawai : ";
		cin>>pegawai[i].nip;
		cout<<"Masukkan Nama pegawai : ";
		getline(cin,pegawai[i].nip);
		cout<<"Masukkan Golongan pegawai : ";
		cin>>pegawai[i].gol[i];
	}
}

void cariGaji(pegawai pegawai[100],int gaji[100],int n){
	for(int i=0;i<n;i++){
		if(pegawai.gol==1){
		gaji[i]=2000000
		}
		else if(pegawai.gol==2){
			gaji[i]=3000000
		}
		else if(pegawai.gol==3){
			gaji[i]=5000000
		}
		else(pegawai.gol==4){
			gaji[i]=8000000
		}
	}
}

void cetakDaftar(pegawai pegawai[100],int gaji[100],int n){
	int temp;
	 pegawai temp;
 	for(int i=1; i<n; i++){
        temp = pegawai[i];
        while(i>0 && pegawai[i-1].nip>temp.nip){
            pegawai[i] = pegawai[i-1];
            i = i-1;
        }
        pegawai[i]= temp;
    }
    for(int i=0;i<n;i++){
    	cout<<"NIP : "<<pegawai[i].nip;
    	cout<<"Nama : "<<pegawai[i].nama;
    	cout<<"Golongan : "<<pegawai[i].gol;
    	cout<<"Gaji : "<<gaji[i];
    	cin.ignore();
	}
}

void rataGaji(int gaji[100],int n){
	int jumlah;
	for(int i=0;i<n;i++){
		jumlah += gaji[i];
	}
	int rata;
	rata = jumlah/n;
	cout<<"Rata gaji = "<<rata<<endl;
}

void gajiTerendah(int gaji[100],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(gaji[i]<[gaji[j]]){
				temp = gaji[i];
				gaji[i] = gaji[j];
				gaji[j] = temp;
			}
		}
	}
	cout<<"Pegawai dengan gaji terendah : "<<pegawai[0].nip;
}

void gajiTertinggi(int gaji[100],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(gaji[i]>[gaji[j]]){
				temp = gaji[i];
				gaji[i] = gaji[j];
				gaji[j] = temp;
			}
		}
	}
	cout<<"Pegawai dengan gaji tertinggi : "<<pegawai[0].nip;
}

int main(){
	int gaji[100];
	pegawai pegawai[100];
	int n;
	inputPegawai(pegawai,n);
	cariGaji(pegawai,gaji,n);
	cetakDaftar(pegawai,gaji,n);
	rataGaji(gaji,n);
	gajiTerendah(gaji,n);
	gajiTertinggi(gaji,n);
}
