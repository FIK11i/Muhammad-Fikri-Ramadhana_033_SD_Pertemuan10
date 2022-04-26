//Pembuatan program insention sorting
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	//inialisasi variabel
	int kunci,a,x,array[100];
	
	//proses input jumlah data yang ingin dilakukan sorting
	cout<<"Masukkan Jumlah Data : "; cin>>x;
	cout<<endl;
	
	//proses input elemen data berdasarkan jumlah data yang dimasukkan
	for (int i=0;i<x;i++)
	{
		cout<<"Data ke-"<<i+1<<" = "; cin>>array[i];
		cout<<endl;
	}
	
	/* Proses data dengan operasi insertion sort dapat dilakukan
	dengan melakukan perbandingan elemen terbesar dengan elemen terkecil
	yang kemudian akan diurutkan dengan menyisipkan elemen sesuai dengan urutan */
	
	//proses pengecekan data awal sampai data ke-n
	for (int i=0;i<x-1;i++)
	{
		//proses perbandingan data sebelumnya dengan data selanjutnya sesuai urutan
		a=i;
		for (int j=1;j<x;j++)
		{
			kunci=array[j];
			i=j-1;
			//proses perbandingan data selanjutnya dengan data sebelumnya, jika data selanjutnya lebih kecil maka akan disisipkan pada data sebelumnya yang nilainya lebih besar
			while (array[i]>kunci&&i>=0)
			{
				array[i+1]=array[i];
				i--;
			}
			array[i+1]=kunci;
		}
	}
	
	//proses penampilan data yang telah dilakukan pengurutan dengan tipe insertion sorting
	cout<<"Data Setelah Disorting "<<endl;
	for (int i=0;i<x;i++)
	{
		cout<<array[i]<<" ";
	}
	
	getch();
	return 0;
}
