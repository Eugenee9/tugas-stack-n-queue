#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int main(), pilihan1(), pilihan2(), pilihan3(), piihan4(), pilihan5(), pilihan6(), pilihan7();

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void panah(int posisiMenu, int gerakPanah)
{
    if (gerakPanah == posisiMenu)
        printf("==> ");
    else
        printf("   ");
}

int menu1()
{
    system("cls");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(45, 11);
        printf("<============================>\n");
        gotoxy(52, 13);
        printf("TUGAS KALKULATOR");
        gotoxy(45, 15);
        printf("<============================>\n");
        gotoxy(45, 17);
        panah(1, posisi);
        printf("1. PingPoroLanSudo");
        gotoxy(45, 18);
        panah(2, posisi);
        printf("2. SinCosTan");
        gotoxy(45, 19);
        panah(3, posisi);
        printf("3. Hitung Keliling dan Luas");
        gotoxy(45, 20);
        panah(4, posisi);
        printf("4. Hitung Akar Kuadrat");
        gotoxy(45, 21);
        panah(5, posisi);
        printf("5. Exit");
        gotoxy(45, 23);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu2()
{
    system("cls");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(45, 11);
        printf("<============================>\n");
        gotoxy(51, 13);
        printf("Ping Poro Lan Sudo");
        gotoxy(45, 15);
        printf("<============================>\n");
        gotoxy(45, 17);
        panah(1, posisi);
        printf("1. Perkalian");
        gotoxy(45,18);
        panah(2, posisi);
        printf("2. Pembagian");
        gotoxy(45, 19);
        panah(3, posisi);
        printf("3. Penjumlahan");
        gotoxy(45, 20);
        panah(4, posisi);
        printf("4. Pengurangan");
        gotoxy(45, 21);
        panah(5, posisi);
        printf("5. Return Menu Utama");
        gotoxy(45, 23);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu3()
{
    system("cls");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(45, 11);
        printf("<============================>\n");
        gotoxy(55, 13);
        printf("Sin Cos Tan");
        gotoxy(45, 15);
        printf("<============================>\n");
        gotoxy(45, 17);
        panah(1, posisi);
        printf("1. Sinus");
        gotoxy(45, 18);
        panah(2, posisi);
        printf("2. Cosinus");
        gotoxy(45, 19);
        panah(3, posisi);
        printf("3. Tangen");
        gotoxy(45, 20);
        panah(4, posisi);
        printf("4. Return Menu Utama");
        gotoxy(45, 22);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 4;
        }
        else if (posisi > 4)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu4()
{
    system("cls");
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(45, 11);
        printf("<============================>\n");
        gotoxy(50, 13);
        printf("Keliling Luas Volume");
        gotoxy(45, 15);
        printf("<============================>\n");
        gotoxy(45, 17);
        panah(1, posisi);
        printf("1. Hitung Keliling Bangun Datar");
        gotoxy(45, 18);
        panah(2, posisi);
        printf("2. Hitung Luas Bangun Datar");
        gotoxy(45, 19);
        panah(3, posisi);
        printf("3. Hitung Volume Bangun Ruang");
        gotoxy(45, 20);
        panah(4, posisi);
        printf("4. Return Menu Utama");
        gotoxy(45, 22);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 4;
        }
        else if (posisi > 4)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu5()
{
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(45, 11);
        printf("<============================>\n");
        gotoxy(44, 13);
        printf(" Keliling Bangun Datar");
        gotoxy(45, 15);
        printf("<============================>\n");
        gotoxy(45, 17);
        panah(1, posisi);
        printf("1. Keliling Persegi");
        gotoxy(45, 18);
        panah(2, posisi);
        printf("2. Keliling Trapesium");
        gotoxy(45, 19);
        panah(3, posisi);
        printf("3. Keliling Layang-Layang");
        gotoxy(45, 20);
        panah(4, posisi);
        printf("4. Keliling Lingkaran");
        gotoxy(45, 21);
        panah(5, posisi);
        printf("5. Return Menu Utama");
        gotoxy(45, 23);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu6()
{
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(45, 11);
        printf("<============================>\n");
        gotoxy(46, 13);
        printf(" Luas Bangun Datar");
        gotoxy(45, 15);
        printf("<============================>\n");
        gotoxy(45, 17);
        panah(1, posisi);
        printf("1. Luas Persegi");
        gotoxy(45, 18);
        panah(2, posisi);
        printf("2. Luas Trapesium");
        gotoxy(45, 19);
        panah(3, posisi);
        printf("3. Luas Layang-Layang");
        gotoxy(45, 20);
        panah(4, posisi);
        printf("4. Luas Lingkaran");
        gotoxy(45, 21);
        panah(5, posisi);
        printf("5. Return Menu Utama");
        gotoxy(45, 23);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

int menu7()
{
    int posisi = 1;
    int keyPressed = 0;
    while (keyPressed != 27)
    {
        system("cls");
        gotoxy(45, 11);
        printf("<============================>\n");
        gotoxy(45, 13);
        printf(" Volume Bangun Ruang");
        gotoxy(45, 15);
        printf("<============================>\n");
        gotoxy(45, 17);
        panah(1, posisi);
        printf("1. Volume Kubus");
        gotoxy(45, 18);
        panah(2, posisi);
        printf("2. Volume Prisma");
        gotoxy(45, 19);
        panah(3, posisi);
        printf("3. Volume Limas");
        gotoxy(45, 20);
        panah(4, posisi);
        printf("4. Volume Bola");
        gotoxy(45, 21);
        panah(5, posisi);
        printf("5. Return Menu Utama");
        gotoxy(45, 23);
        printf("<============================>\n");

        keyPressed = getch();

        if (keyPressed == 72)
        {
            posisi--;
        }
        else if (keyPressed == 80)
        {
            posisi++;
        }
        else if (keyPressed == 13)
        {
            return posisi;
        }
        if (posisi < 1)
        {
            posisi = 5;
        }
        else if (posisi > 5)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

void perkalian()
{
    float a, b;
    system("cls");
    printf("Masukkan angka pertama = ");
    scanf("%f", &a);
    printf("Masukkan angka kedua = ");
    scanf("%f", &b);
    printf("Hasil dari %.2f * %.2f adalah = %.2f\n", a, b, a * b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void perkalian();
    }
    else if (y == 'Y')
    {
        void perkalian();
    }
    else if (y == 'n')
    {
        pilihan2();
    }
    else if (y == 'N')
    {
        pilihan2();
    }
}
void pembagian()
{
    system("cls");
    float a, b;
    printf("Masukkan angka pertama = ");
    scanf("%f", &a);
    printf("Masukkan angka kedua = ");
    scanf("%f", &b);
    printf("Hasil dari %.2f / %.2f adalah = %.2f\n", a, b, a / b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void pembagian();
    }
    else if (y == 'Y')
    {
        void pembagian();
    }
    else if (y == 'n')
    {
        pilihan2();
    }
    else if (y == 'N')
    {
        pilihan2();
    }
}
void penjumlahan()
{
    system("cls");
    float a, b;
    printf("Masukkan angka pertama = ");
    scanf("%f", &a);
    printf("Masukkan angka kedua = ");
    scanf("%f", &b);
    printf("Hasil dari %.2f + %.2f adalah = %.2f\n", a, b, a + b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void penjumlahan();
    }
    else if (y == 'Y')
    {
        void penjumlahan();
    }
    else if (y == 'n')
    {
        pilihan2();
    }
    else if (y == 'N')
    {
        pilihan2();
    }
}
void pengurangan()
{
    system("cls");
    float a, b;
    printf("Masukkan angka pertama = ");
    scanf("%f", &a);
    printf("Masukkan angka kedua = ");
    scanf("%f", &b);
    printf("Hasil dari %.2f - %.2f adalah = %.2f\n", a, b, a - b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void pengurangan();
    }
    else if (y == 'Y')
    {
        void pengurangan();
    }
    else if (y == 'n')
    {
        pilihan2();
    }
    else if (y == 'N')
    {
        pilihan2();
    }
}

void sinus()
{
    system("cls");
    float a;
    printf("Masukkan derajat sinus  = ");
    scanf("%f", &a);
    printf("Hasil Sinus adalah = %.2f\n", sin(3.14 / 180 * a));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void sinus();
    }
    else if (y == 'Y')
    {
        void sinus();
    }
    else if (y == 'n')
    {
        pilihan3();
    }
    else if (y == 'N')
    {
        pilihan3();
    }
}
void cosinus()
{
    system("cls");
    float a;
    printf("Masukkan derajat Cosinus  = ");
    scanf("%f", &a);
    printf("Hasil Cosinus adalah = %.2f\n", cos(3.14 / 180 * a));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void cosinus();
    }
    else if (y == 'Y')
    {
        void cosinus();
    }
    else if (y == 'n')
    {
        pilihan3();
    }
    else if (y == 'N')
    {
        pilihan3();
    }
}
void tangen()
{
    system("cls");
    float a;
    printf("Masukkan derajat Tangen  = ");
    scanf("%f", &a);
    printf("Hasil Tangen adalah = %.2f\n", tan(3.14 / 180 * a));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void tangen();
    }
    else if (y == 'Y')
    {
        void tangen();
    }
    else if (y == 'n')
    {
        pilihan3();
    }
    else if (y == 'N')
    {
        pilihan3();
    }
}

void kll_persegi()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Persegi : ");
    scanf("%f", &a);
    printf("Masukkan lebar Persegi   : ");
    scanf("%f", &b);
    printf("Keliling Persegi Adalah  : %.2f\n", 2 * a + 2 * b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void kll_persegi();
    }
    else if (y == 'Y')
    {
        void kll_persegi();
    }
    else if (y == 'n')
    {
        pilihan5();
    }
    else if (y == 'N')
    {
        pilihan5();
    }
}
void kll_trapesium()
{
    system("cls");
    float a, b, c;
    printf("Masukkan Sisi Atas Trapesium Sama Kaki   : ");
    scanf("%f", &a);
    printf("Masukkan Sisi Bawah Trapesium Sama Kaki  : ");
    scanf("%f", &b);
    printf("Masukkan Sisi Miring Trapesium Sama Kaki : ");
    scanf("%f", &c);
    printf("Keliling Trapesium Sama Kaki Adalah      : %.2f\n", 2 * c + a + b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void kll_trapesium();
    }
    else if (y == 'Y')
    {
        void kll_trapesium();
    }
    else if (y == 'n')
    {
        pilihan5();
    }
    else if (y == 'N')
    {
        pilihan5();
    }
}
void kll_layang2()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Sisi Atas Layang-layang : ");
    scanf("%f", &a);
    printf("Masukkan Sisi Bawah Layang-layang        : ");
    scanf("%f", &b);
    printf("Keliling Layang-layang Adalah            : %.2f\n", 2 * a + 2 * b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void kll_layang2();
    }
    else if (y == 'Y')
    {
        void kll_layang2();
    }
    else if (y == 'n')
    {
        pilihan5();
    }
    else if (y == 'N')
    {
        pilihan5();
    }
}
void kll_lingkaran()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Diameter Lingkaran  : ");
    scanf("%f", &a);
    printf("Masukkan Panjang Jari-jari Lingkaran : ");
    scanf("%f", &b);
    printf("Keliling Lingkaran Berdasarkan Jari-jari Adalah : %.2f\n", 2 * 3.14 * b);
    printf("Keliling Lingkaran Berdasarkan Diameter Adalah  : %.2f\n", 3.14 * a);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void kll_lingkaran();
    }
    else if (y == 'Y')
    {
        void kll_lingkaran();
    }
    else if (y == 'n')
    {
        pilihan5();
    }
    else if (y == 'N')
    {
        pilihan5();
    }
}

