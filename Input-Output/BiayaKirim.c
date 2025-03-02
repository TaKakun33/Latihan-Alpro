/*Nama File 	: BiayaKirim.c */
/*Deskripsi 	: menghitung biaya pengiriman barang berdasarkan berat dan jarak. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Rabu, 26 Februari 2025 &  jam */

# include <stdio.h>

int main(){
    /*Kamus*/
    int berat;
    int jarak;
    int biaya;

    /*Algoritma*/
    printf("masukan berat paket : ");
    scanf("%f",&berat);
    printf("masukan jarak pengiriman : ");
    scanf("%f",&jarak);

    biaya = 10000 + (5000*berat) + (2000*jarak);
    printf("biaya pengiriman : %f",biaya);

    return 0;
}