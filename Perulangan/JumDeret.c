/*Nama File 	: JumDeret.c */
/*Deskripsi 	: menghitung jumlah total deret bilangan . */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: Selasa, 4 Maret 2025 &  jam 09.49 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int N;
    int jml = 0;
    int i = 0;

    /*Algoritma*/
    printf("Masukan Input bilangan int : ");
    scanf("%d",&N);

    if (N > 0){
        for (i=1;i <= N; i++){
            jml += i;
        }
        printf("Total deret : %d\n",jml);
    } else {
        printf("Masukan tidak Boleh Negatif\n");
    }

    return 0;
}