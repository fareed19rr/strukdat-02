/*
Nama : Muhamad Farid Ridho Rambe
NPM : 140810180033
Nama Program : Move Zero To End of Array
Tanggal Buat : 05/03/2019
Deskripsi : Memindahkan nilai 0 ke ujung array
*/

#include <iostream>
using namespace std;

void moveZeroToEnd(int larik[100],int n){
	int hitung = 0;
	
	for(int i=0;i<n;i++){
		if(larik[i]!=0){
			larik[hitung++]=larik[i];		
		}
	}
	
	 while (hitung < n) 
        larik[hitung++] = 0;
}


int main(){
	int larik[100];
	int n;
	cout<<"Masukkan jumlah larik : ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"Masukkan larik ke-"<<i+1<<" : ";
		cin>>larik[i];
	}
	moveZeroToEnd(larik,n);
	cout<<"Hasil setelah menggunakan fungsi moveZeroToEnd : "<<endl;
	for(int i=0;i<n;i++){
		cout<<larik[i]<<" ";
	}
}
