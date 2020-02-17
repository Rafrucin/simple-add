//SPOJ submission 22913965 (CPP)plaintext list.Status: AC, problem RNO_DOD, contest SPOJPL.By ravruc(ravruc), 2018 - 12 - 20 14 : 11 : 46.
#include <iostream>

using namespace std;



int main()
{
    int iprob, ileliczb, a, suma = 0;
    cin >> iprob;

    for (int j = 1; j <= iprob; j++)
    {



        cin >> ileliczb;
        for (int i = 1; i <= ileliczb; i++)
        {
            cin >> a;
            suma = suma + a;
        }


        cout << suma << endl;
        suma = 0;
    }
    return 0;
}
