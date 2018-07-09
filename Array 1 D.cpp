#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i;
    int list_int[10];
    for (i=0; i<10; i++)
    {
        list_int[i]=i+1;
        cout<<"list_int ["<<i<<"]" << " di inisialisasikan dengan : "<<list_int[i]<<endl;
    }
    getch();
}
