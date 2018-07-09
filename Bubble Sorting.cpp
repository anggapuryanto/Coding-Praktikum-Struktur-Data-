#include <iostream>
#include <conio.h>
using namespace std;
int i,j,temp,size,data[20];
int main ()
{
    cout<<"Masukan Jumlah Data : ";
    cin>>size;
    cout<<endl<<endl; 
    for (i=0; i < size; i++)
    {
        cout<<"Masukan Data ke- "<<(i+1)<<" : ";
        cin>>data[i]; 
    }
    for (i=0; i<size; i++)
    {
        for (j=i+1; j<size; j++)
        {
            if (data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
                for(int proses=0; proses < size; proses++)
                {
                    cout<<data[proses]<<" ";
                }
                cout<<endl;
            }
        } 
    }  
    cout<<endl;
    cout<<"DATA YANG SUDAH DIURUTKAN : ";
    for (i=0; i<size; i++)
    {
        cout<< data[i]<<" ";
    }
getch();
}