void ls_pp()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Persegi : ");
    scanf("%f", &a);
    printf("Masukkan lebar Persegi   : ");
    scanf("%f", &b);
    printf("Luas Persegi Adalah      : %.2f\n", a * b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void ls_pp();
    }
    else if (y == 'Y')
    {
        void ls_pp();
    }
    else if (y == 'n')
    {
        pilihan6();
    }
    else if (y == 'N')
    {
        pilihan6();
    }
}
void ls_trapesium()
{
    system("cls");
    float a, b, c;
    printf("Masukkan Sisi Atas Trapesium Sama Kaki  : ");
    scanf("%f", &a);
    printf("Masukkan Sisi Bawah Trapesium Sama Kaki : ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Trapesium Sama Kaki     : ");
    scanf("%f", &c);
    printf("Luas Trapesium Sama Kaki Adalah         : %.2f\n", 0.5 * c * (a + b));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void ls_trapesium();
    }
    else if (y == 'Y')
    {
        void ls_trapesium();
    }
    else if (y == 'n')
    {
        pilihan6();
    }
    else if (y == 'N')
    {
        pilihan6();
    }
}
void ls_layang2()
{
    system("cls");
    float a, b;
    printf("Masukkan Diagonal Panjang Layang-layang : ");
    scanf("%f", &a);
    printf("Masukkan Diagonal Lebar Layang-layang   : ");
    scanf("%f", &b);
    printf("Luas Layang-layang Adalah               : %.2f\n", 0.5 * a * b);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void ls_layang2();
    }
    else if (y == 'Y')
    {
        void ls_layang2();
    }
    else if (y == 'n')
    {
        pilihan6();
    }
    else if (y == 'N')
    {
        pilihan6();
    }
}
void ls_lingkaran()
{
    system("cls");
    float a, b;
    printf("Masukkan Panjang Diameter Lingkaran  : ");
    scanf("%f", &a);
    printf("Masukkan Panjang Jari-jari Lingkaran : ");
    scanf("%f", &b);
    printf("Luas Lingkaran Berdasarkan Jari-jari Adalah : %.2f\n", 3.14 * pow(b, 2));
    printf("Luas Lingkaran Berdasarkan Diameter Adalah  : %.2f\n", 3.14 * pow(a / 2, 2));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void lingkaran();
    }
    else if (y == 'Y')
    {
        void lingkaran();
    }
    else if (y == 'n')
    {
        pilihan6();
    }
    else if (y == 'N')
    {
        pilihan6();
    }
}

