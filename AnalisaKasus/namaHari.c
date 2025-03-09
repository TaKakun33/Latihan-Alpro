/*Nama File 	: namaHari.c */
/*Deskripsi 	: menentukan hari apa dan mevalidasi dari masukan tersebut. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 15.49 */

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
            printf("Seni\nn");
            break;
        case 2 :
            printf("Selasa\n");
            break;
        case 3 :
            printf("Rabu\n");
            break;
        case 4 :
            printf("Kamis\n");
            break;
        case 5 :
            printf("Jumat\n");
            break;
        case 6 :
            printf("Sabtu\n");
            break;
        case 7 :
            printf("Minggu\n");
            break;
        }
    }
    else{
        printf("Masukan nomor hari tidak tepat\n");
    }

    return 0;
}