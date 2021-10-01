

#include <stdio.h>


//    printf ("menghitung keliling persegi panjang \n\n");

//    int panjang, tinggi, hasil;

//    printf("masukkan panjang panjang :");
//    scanf ("%d", &panjang);
//    printf("masukkan tinggi :");
//    scanf("%d", &tinggi);
//    hasil = panjang + panjang + tinggi + tinggi;
//    printf("hasil klilingnya adalah %d\n", hasil);


    //printf("menghitung luas segitiga \n\n");

    //int alas, tinggi;
    //float hasil;

    //printf("masukkan alas :");
    //scanf("%d", &alas);
    //printf("masukkan tinggi :");
    //scanf("%d", &tinggi);

    //hasil = 0.5 * alas * tinggi;

    //printf("hasil luas segitiga adalah : %f\n", hasil);
    //return 0;

//    printf("menghitung luas trapesium!!! \n\n");
//
//    int a, b, t;
//    float luas;
//
//    printf("atas = ");
//    scanf("%d", &a);
//    printf("bawah = ");
//    scanf("%d", &b);
//    printf("tinggi = ");
//    scanf("%d", &t);
//
//    luas = 0.5*(a+b)*t;
//    printf(" jadi luas trapesium = %f\n", luas);
//    return 0;



//#include <stdio.h>
//main()
//{
////    int jawab = 0;
////    while(jawab < 1){
////        printf("kamu mau gak jadi pacar aku :\)\n" );
////        printf ("jawab 1.mau 0.tidak ");
////        scanf("%d", &jawab);
////    }
////    printf("hehe makasih :*");
////
////    printf("hallo sayang");
////    return 0;
//
//printf("nama = ");
//char nama[10];
//scanf("%[^\n]s", nama);
//printf("\nnamamu = %s", nama);
//}

//#include <stdio.h>
//
//void main() {
//    // Studi Kasus :
//    // Siswa melakukan 5 kali ulangan harian
//    // tentukan nilai rapot dan rata2 dari 5 nilai itu
//
//    int banyakUlangan = 5;
//    float dataUlangan[banyakUlangan];
//    float nilaiRapot;
//    char nama[20];
//
//    printf("=====PROGRAM MEMBUAT NILAI RAPOT========\n");
//    printf("\nNama Siswa: ");
//    scanf("%[^\n]s", nama);
//
//    // Pengisian Nilai
//    for(int i = 0; i < banyakUlangan; i++) {
//        printf("Masukan nilai ulangan ke-%d: ", i + 1);
//        scanf("%f", &dataUlangan[i]);
//    }
//
//    nilaiRapot = 0;
//    printf("\n==========Rekap Nilai Rapot %s================\n", nama);
//
//    // Kalkulasi Nilai
//    for (int i = 0; i < banyakUlangan; i++){
//        printf("Hasil Ulangan harian ke-%i: %.2f\n", i + 1, dataUlangan[i]);
//        nilaiRapot += dataUlangan[i];
//    }
//    printf("Nilai Rapot: %.1f", nilaiRapot / banyakUlangan);
//
//}

void main()
{
    int pilih;

    printf("masukkan pilihan ");
    scanf("%d", &pilih);

    if (pilih == 1)
        printf("asu");
    else if (pilih >= 2)
        if (pilih <= 10)
        printf("kontol");
    else
        printf("awokwokwok");
}




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int akademik, keterampilan, psikologi, rata;
    puts("-------------------------------------------");
    puts("\t Seleksi Rekruitmen Karyawan");
    puts("-------------------------------------------");
    printf("Masukkan nilai Tes Akademik : ");\
    scanf("%d", &akademik);

    printf("Masukkan nilai Tes Keterampilan : ");
    scanf("%d", &keterampilan);

    printf("Masukkan nilai Tes Psikologi : ");
    scanf("%d", &psikologi);

    rata = (akademik+keterampilan+psikologi) / 3;

    if(rata >= 75)
    {
        if(akademik>keterampilan || akademik>psikologi)
        puts("Diterima ditempatkan di bagian administrasi");
        else if(keterampilan>akademik || keterampilan>psikologi)
        puts("Diterima ditempatkan di bagian produksi");
        else
        puts("Diterima ditempatkan di bagian pemasaran");
    }
    else
    puts("\t Maaf anda tidak lolos seleksi");
    return 0;
}


