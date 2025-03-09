/*Nama File 	: CekBilSemp.c */
/*Deskripsi 	: menentukan apakah sebuah bilangan integer sembarang N (N>0) adalah bilangan Sempurna atau Bukan. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Jumat, 7 Maret 2025 &  jam 10.51 */

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
        for (i = 1; i <  N; i++){
            if(N % i == 0){
                printf("%d ",i);
                total += i;
            }
        }

        printf("= %d",total);

        if (total == N ){
            printf("\nBilangan Sempurna\n");
        }
        else{
            printf("\nBukan Bilangan Sempurna\n");
        }
    } else {
        printf("Masukan tidak Boleh Negatif\n");
    }

    return 0;
}