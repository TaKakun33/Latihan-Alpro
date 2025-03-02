/*Nama File 	: jarakGLBB.c */
/*Deskripsi 	: menghitung jarak yang ditempuh benda yang mengalami gerak lurus berubah beraturan dengan kecepatan awal v0 dalam waktu t, dan percepatan a. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 13.45 */


# include <stdio.h>

int main(){
    /*Kamus*/
    int v0;
    int t;
    int a;
    float s;
    
    /*Algoritma*/
    printf("masukan kecepatan : ");
    scanf("%d",&v0);
    printf("masukan waktu : ");
    scanf("%d",&t);
    printf("masukan percepatan : ");
    scanf("%d",&a);
    
    s = v0 * t + 0.5 *(a*(t*t));
    printf("\nnilai kamu : %f",s);
    
    return 0;
}