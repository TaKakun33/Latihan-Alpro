/*Nama File 	: volBolaKerct.c */
/*Deskripsi 	: menghitung volume bola (Vb dalam meter kubik), dan volume kerucut (Vk dalam meter kubik) dari sebuah lingkaran dengan jari-jari r dan konstanta PHI sebesar 3.1415. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 14.22 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int r;
    float Vb;
    float Vk;
    const float PHI = 3.1415;
    
    /*Algoritma*/
    printf("masukan jari2 : ");
    scanf("%d",&r);
    
    Vb = 1.333333 * (PHI *(r*r*r)) ;
    Vk = 0.5 * Vb;

    printf("\nnVolume bola : %f",Vb);
    printf("\nnVolume kerucut : %f",Vk);
    
    return 0;
}