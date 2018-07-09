#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int jumlahData, i;
	cout<<"Masukkan Jumlah Data : ";
	cin>>jumlahData;
	
	int nilaiMahasiswa[jumlahData][3];
	string dataMahasiswa[jumlahData][5];
	

	for (i=0;i<jumlahData;i++)
	{
		cout<<"\nData ke-  "<<i+1<<endl;
		cout<<"Nama\t\t: ";
		cin>>dataMahasiswa[i][0];
		cout<<"Kelas\t\t: ";
		cin>>dataMahasiswa[i][1];
		cout<<"NIM\t\t: ";
		cin>>dataMahasiswa[i][2];
		cout<<"Nilai UTS\t: ";
		cin>>nilaiMahasiswa[i][0];
		cout<<"Nilai UAS\t: ";
		cin>>nilaiMahasiswa[i][1];
	
		nilaiMahasiswa[i][2]=(nilaiMahasiswa[i][0]+nilaiMahasiswa[i][1])/2;
		if(nilaiMahasiswa[i][2]>=80)
			dataMahasiswa[i][3]="A", dataMahasiswa[i][4]="LULUS";
		else if(nilaiMahasiswa[i][2]>=70)
			dataMahasiswa[i][3]="B", dataMahasiswa[i][4]="LULUS";
		else if(nilaiMahasiswa[i][2]>=60)
			dataMahasiswa[i][3]="C", dataMahasiswa[i][4]="LULUS";
		else if(nilaiMahasiswa[i][2]>=50)
			dataMahasiswa[i][3]="D", dataMahasiswa[i][4]="TIDAK LULUS";
		else
			dataMahasiswa[i][3]="E", dataMahasiswa[i][4]="TIDAK LULUS";
	}
	
	cout<<endl<<endl;
	cout<<"================================================================================================================"<<endl;
	cout<<"\t\t\t\t\t\t DAFTAR NILAI MAHASISWA \t\t\t\t\t\t"<<endl;
	cout<<"================================================================================================================"<<endl;
	cout<<"No  |  \tNama\t|  Kelas  |   \tNIM\t|  Nilai UTS  |  Nilai UAS  |  Rata-Rata  |  Grade  |  Keterangan"<<endl;
	cout<<"================================================================================================================"<<endl;
	for (i=0;i<jumlahData;i++)
	{
	cout<<i+1<<"\t"<<dataMahasiswa[i][0]<<"  \t"<<dataMahasiswa[i][1]<<"\t"<<dataMahasiswa[i][2]<<"\t"<<nilaiMahasiswa[i][0]<<"\t"<<nilaiMahasiswa[i][1]<<"\t"<<nilaiMahasiswa[i][2]<<"\t"<<dataMahasiswa[i][3]<<"\t"<<dataMahasiswa[i][4]<<endl;
	}
	cout<<"================================================================================================================"<<endl;
	
	getch();
}
