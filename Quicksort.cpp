#include <iostream>
using namespace std;
int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;  

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }
    cout << "\n------------------------" << endl;
    cout << "\nInputkan Isi element array" << endl;
    cout << "\n------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

void swap(int x, int y)
{
    int temp = arr [x];

    arr[x] = arr[y];
    arr[y] = temp;
    mov_count++;
}

void quicksort(int low,int high)
{
    int temp;
    int pivot, i, j; // inisialisasi variabel pivot, i,dan j

    if (low > high) // jika low lebih besar dari high 
    {
        return; // untuk mengembalikan nilai

    }
