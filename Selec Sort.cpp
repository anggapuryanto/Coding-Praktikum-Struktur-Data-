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
  
     for(i=0;i<size-1; i++)
     {
          kecil = i;
          for(j=i+1;j<size;j++)
          {
              if (data[j] < data[kecil]) 
              { 
                 kecil = j;
              }
          }
         
          temp = data[i];
          data[i] = data[kecil];
          data[kecil] = temp;
          
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
