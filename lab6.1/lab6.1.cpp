#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* c, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

int Sum(int* c, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if ((c[i] % 6 == 0) || ((i + 1) % 5 != 0))
            S += c[i];
    return S;
}
void Print(int* c, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
}



void Replacing(int* r, const int size)
{
    for (int i = 0; i < size; i++)
        if (((i + 1) % 5 != 0) || (r[i] % 6 == 0))
            cout << 0 << "  ";
        else
            cout << r[i] << "  ";
}

int Count(int* c, const int size)
{
    int j = 0;
        for (int i = 0; i < size; i++)
                if ((c[i] % 6 == 0) || ((i + 1) % 5 != 0))
                    j++;
        return j;
}

int main()
{
    srand((unsigned)time(NULL));

        const int n = 25;
        int c[n];
        int j;

        int Low = 4;
        int High = 72;

        Create(c, n, Low, High);

            cout << "Original array" << endl;
            Print(c, n);

            cout << "\nSum" << endl;
            cout << "S = " << Sum(c, n) << endl;

            cout << "\nCount" << endl;
            cout << "j = " << Count(c, n) << endl;

            cout << "\nNew array" << endl;
            Replacing(c, n);
            cout << endl;
        system("pause");
        return 0;
}