void vol_kubus()
{
    system("cls");
    float a;
    printf("Masukkan Panjang Sisi Kubus : ");
    scanf("%f", &a);
    printf("Volume Kubus Adalah         : %.2f\n", pow(a, 3));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void vol_kubus();
    }
    else if (y == 'Y')
    {
        void vol_kubus();
    }
    else if (y == 'n')
    {
        pilihan7();
    }
    else if (y == 'N')
    {
        pilihan7();
    }
}
void vol_prisma()
{
    system("cls");
    float a, b, c, d, e, f;
    printf("Masukkan Sisi Persegi        : ");
    scanf("%f", &a);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Segitiga     : ");
    scanf("%f", &c);
    printf("Masukkan Jari-Jari Lingkaran : ");
    scanf("%f", &d);
    printf("Masukkan Diameter Lingkaran  : ");
    scanf("%f", &e);
    printf("Masukkan Tinggi Prisma       : ");
    scanf("%f", &f);
    printf("Volume Prisma Persegi Adalah                 : %.2f\n", pow(a, 2) * f);
    printf("Volume Prisma Segitiga Adalah                : %.2f\n", 0.5 * b * c * f);
    printf("Volume Silinder Berdasarkan Jari-jari Adalah : %.2f\n", 3.14 * pow(d, 2) * f);
    printf("Volume Silinder Berdasarkan Diameter Adalah  : %.2f\n", 3.14 * pow(e / 2, 2) * f);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void vol_prisma();
    }
    else if (y == 'Y')
    {
        void vol_prisma();
    }
    else if (y == 'n')
    {
        pilihan7();
    }
    else if (y == 'N')
    {
        pilihan7();
    }
}
void vol_limas()
{
    system("cls");
    float a, b, c, d, e, f;
    printf("Masukkan Sisi Persegi        : ");
    scanf("%f", &a);
    printf("Masukkan Lebar Alas Segitiga : ");
    scanf("%f", &b);
    printf("Masukkan Tinggi Segitiga     : ");
    scanf("%f", &c);
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &d);
    printf("Masukkan Diameter Lingkaran  : ");
    scanf("%f", &e);
    printf("Masukkan Tinggi Limas        : ");
    scanf("%f", &f);
    printf("Volume Limas Persegi Adalah                        : %.2f\n", 1.0 / 3.0 * pow(a, 2) * f);
    printf("Volume Limas Segitiga Adalah                       : %.2f\n", 1.0 / 3.0 * 0.5 * b * c * f);
    printf("Volume Limas Silinder Berdasarkan Jari-jari Adalah : %.2f\n", 1.0 / 3.0 * 3.14 * pow(d, 2) * f);
    printf("Volume Limas Silinder Berdasarkan Diameter Adalah  : %.2f\n", 1.0 / 3.0 * 3.14 * pow(e / 2, 2) * f);
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void vol_limas();
    }
    else if (y == 'Y')
    {
        void vol_limas();
    }
    else if (y == 'n')
    {
        pilihan7();
    }
    else if (y == 'N')
    {
        pilihan7();
    }
}
void vol_bola()
{
    system("cls");
    float a, b;
    printf("Masukkan Jari-jari Lingkaran : ");
    scanf("%f", &a);
    printf("Masukkan Diameter Lingkaran  : ");
    scanf("%f", &b);
    printf("Volume Bola Berdasarkan Jari-jari Adalah : %.2f\n", 4.0 / 3.0 * 3.14 * pow(a, 3));
    printf("Volume Bola Berdasarkan Diameter Adalah  : %.2f\n", 4.0 / 3.0 * 3.14 * pow((b / 2), 3));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void vol_bola();
    }
    else if (y == 'Y')
    {
        void vol_bola();
    }
    else if (y == 'n')
    {
        pilihan7();
    }
    else if (y == 'N')
    {
        pilihan7();
    }
}

