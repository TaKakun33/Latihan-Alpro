/*Nama File 	: jarakPBola.c */
/*Deskripsi 	: menghitung jarak yang ditempuh benda yang mengalami gerak parabola dengan kecepatan awal v0 dalam waktu t dengan gravitasi g. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 13.57 */

# include <stdio.h>
# include <math.h>

int main(){
    /*Kamus*/
    int v0;
    int t;
    const float g = 9.80665;
    float y;
    
    /*Algoritma*/
    printf("masukan kecepatan : ");
    scanf("%d",&v0);
    printf("masukan waktu : ");
    scanf("%d",&t);

    y = v0 * t - 0.5 *(g*(t*t));
    printf("\nnilai kamu : %f",y);
    
    return 0;
}