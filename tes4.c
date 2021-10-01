#include <stdio.h>
//#include <stdlib.h>
//
//void myName(char myName[50], char age[10]) {
//    printf("Hallo nama saya %s dan usia saya %s", myName, age);
//}
//
//double luasBangun(int sisi1, int sisi2) {
//    printf("ini luas persegi");
//    return sisi1 * sisi2;
//}
//
//int kalkulatorSederhana(int angka1, char operator ,int angka2) {
//    if(operator == '+') {
//        return angka1 + angka2;
//    } else if(operator == '-') {
//        return angka1 - angka2;
//    } else if (operator == '*') {
//        return angka1 * angka2;
//    } else if(operator == '/') {
//        return angka1 / angka2;
//    } else {
//        return 0;
//    }
//}
//
//int exponent(int angka, int pangkat) {
//    int hasil = 1;
//    for(int i = 0; i < pangkat; i++) {
//        hasil *= angka;
//    }
//    return hasil;
//}
//
//void main() {
//    printf("Fungsi kalkulator sederhana\n");
//    printf("%d\n", kalkulatorSederhana(25,'-',10));
//    printf("Fungsi exponent sederhana\n");
//    printf("%d", exponent(16,3));
//}



// FUNGSI EKSTERNAL
void kalimat(char nama[20], int umur, char tinggal[50]) {
    printf("Hallo namaku %s dan umurku %d, aku tinggal di %s\n", nama, umur, tinggal);
}

int keliling_persegi(int sisi){

    return sisi * 4;
}

float lingkaran(int r) {

    const float phi = 3.14;
    float hasil;
//    printf("masukkan r = ");
//    scanf("%d", &r);
    return hasil = phi*r*r;

}

int rapot(int nilai){

    char predikat[5] = {'A', 'B', 'C', 'D', 'E'};
    if (nilai >= 90 && nilai <= 100){
        printf("nilai kamu : %d\n", nilai);
        printf("predikat : %c\n", predikat[0]);
    }else if (nilai >= 80 && nilai <= 89){
        printf("nilai kamu : %d\n", nilai);
        printf("predikat : %c\n", predikat[1]);
    }else if (nilai >= 70 && nilai <= 79){
        printf("nilai kamu : %d\n", nilai);
        printf("predikat : %c\n", predikat[2]);
    }else if (nilai >= 60 && nilai <= 69){
        printf("nilai kamu : %d\n", nilai);
        printf("predikat : %c\n", predikat[3]);
    }else if (nilai < 60){
        printf("nilai kamu : %d\n", nilai);
        printf("predikat : %c\n", predikat[4]);
    }else {
        return 0;
    }

}

void main() {

    printf("=====FUNGSI EXTERNAL KALIMAT====\n");
    kalimat("Arga rafi", 18, "perum CAG sidoarjo");
    printf("\n====FUNGSI EXTERNAL KELILING PERSEGI====\n");
    printf("keliling persegi adalah = %d\n", keliling_persegi(2));
    printf("\n====FUNGSI EXTERNAL LUAS LINGKARAN====\n");
    printf("luas adalah = %.2f\n", lingkaran(5));
    printf("\n====FUNGSI ECTERNAL RAPOT====\n");
    rapot(55);
}
