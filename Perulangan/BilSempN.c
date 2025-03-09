/*Nama File 	: BilSempN.c */
/*Deskripsi 	: mencetak bilangan Sempurna sampai dengan bilangan integer sembarang N (N>0). */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Jumat, 7 Maret 2025 &  jam 11.25 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int N;
    int i;
    int j;
    int total  = 0;

    /*Algoritma*/
    printf("Masukan Input : ");
    scanf("%d",&N);

    if (N > 0){
        for (i = 1; i <=  N; i++){
            total = 0;

            for (j = 1; j < i; j++){
                if(i % j == 0){
                    total += j;
                }
            }

            if (total == i){
                printf("%d ",i);
            } 
        }
        printf("\n");

    } else {
        printf("Masukan tidak Boleh Negatif\n");
    }
    
    return 0;
}