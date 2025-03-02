/*Nama File 	: jarakGLBB.c */
/*Deskripsi 	: menghitung jarak yang ditempuh benda yang mengalami gerak lurus berubah beraturan dengan kecepatan awal v0 dalam waktu t, dan percepatan a. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Rabu, 26 Februari 2025 &  jam */


# include <stdio.h>

int main(){
    /*Kamus*/
    float v0;
    float t;
    float a;
    float s;
    
    /*Algoritma*/
    printf("masukan kecepatan : ");
    scanf("%f",&v0);
    printf("masukan waktu : ");
    scanf("%f",&t);
    printf("masukan percepatan : ");
    scanf("%f",&a);
    
    s = v0 * t + 0.5 *(a*(t*t));
    printf("\nnilai kamu : %f",s);
    
    return 0;
}