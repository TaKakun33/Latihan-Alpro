/*Nama File 	: namaBulan.c */
/*Deskripsi 	: menentukan bulan apa dan mevalidasi dari masukan tersebut. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 16.02 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int bulan;

    /*Algoritma*/
    printf("Masukan no bulan : ");
    scanf("%d",&bulan);

    if (bulan >= 1 && bulan <= 12){
        switch (bulan)
        {
        case 1 :
            printf("Januari");
            break;
        case 2 :
            printf("Februari");
            break;
        case 3 :
            printf("Maret");
            break;
        case 4 :
            printf("April");
            break;
        case 5 :
            printf("Mei");
            break;
        case 6 :
            printf("Juni");
            break;
        case 7 :
            printf("Juli");
            break;
        case 8 :
            printf("Agustus");
            break;
        case 9 :
            printf("September");
            break;
        case 10 :
            printf("Oktober");
            break;
        case 11 :
            printf("November");
            break;
        case 12 :
            printf("Desember");
            break;
        }
    }
    else{
        printf("Masukan nomor bulan tidak tepat");
    }

    return 0;
}