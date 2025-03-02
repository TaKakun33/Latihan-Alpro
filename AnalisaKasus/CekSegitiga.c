/*Nama File 	: CekSegitiga.c */
/*Deskripsi 	: menentukan apakah termasuk segitiga samasisi/samakaki/sembarang. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 16.34 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int s1;
    int s2;
    int s3;

    /*Algoritma*/
    printf("Masukan sisi 1 : ");
    scanf("%d",&s1);
    printf("Masukan sisi 2 : ");
    scanf("%d",&s2);
    printf("Masukan sisi 3 : ");
    scanf("%d",&s3);

    if (s1 >= 0 && s2 >= 0 && s3 >= 0){
        if (s1 == s2 && s2 == s3 && s3 == s1){
            printf("Segitiga Sama Sisi");
        }
        else if (s1 == s2 || s2 == s3 || s3 == s1) {
            printf("Segitiga Sama Kaki");
        }
        else{
            printf("Segitiga Sembarang");
        }
    }
    else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }

    return 0;
}