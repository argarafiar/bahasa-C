//#include <stdio.h>
//
//void main() {
//    char name[20];
//    char no_nik[30];
//    FILE * fpointer = fopen("data.txt","a");
//
//    printf("Masukan NIK: ");
//    scanf("%s", no_nik);
//
//    fprintf(fpointer, "%s", no_nik);
//
//    printf("Masukan Nama: ");
//    scanf("%s", name);
//
//    fprintf(fpointer, "%15s\n", name);
//
//}

#include <stdio.h>
void main()
{
    printf("Selamat datang di layanan pembuatan KTP\n");
    printf("Silahkan tuliskan perintah yang tertera\n");

    int ulangi;
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

//        FILE * fpointer = fopen ("data.txt", "w");

    do {
            FILE * fpointer = fopen ("data.txt", "w");
            fprintf (fpointer, "Data KTP tersimpan\n\n");

    printf("\nMasukkan nama lengkap   \t: ");
        scanf (" %[^\n]s",&nama);
        fprintf (fpointer, "1.Nama              : %s\n", nama);

    printf("Masukkan tempat/Tgl Lahir \t: ");
        scanf (" %[^\n]s",&tempat);
        fprintf (fpointer, "2.Tempat/Tgl Lahir  : %s\n", tempat);

    printf("Masukkan jenis kelamin  \t: ");
        scanf (" %[^\n]s",&kelamin);
        fprintf (fpointer, "3.Jenis Kelamin     : %s\n", kelamin);

    printf("Masukkan alamat \t\t: ");
        scanf (" %[^\n]s",&alamat);
        fprintf (fpointer, "4.Alamat            : %s\n", alamat);

    printf("RT/RW\t\t\t\t: ");
        scanf (" %[^\n]s",&rt);
        fprintf (fpointer, "5.RT/RW             : %s\n", rt);

    printf("Kel/Desa\t\t\t: ");
        scanf (" %[^\n]s",&desa);
        fprintf (fpointer, "6.Kel/Desa          : %s\n", desa);

    printf("Kecamatan \t\t\t: ");
        scanf (" %[^\n]s",&kecamatan);
        fprintf (fpointer, "7.Kecamatan         : %s\n", kecamatan);

    printf("Masukkan agama\t\t\t: ");
        scanf (" %[^\n]s",&agama);
        fprintf (fpointer, "8.Agama             : %s\n", agama);

    printf("Masukkan status perkawinan \t: ");
        scanf (" %[^\n]s",&kawin);
        fprintf (fpointer, "9.Status Perkawinan : %s\n", kawin);

    printf("Pekerjaan\t\t\t: ");
        scanf (" %[^\n]s",&kerja);
        fprintf (fpointer, "10.Pekerjaan        : %s\n", kerja);

    printf("Masukkan kewarganegaraan \t: ");
        scanf (" %[^\n]s",&negara);
        fprintf (fpointer, "11.Kewarganegaraan  : %s\n", negara);

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


