/*Nama File 	: CekBilPrima.c */
/*Deskripsi 	: menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah sebuah bilangan Prima atau Bukan. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Jumat, 7 Maret 2025 &  jam 10.20 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int N;
    int i;
    int total  = 0;

    /*Algoritma*/
    printf("Masukan Input : ");
    scanf("%d",&N);

    if (N > 0){
        for (i = 1; i <=  N; i++){
            if(N % i == 0){
                printf("%d ",i);
                total += 1;
            }
        }
        
        if (N != 1 && total <= 2){
            printf("\nBilangan Prima \n");
        } 
        else{
            printf("\nBukan Bilangan Prima \n");
        }
    } else {
        printf("Masukan tidak Boleh Negatif\n");
    }
    
    return 0;
}