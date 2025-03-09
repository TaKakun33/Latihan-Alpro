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
            printf("Januari\n");
            break;
        case 2 :
            printf("Februari\n");
            break;
        case 3 :
            printf("Maret\n");
            break;
        case 4 :
            printf("April\n");
            break;
        case 5 :
            printf("Mei\n");
            break;
        case 6 :
            printf("Juni\n");
            break;
        case 7 :
            printf("Juli\n");
            break;
        case 8 :
            printf("Agustus\n");
            break;
        case 9 :
            printf("September\n");
            break;
        case 10 :
            printf("Oktober\n");
            break;
        case 11 :
            printf("November\n");
            break;
        case 12 :
            printf("Desember\n");
            break;
        }
    }
    else{
        printf("Masukan nomor bulan tidak tepat\n");
    }

    return 0;
}