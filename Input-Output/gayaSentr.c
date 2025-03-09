/*Nama File 	: gayaSentr.c */
/*Deskripsi 	: menghitung gaya sentripetal yang terjadi dari massa m, kecepatan v, dan jari-jari r. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 14.12 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int m;
    int v;
    int r;
    float f;
    
    /*Algoritma*/
    printf("masukan massa : ");
    scanf("%d",&m);
    printf("masukan kecepatan : ");
    scanf("%d",&v);
    printf("masukan jari-jari : ");
    scanf("%d",&r);

    f = m * ((v*v)/(float)r);
    printf("\nnilai kamu : %f",f);

    return 0;
}