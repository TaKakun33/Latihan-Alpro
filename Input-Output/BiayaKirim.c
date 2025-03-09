/*Nama File 	: BiayaKirim.c */
/*Deskripsi 	: menghitung biaya pengiriman barang berdasarkan berat dan jarak. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 14.50 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int berat;
    int jarak;
    int biaya;

    /*Algoritma*/
    printf("masukan berat paket : ");
    scanf("%d",&berat);
    printf("masukan jarak pengiriman : ");
    scanf("%d",&jarak);

    biaya = 10000 + (5000*berat) + (2000*jarak);
    printf("biaya pengiriman : %d",biaya);

    return 0;
}