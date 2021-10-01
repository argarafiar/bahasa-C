#include <stdio.h>
void main()
{
    printf("Selamat datang di layanan pembuatan KTP\n");
    printf("Silahkan tuliskan perintah yang tertera\n");

    int ulangi = 0;
    char nama[20];
    char tempat[20];
    char kelamin[20];
    char alamat[20];
    char rt[20];
    char desa[20];
    char kecamatan[20];
    char agama[20];
    char kawin[20];
    char kerja[20];
    char negara[20];


    do {
        printf("\nMasukkan nama lengkap   \t: ");
        scanf (" %[^\n]s",&nama);

    printf("Masukkan tempat/Tgl Lahir \t: ");
        scanf (" %[^\n]s",&tempat);

    printf("Masukkan jenis kelamin  \t: ");
        scanf (" %[^\n]s",&kelamin);

    printf("Masukkan alamat \t\t: ");
        scanf (" %[^\n]s",&alamat);

    printf("RT/RW\t\t\t\t: ");
        scanf (" %[^\n]s",&rt);

    printf("Kel/Desa\t\t\t: ");
        scanf (" %[^\n]s",&desa);

    printf("Kecamatan \t\t\t: ");
        scanf (" %[^\n]s",&kecamatan);

    printf("Masukkan agama\t\t\t: ");
        scanf (" %[^\n]s",&agama);

    printf("Masukkan status perkawinan \t: ");
        scanf (" %[^\n]s",&kawin);

    printf("Pekerjaan\t\t\t: ");
        scanf (" %[^\n]s",&kerja);

    printf("Masukkan kewarganegaraan \t: ");
        scanf (" %[^\n]s",&negara);

    printf("\nHasil \n\n");
    printf("Nama \t\t\t: %s\n", nama);
    printf("Tempat/Tgl Lahir \t: %s\n", tempat);
    printf("Jenis Kelamin \t\t: %s\n", kelamin);
    printf("Alamat \t\t\t: %s\n", alamat);
    printf("RT/RW \t\t\t: %s\n", rt);
    printf("Kel/Desa \t\t: %s\n", desa);
    printf("Kecamatan \t\t: %s\n", kecamatan);
    printf("Agama \t\t\t: %s\n", agama);
    printf("Status Perkawinan \t: %s\n", kawin);
    printf("Pekerjaan \t\t: %s\n", kerja);
    printf("Kewarganegaraan \t: %s\n", negara);
    printf("Berlaku Hingga \t\t: SEUMUR HIDUP \n\n");

    printf("Yakin ingin menyimpan Data \n1.iya 0.ulangi : ");
    scanf("%d", &ulangi);
    }

    while(ulangi <= 0);

    printf("\nData anda telah tersimpan");
    printf("\nTerima kasih telah menggunakan layanan kami :\)\n");
}
