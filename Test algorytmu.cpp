#include <iostream>
#include <cstdio>
#include <windows.h>


// Kod zrodlowy testujacy funkcje: przelicz_ciag()


using namespace std;

int tab[100], ciag[100];
int t = -1, p = -1, k, m, z, n, e;


void dowolny_ciag()
{
    int r;


    do
    {
        cout << "Podaj pierwszy wyraz ciagu: ";
        cin >> ciag[0];
        if(ciag[0]<=0)
        {
            cout << "Liczba musi byc dodatnia !" << endl;
            Sleep(1000);
            system("cls");
        }

    } while(ciag[0]<=0);


    do
    {

        cout << "Podaj ilosc liczb w ciagu: ";
        cin >> z;
        if(z<=0)
        {
            cout << "Liczba musi byc dodatnia !" << endl;
            Sleep(1000);
            system("cls");
            cout << "Podaj pierwszy wyraz ciagu: " << ciag[0] << endl;
        }

    } while(z<=0);


    do
    {
        cout << "Podaj roznice ciagu: ";
        cin >> r;
        if(r<=0)
        {
            cout << "Liczba musi byc dodatnia !" << endl;
            Sleep(1000);
            system("cls");
            cout << "Podaj pierwszy wyraz ciagu: " << ciag[0] << endl;
            cout << "Podaj ilosc liczb w ciagu: " << z << endl;
        }

    } while(r<=0);


    cout << "Oto liczby ciagu: " << endl;

    for(n=0;n<z;n++)
    {
        ciag[n] = ciag[0] + n * r;
        cout << ciag[n] << " ";
    }

    cout << endl;

    n = 0;

}



void sprawdz_k()
{

   cout << "Podaj k: ";
    cin >> k;


    e = ciag[z-1];
   for(n=0;n<z-1;n++)
    {
        ciag[z-1] += ciag[n];
    }



    if(ciag[n]<=k)
    {
        cout << "Brak podtablic spelniajacych zadane warunki." << endl;
        Sleep(1000);
        system("cls");

    }


}

int main()
{




   do
   {
        dowolny_ciag();
        sprawdz_k();


   } while(ciag[n]<=k);


    ciag[z-1] = e;




   for(n=0;n<z;n++)
    {
        tab[n] = ciag[n];
    }





    cout << endl;




   cout << "-----------------------------------------------------------" << endl;

    do
    {


        p++;
        cout << endl << "licznik petli do.while: " << p << endl;

        // TEST
        //--------

        cout << "n: " << n << endl;
        cout << "Wartosc tab[n]: " << tab[n] << endl;
        getchar();
        getchar();

        cout << "z-1: " << z << endl;
        getchar();

        //********

        cout << "Porownanie..." << endl << endl;
       for(n=0;n<z;n++)
        {

            if(tab[n]>k)
            {
                m=tab[n];
                break;
            }
            cout << "tab[n] w petli: " << tab[n] << endl;
        }






        cout << "-----------------------------------------------------------" << endl;

        cout << "m: " << m;
        getchar();
        getchar();


        if(m<k)
        {

            t++;
            z -= 1;

            cout << "Cztery kolejne tab[n]: " << endl << tab[0] << endl << tab[1] << endl << tab[2] << endl << tab[3] << endl;;
            cout << endl << "Stworzenie..." << endl << endl;
            for(n=0;n<z;n++)
            {
                tab[n] += ciag[n+(t+1)];
                cout << "tab[n] += tab[n+(t+1)]: " << tab[n] << endl;

                cout << "ciag[n]: " << ciag[n] << endl;
            }


        }



    } while(m<k);






    for(int i=0;i<=p;i++)
    {

        cout << ciag[n] << " ";
        n++;

    }



    cout << endl;
    cout << "m wieksze od k: " << m;


    return 0;
}


