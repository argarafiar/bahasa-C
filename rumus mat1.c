#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nilai;
    puts("-------------------------------------------");
    puts("\t Konversi Nilai Angka ke Nilai Huruf");
    puts("-------------------------------------------");
    printf("Masukkan nilai : ");
    scanf("%f", &nilai);


    if(nilai >=0 && nilai <= 40)
        puts("Nilai Huruf adalah E");

        else if(nilai > 40 && nilai <= 55)
            puts("Nilai Huruf adalah D");

            else if(nilai > 55 && nilai <= 60)
                puts("Nilai Huruf adalah C");

                else if(nilai > 60 && nilai <= 80)
                    puts("Nilai Huruf adalah B");

        else if(nilai > 80 && nilai <= 100)
            puts("Nilai Huruf adalah A");
    else
        puts("!Error!");
    return 0;
}
