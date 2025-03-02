/*Nama File 	: volBolaKerct.c */
/*Deskripsi 	: menghitung volume bola (Vb dalam meter kubik), dan volume kerucut (Vk dalam meter kubik) dari sebuah lingkaran dengan jari-jari r dan konstanta PHI sebesar 3.1415. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Rabu, 26 Februari 2025 &  jam */

# include <stdio.h>

int main(){
    /*Kamus*/
    float r;
    float Vb;
    float Vk;
    const float PHI = 3.1415;
    
    /*Algoritma*/
    printf("masukan jari2 : ");
    scanf("%f",&r);
    
    Vb = 4/3 * (PHI *(r*r*r)) ;
    Vk = 0.5 * Vb;

    printf("\nnVolume bola : %f",Vb);
    printf("\nnVolume kerucut : %f",Vk);
    
    return 0;
}