void akar()
{
    system("cls");
    float a;
    printf("masukkan bilangan yang akan diakar = ");
    scanf("%f", &a);
    printf("Hasil akar dari %.2f adalah %.2f\n", a, sqrt(a));
    char y;
    printf("Ingin mengulang Hitung? (y/n) = ");
    scanf(" %c", &y);
    if (y == 'y')
    {
        void akar();
    }
    else if (y == 'Y')
    {
        void akar();
    }
    else if (y == 'n')
    {
        pilihan1();
    }
    else if (y == 'N')
    {
        pilihan1();
    }
}

// menu utama
int pilihan1()
{
    int pilihan = menu1();

    while (pilihan != 5)
    {
        switch (pilihan)
        {
        case 1:
            pilihan2();
            break;
        case 2:
            pilihan3();
            break;
        case 3:
            piihan4();
            break;
        case 4:
            akar();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}

// menu pingporosudo
int pilihan2()
{
    int pilihan = menu2();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            perkalian();
            break;
        case 2:
            pembagian();
            break;
        case 3:
            penjumlahan();
            break;
        case 4:
            pengurangan();
            break;
        case 5:
            pilihan1();
            break;
        }
    }
}

// menu sincostan
int pilihan3()
{
    int pilihan = menu3();

    while (pilihan != 5)
    {
        switch (pilihan)
        {
        case 1:
            sinus();
            break;
        case 2:
            cosinus();
            break;
        case 3:
            tangen();
            break;
        case 4:
            pilihan1();
            break;
        }
    }
}

