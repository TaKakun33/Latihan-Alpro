/*Nama File 	: gayaSentr.c */
/*Deskripsi 	: menghitung gaya sentripetal yang terjadi dari massa m, kecepatan v, dan jari-jari r. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Rabu, 26 Februari 2025 &  jam */

# include <stdio.h>

int main(){
    /*Kamus*/
    float m;
    float v;
    float r;
    float f;
    
    /*Algoritma*/
    printf("masukan massa : ");
    scanf("%f",&m);
    printf("masukan kecepatan : ");
    scanf("%f",&v);
    printf("masukan pervepatan : ");
    scanf("%f",&r);

    f = m * ((v*v)/r);
    printf("\nnilai kamu : %f",f);

    return 0;
}