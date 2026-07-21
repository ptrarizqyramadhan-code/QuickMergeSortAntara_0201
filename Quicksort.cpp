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

    pivot = arr[low]; // mengisi variabel pivot dengan nilai array index ke low

    i = low + 1; // mengisi variabel i dengan nilai low + 1
    j = high; // mengisi variabel j dengan nilai high

    while (i <= j) // selama i lebih kecil sama dengan j
    {
        while ((arr[i] <= pivot) && (i <= high)) // selama nilai array index ke i lebih kecil sama dengan pivot dan i lebih kecil sama dengan high
        {
            i++; // increment i
            cmp_count++;
        }
        cmp_count++;

        while ((arr[j] > pivot) && (j >= low)) // selama nilai array index ke j lebih besar dari pivot dan j lebih besar sama dengan low
        {
            j--; // decrement j
            cmp_count++;
        }
        cmp_count++;

        if (i < j) // jika i lebih kecil dari j
        {
            swap(i, j); // memanggil fungsi swap dengan parameter i dan j
        }
    }
    if (low < j) // perintah jika posisi low < j
    {
        swap(low, j); // tukar element pivot
    }
    quicksort(low, j - 1); // memanggil fungsi quicksort dengan parameter low dan j - 1

    quicksort(j + 1, high); // memanggil fungsi quicksort dengan parameter j + 1 dan high

}

void output()
{
    cout << "\n------------------------" << endl;// display untuk menampilkan keterangan element array yang telah di urutkan 
    cout << "\nInputkan Isi element array" << endl;
    cout << "\n------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "\nJumlah Perbandingan : " << cmp_count << endl; // menampilkan jumlah perbandingan didalam algoritma

    cout << "Jumlah Pergerakan data : " << mov_count << endl; // menampilkan jumlah pergerakan data

}
