//selection sort
//penyelesaian selection sort dengan ascending

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	//inisialisasi variabel
	int n,i,tukar,data[5],temp;
	
	//----Proses selection sort dimulai---
	//memasukkan banyaknya elemen array yang akan di select
	cout << "Masukkan banyaknya elemen Array : ";
	cin >> n;
	cout << "\n";
	
	//proses looping
	for (i = 0; i < n; i++)
		{
			cin >> data[i];
		}
		for (i = 0; i < n; i++)
		
			for (tukar = i+1; tukar < n; tukar++)
		
			{
				//kasus dasar
				if (data[i] > data[tukar])
				{
					temp = data[i];
					data[i] = data[tukar];
					data[tukar] = temp;
				}
			}
			
	//----Proses selection sort berakhir---
    //menampilkan hasil sorting
    	cout << "\n";
	cout << "Hasil array yang sudah di sorting adalah :";
		for (i = 0; i < n; i++)
		{
			cout << " ["<<data[i]<<"] ";
		}
		
return 0;
}
