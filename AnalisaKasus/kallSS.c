/*Nama File 	: kallSS.c */
/*Deskripsi 	: menghitung 2 input integer dengan beberapa operasi. */
/*Pembuat   	: Akmal Kafli Anan-24060124120042 */
/*Tgl Pembuatan	: minggu, 2 Maret 2025 &  jam 16.47 */

# include <stdio.h>

int main(){
    /*Kamus*/
    int iA;
    int iB;
    char operasi;

    /*Algoritma*/
   printf("Maukan nilai A : ");
   scanf("%d",&iA);
   printf("Maukan nilai b : ");
   scanf("%d",&iB);
   printf("Maukan operasi : ");
   scanf(" %c",&operasi);

   switch (operasi)
   {
   case 'a' :
    printf("%d\n",iA + iB);
    break;

   case 'b' :
    printf("%d\n",iA - iB);
    break;

   case 'c' :
    printf("%d\n",iA * iB);
    break;

   case 'd' :
    printf("%f\n",iA / (float)iB);
    break;

   case 'e' :
    printf("%d\n",iA / iB);
    break;

   case 'f' :
    printf("%d\n",iA % iB);
    break;

   default:
    printf("Bukan pilihan menu yang benar\n");
    break;
   }

    return 0;
}