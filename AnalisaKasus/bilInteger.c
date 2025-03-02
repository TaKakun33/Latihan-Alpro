/*Nama File 	: bilInteger.c */
/*Deskripsi 	: menentukan apakah masukan tersebut termasuk bilangan positif/negatif/nol. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Rabu, 26 Februari 2025 &  jam */

# include <stdio.h>

int main(){
    /*Kamus*/
    int i;
    
    /*Algoritma*/
    printf("Masukan bilangan int : ");
    scanf("%f",&i);

    if (i > 0){
       printf("Bilangan bulat positif");
    }
    else if (i < 0){
       printf("Bilangan bulat negatif");
    }
    else{
       printf("Bilangan nol");
    }

    return 0;
}