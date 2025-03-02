/*Nama File 	: luasKellLayang.c */
/*Deskripsi 	: menghitung luas layang-layang (Luas dalam meter persegi), dan keliling layang-layang (Kell dalam meter) dari sebuah layang-layang dengan sisi s1 dan s2, serta diagonal d1 dan d2. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Rabu, 26 Februari 2025 &  jam */

# include <stdio.h>

int main(){
    /*Kamus*/
    float s1;
    float s2;
    float d1;
    float d2;
    float luas;
    float kell;
    
    /*Algoritma*/
    printf("masukan sisi 1 : ");
    scanf("%f",&s1);
    printf("masukan sisi 2 : ");
    scanf("%f",&s2);
    printf("masukan diagonal 1 : ");
    scanf("%f",&d1);
    printf("masukan diagonal 2 : ");
    scanf("%f",&d2);

    luas = 0.5 * d1 * d2;
    kell =  2 * (s1 + s2);

    printf("Luas layang-layang : %f \n",luas);
    printf("keliling layang-layang : %f",kell);

    return 0;
}