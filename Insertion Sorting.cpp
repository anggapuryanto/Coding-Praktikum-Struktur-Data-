#include <iostream>
#include <conio.h>
using namespace std;

int i,j,temp,size,data[20],kecil;

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
     for(i=1;i<size;i++)
     {
         temp=data[i];
         j= i-1;
         while(data[j]>temp && j>=0)
         {
             data[j+1] = data[j];
             j--;
         }
         data[j+1] = temp;
         for(int proses=0; proses < size; proses++)
                {
                    cout<<data[proses]<<" ";
                }
                cout<<endl;
     }
     cout<<"DATA YANG SUDAH DIURUTKAN : ";
     for (i=0; i<size; i++)
    {
        cout<< data[i]<<" ";
    }
    
    getch();
}                 
