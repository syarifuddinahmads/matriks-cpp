#include <iostream>
using namespace std;

int main()
{

    int jumlahKolomBaris,a[100][100],b[100][100];
    int codeMenu;
    do
    {
        cout<<"Menu Matriks : "<<endl;
        cout<<"1. Input Matriks"<<endl;
        cout<<"2. Penjumlahan Matriks"<<endl;
        cout<<"3. Pengurangan Matriks"<<endl;
        cout<<"4. Perkalian Matriks"<<endl;
        cout<<"5. Pembagian Matriks"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Pilih Menu : ";
        cin>>codeMenu;
        switch(codeMenu)
        {
        case 1:
            cout<<"Input Jumlah Kolom & Baris Matriks A & B : ";
            cin>>jumlahKolomBaris;

            for(int i = 1; i <= jumlahKolomBaris; i++)
            {
                for(int j = 1; j <= jumlahKolomBaris; j++)
                {
                    cout<<"Input Matriks A["<< i <<","<<j<<"] = ";
                    cin>>a[i][j];
                }
            }
            cout<<endl;
            for(int i = 1; i <= jumlahKolomBaris; i++)
            {
                for(int j = 1; j <= jumlahKolomBaris; j++)
                {
                    cout<<"Input Matriks B["<< i <<","<<j<<"] = ";
                    cin>>b[i][j];
                }
            }
            cout<<endl;
            break;
        case 2:
            cout<<endl;
            cout<<"Hasil Penjumlahan Matriks A dan Matriks B :"<<endl;
            for(int i = 1; i <= jumlahKolomBaris; i++)
            {
                for(int j = 1; j <= jumlahKolomBaris; j++)
                {
                    cout<<a[i][j] + b[i][j]<<"   ";
                }
                cout<<"\n";
            }
            cout<<endl;
            break;
        case 3:
            cout<<endl;
            cout<<"Hasil Pengurangan Matriks A dan Matriks B :"<<endl;
            for(int i = 1; i <= jumlahKolomBaris; i++)
            {
                for(int j = 1; j <= jumlahKolomBaris; j++)
                {
                    cout<<a[i][j] - b[i][j]<<"   ";
                }
                cout<<"\n";
            }
            cout<<endl;
            break;
        case 4:
            cout<<endl;
            cout<<"Hasil Perkalian Matriks A dan Matriks B :"<<endl;
            for(int i = 1; i <= jumlahKolomBaris; i++)
            {
                for(int j = 1; j <= jumlahKolomBaris; j++)
                {
                    cout<<a[i][j] * b[i][j]<<"   ";
                }
                cout<<"\n";
            }
            cout<<endl;
            break;
        case 5:
            cout<<endl;
            cout<<"Hasil Pembagian Matriks A dan Matriks B :"<<endl;
            for(int i = 1; i <= jumlahKolomBaris; i++)
            {
                for(int j = 1; j <= jumlahKolomBaris; j++)
                {
                    cout<<a[i][j] / b[i][j]<<"   ";
                }
                cout<<"\n";
            }
            cout<<endl;

            break;
        case 6:
            return 0;
            break;
        default:
            cout<<"Menu tidak valid !"<<endl;
            break;
        }

    }
    while(true);
    return 0;

}
