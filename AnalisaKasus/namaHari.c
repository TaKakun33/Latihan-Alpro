/*Nama File 	: namaHari.c */
/*Deskripsi 	: menentukan bulan apa dan mevalidasi dari masukan tersebut. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Rabu, 26 Februari 2025 &  jam */

# include <stdio.h>

int main(){
    /*Kamus*/
    int hari;

    /*Algoritma*/
    printf("Masukan no hari : ");
    scanf("%d",&hari);

    if (hari >= 1 && hari <= 7){
        switch (hari)
        {
        case 1 :
            printf("Hari Senin");
            break;
        case 2 :
            printf("Hari Selasa");
            break;
        case 3 :
            printf("Hari Rabu");
            break;
        case 4 :
            printf("Hari Kamis");
            break;
        case 5 :
            printf("Hari Jumat");
            break;
        case 6 :
            printf("Hari Sabtu");
            break;
        case 7 :
            printf("Hari Minggu");
            break;
        }
    }
    else{
        printf("Masukan nomor hari tidak tepat");
    }

    return 0;
}