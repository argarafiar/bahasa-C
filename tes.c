// ========= MEMBUAT TOKO TULIS ==========

#include <stdio.h>
main()
{     int angka;
    
    while (lagi > 0)
    {
    
    puts("-------------------------------------");
    puts("\t Konversi Angka ke Hari");
    puts("-------------------------------------");
    printf("Masukkan angka : ");
    scanf("%d", &angka);

    switch(angka)
    {
        case 1 : puts("Minggu");
            break;
        case 2 : puts("Senin");
            break;
        case 3 : puts("Selasa");
            break;
        case 4 : puts("Rabu");
            break;
        case 5 : puts("Kamis");
            break;
        case 6 : puts("Jumat");
            break;
        case 7 : puts("Sabtu");
            break;
        default  : puts("Hari tidak Valid");
    }
    }
 return 0;


}
