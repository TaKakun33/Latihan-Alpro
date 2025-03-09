/*Nama File 	: FaktorBil.c */
/*Deskripsi 	: menentukan faktor bilangan yang dapat dibentuk oleh bilangan N tersebut. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Selasa, 4 Maret 2025 &  jam 10.23 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int N;
    int i ;

    /*Algoritma*/
    printf("Masukan Input : ");
    scanf("%d",&N);
    
    if (N > 0){
        for (i = 1; i <=  N; i++){
            if(N % i == 0){
                printf("%d ",i);
            }
        }
        printf("\n");    
    } else {
        printf("Masukan tidak Boleh Negatif");
    }
    
    return 0;
}