// menu induk keliling luas volume
int piihan4()
{
    int pilihan = menu4();

    while (pilihan != 5)
    {
        switch (pilihan)
        {
        case 1:
            pilihan5();
            break;
        case 2:
            pilihan6();
            break;
        case 3:
            pilihan7();
            break;
        case 4:
            pilihan1();
            break;
        }
    }
}

// menu keliling
int pilihan5()
{
    int pilihan = menu5();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            kll_persegi();
            break;
        case 2:
            kll_trapesium();
            break;
        case 3:
            kll_layang2();
            break;
        case 4:
            kll_lingkaran();
            break;
        case 5:
            piihan4();
            break;
        }
    }
}

// menu luas
int pilihan6()
{
    int pilihan = menu6();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            ls_pp();
            break;
        case 2:
            ls_trapesium();
            break;
        case 3:
            ls_layang2();
            break;
        case 4:
            ls_lingkaran();
            break;
        case 5:
            piihan4();
            break;
        }
    }
}

// menu volume
int pilihan7()
{
    int pilihan = menu7();

    while (pilihan != 6)
    {
        switch (pilihan)
        {
        case 1:
            vol_kubus();
            break;
        case 2:
            vol_prisma();
            break;
        case 3:
            vol_limas();
            break;
        case 4:
            vol_bola();
            break;
        case 5:
            piihan4();
            break;
        }
    }
}

int main()
{
    system("color 9");
    char kata[50];
    char pw[50];
    printf("masukan username : \n");
    scanf(" %[^\n]s", &kata);
    printf("masukan passwword : ");
    scanf(" %[^\n]s", &pw);
    if((strcmp(kata, "asdosasd"))==0&&(strcmp(pw, "pass"))==0){
        pilihan1();}
        else{printf("username dan password salah");}

    return 0;
}
