#include <stdio.h>

//// kalkulator sederhana
//
void main(){
//
//    int angka1, angka2;
//    char opsi;
//    float hasil;
//
//    printf("====Kalkulator Sederhana====\n\n");
//    printf("Masukkan angka : ");
//    scanf("%d", &angka1);
//    printf("Masukkan opsi  : ");
//    scanf(" %c", &opsi);
//    printf("Masukkan angka2 : ");
//    scanf("%d", &angka2);
//
//    if(opsi == '+'){
//        hasil = angka1 + angka2;
//        printf("\nHasilnya : %.2f", hasil);
//    }
//    else if(opsi == '-'){
//        hasil = angka1 - angka2;
//        printf("\nHasilnya : %.2f", hasil);
//    }
//    else if(opsi == 'x'){
//        hasil = angka1 * angka2;
//        printf("\nHasilnya : %.2f", hasil);
//    }
//    else if(opsi == '/'){
//        hasil = angka1 / angka2;
//        printf("\nHasilnya : %.2f", hasil);
//    }
//    else{
//        printf("\nMaaf opsi yang anda pilih tidak sesuai\n");
//    }
// = {1,2,3,4,5,6,7,8,9,10};
//}

//void main(){
//
////    int nomor[10];
//    int hasil;
//
//    for(int i = 10; i > 0; i-=1){
//            //if(i % 2 == 1){
//                printf("print angka: %d\n", i);
//                hasil += i;
//            //}
//        }
//        printf("hasil total = %d", hasil);
//}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil1, bil2, pil, hsl;

    puts("Kalkulator Sederhana");
    printf("Masukkan bilangan pertama : ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua : ");
    scanf("%d", &bil2);

    printf("Menu Matematika\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Pembagian\n");
    printf("4. Perkalian\n");
    printf("Masukkan pilihan anda : ");
    scanf("%d", &pil);

    if(pil == 1)
    hsl = bil1 + bil2;
        else if (pil == 2)
        hsl = bil1 - bil2;
            else if(pil == 3)
            hsl = bil1 / bil2;
        else if(pil == 4)
        hsl = bil1 * bil2;
    else
    puts("Error!");

    printf("Hasil operasi tersebut = %d", hsl);
    return 0;
}

