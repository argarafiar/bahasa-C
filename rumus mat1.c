#include <stdio.h>

void main()
{
    float hasil;
    int lagi = 1;

        while(lagi > 0){

    printf("\nsilahkan pilih menu : \n\n");
    printf("1. Volume kubus\n"); printf("2. Volume balok\n"); printf("3. Volume tabung\n"); printf("4. Volume Prisma\n");
    printf("\npilihanmu : ");
    int pilih;
    scanf("%d", &pilih);

    if(pilih == 1){
        printf("\nmasukkan R : ");
        int r_kubus;
        scanf("%d", &r_kubus);

        hasil = r_kubus * r_kubus * r_kubus;
        printf("volume kubus adalah : %.2f\n", hasil);
        }

    if(pilih == 2){
        printf("\nmasukkan Panjang balok : ");
        int p_balok;
        scanf("%d", &p_balok);
        printf("masukkan Lebar balok   : ");
        int l_balok;
        scanf("%d", &l_balok);
        printf("masukkan Tinggi balok  : ");
        int t_balok;
        scanf("%d", &t_balok);

        hasil = p_balok * l_balok * t_balok;
        printf("volume balok adalah : %.2f\n", hasil);
        }

    if(pilih == 3){
        const float pi = 3.14;
        printf("\nmasukkan Jari jari/R tabung : ");
        int r_tabung;
        scanf("%d", &r_tabung);
        printf("masukkan Tinggi tabung      : ");
        int t_tabung;
        scanf("%d", &t_tabung);

        hasil = pi * r_tabung * r_tabung * t_tabung;
        printf("Volume tabung adalah : %.2f\n", hasil);
        }

    if(pilih == 4){
        printf("masukkan Alas segitiga   : ");
        int a_seg;
        scanf("%d", &a_seg);
        printf("masukkan tinggi segitiga : ");
        int t_seg;
        scanf("%d", &t_seg);
        printf("masukkan tinggi prisma   : ");
        int t_prisma;
        scanf("%d", &t_prisma);

        hasil = (0.5*a_seg*t_seg)*t_prisma;
        printf("volume prisma adalah : %.2f\n", hasil);
        }

        printf("\nIngin menghitung lagi 1.ya 0.tidak : ");
        scanf("%d", &lagi);

    }

    printf("\nSemangat terus belajarnya :\)");

}
