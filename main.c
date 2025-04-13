#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// buat struktur data
typedef struct{
	char nama [100];
	int jumlah;
	int harga;
	int total_harga;
	float diskon;
}Produk;

//nama file
void nama_file (filename){	
	time_t t = time (NULL);
	struct_tm *tm = localtime(&t);
	strftime (filename, 100, "Struk_%Y&m&d_%H%M%S.txt", tm);
}

//bandingkan produk dengan qsort
void bandingkan_produk(const void a, void b){
	Produk *produkA = (Produk *)a;
	Produk *produkB = (Produk *)b;
	return produkB -> jumlah - produkA -> jumlah;
}

//reset pesanan ketika pilihan 55
void reset (Produk *produk, int jumlah_produk){
	int i;
	for (i = 0; i < jumlah_produk; i++){
		produk[i].jumlah = 0;
		produk[i].totsl_harga = 0;
		produk[i].diskon = 0;
	}
}

void tampilkan_menu{
	printf("========================================\n");
	printf("      Selamat datang di TOKO SKENSA     \n");
	printf("Silahkan masukkan produk yang inginkan :\n");
	printf("========================================\n");
	printf("|No |Nama Barang       | Harga         |\n");
	printf("========================================\n");
	printf("| 1 |Buku Tulis        | Rp. 5000      |\n");
	printf("| 2 |Pensil            | Rp. 2000      |\n");
	printf("| 3 |Penggaris         | Rp. 1000      |\n");
	printf("| 4 |Penghapus         | Rp. 1000      |\n");
	printf("| 1 |Bujur Sangkar     | Rp. 500       |\n");
	printf("========================================\n");
	printf("99. Struk Pembayaran \n");
	printf("55. Reset Pembelian \n");
	printf("00. Keluar \n");
	printf("========================================\n");
}













