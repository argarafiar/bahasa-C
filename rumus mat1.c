#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka;
    puts("--------------------------------------------");
    puts("\t Konversi Angka ke Hari");
    puts("--------------------------------------------");
    printf("Masukkan Angka : ");
    scanf("%d", &angka);

    if(angka == 1)
    puts("Hari Minggu");
        else if(angka == 2)
        puts("Hari Senin");
            else if(angka == 3)
            puts("Hari Selasa");
                else if(angka == 4)
                puts("Hari Rabu");
                    else if(angka == 5)
                    puts("Hari Kamis");
                else if(angka == 6)
                puts("Hari Jumat");
            else if(angka == 7)
            puts("Sabtu");
        else
        puts("Hari tidak Valid");
    return 0;
}
