/*Nama File 	: hitungTahanan.c */
/*Deskripsi 	: menghitung total tahanan dan memperiksa apakah tahanan tersebut positif. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 16.21 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int t1;
    int t2;
    int t3;
    int total;

    /*Algoritma*/
    printf("Masukan tahanan 1 : ");
    scanf("%d",&t1);
    printf("Masukan tahanan 2 : ");
    scanf("%d",&t2);
    printf("Masukan tahanan 3 : ");
    scanf("%d",&t3);

    if (t1 >= 0 && t2 >= 0 && t3 >= 0){
        total = t1 + t2 + t3;
        printf("total tahanan : %d",total);
    }
    else{
        printf("Masukan tahanan tidak boleh negatif");
    }

    return 0;
}