// ======== MEMBUAT PREDIKAT RAPOT =======


// nama =
// nilai apa dan kategori A-E

// jika nilai 91-100 = A
// jika nilai 81-90  = B
// jika nilai 71-80  = C
// jika nilai 61-70  = D
// jika nilai < 60   = E

//#include <stdio.h>
//
//void main() {
//
//    char nama[20];
//    int nilai;
//    char rank[5] = {'A', 'B', 'C', 'D', 'E'};
//
//    printf("====PROGRAM PREDIKAT NILAI====\n\n");
//
//
//        printf("Masukkan Nama  : ");
//        scanf("%[^\n]s", &nama);
//
//        printf("masukkan Nilai : ");
//        scanf("%d", &nilai);
//
//        printf("\n====HASIL PREDIKAT====\n\n");
//        if(nilai <= 100 && nilai >= 91){
//            printf("Nama     : %s", nama);
//            printf("\nNilai    : %d", nilai);
//            printf("\nPredikat : %c", rank[0]);
//        }
//        else if(nilai <= 90 && nilai >= 81){
//            printf("Nama     : %s", nama);
//            printf("\nNilai    : %d", nilai);
//            printf("\nPredikat : %c", rank[1]);
//        }
//        else if(nilai <= 80 && nilai >= 71){
//            printf("Nama     : %s", nama);
//            printf("\nNilai    : %d", nilai);
//            printf("\nPredikat : %c", rank[2]);
//        }
//        else if(nilai <= 70 && nilai >= 61){
//            printf("Nama     : %s", nama);
//            printf("\nNilai    : %d", nilai);
//            printf("\nPredikat : %c", rank[3]);
//            printf("Maaf anda harus mengikuti remidial\n");
//        }
//        else if(nilai <= 60 && nilai >= 0) {
//            printf("Nama     : %s", nama);
//            printf("\nNilai    : %d", nilai);
//            printf("\nPredikat : %c", rank[4]);
//            printf("\nMaaf anda harus mengikuti remidial\n");
//        }
//        else{
//            printf("Maaf input yang anda masukkan tidak tepat\n");
//        }
//}

// ======= MEMBUAT KALKULASI ARITMATIKA =======

#include <stdio.h>

void main()
{
    int x = 5, y = 8;

    printf("Jika X = 5 dan y = 8 maka\n\n");

    printf("hasil dari x + y   = %d\n", x+y);
    printf("hasil dari x - y   = %d\n", x-y);
    printf("hasil dari x * y   = %d\n", x*y);
    printf("hasil dari x / y   = %d\n", x/y);
    printf("hasil dari x mod y = %d\n", x%y);

    printf("\nhasil dari ((x+y)*y)+((y-x)/x)+y = %d", ((x+y)*y)+((y-x)/x)+y);

    printf("\nHasil x > y = %d", y>x);
}
