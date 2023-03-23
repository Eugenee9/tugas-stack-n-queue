#include<stdio.h>
#include<string.h>
#define MAX 5
#include <conio.h>
#include <windows.h>

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
int get_int(char *prompt)
{
    int num = 0, ch, count = 0;

    printf("%s", prompt);
    while (1)
    {
        ch = getch();
        if (ch == 13 && count)
        {
            break;
        }
        if (ch >= 48 && ch <= 57 && ch != 13)
        {
            num = num * 10 + (ch - 48);
            printf("%c", ch);
            count++;
        }
        else if ((ch == 8 && num) || (num == 0 && count))
        {
            num /= 10;
            printf("\b \b");
            count--;
        }
    }
    return num;
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
        gotoxy(58, 13);
        printf("MENU");
        gotoxy(45, 15);
        printf("<============================>\n");
        gotoxy(45, 17);
        panah(1, posisi);
        printf("1. Stack String");
        gotoxy(45, 18);
        panah(2, posisi);
        printf("2. Queue Interger");
        gotoxy(45, 19);
        panah(3, posisi);
        printf("3. Exit");
        gotoxy(45, 21);
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
            posisi = 3;
        }
        else if (posisi > 3)
        {
            posisi = 1;
        }
        keyPressed = 'a';
    }
}

   struct Tumpukan{
            char data[5][50];
            int top; //untuk menentukan data paling atas

        }tumpuk;
        //buat fungsi apakah tumpukan masih kosong
        int isEmpty()
        {
            if(tumpuk.top == -1)
            {
                return 1;
            }else{
                return 0;
            }
        }

        //buat fungsi apakah tumpukan sudah penuh
        int isFull()
        {
            if(tumpuk.top == MAX-1)
            {
                return 1;
            }
            else{
                return 0;
            }
        }

        void inisialisasi()
        {
            //decalare bahwa tumpukan masih kosong
            tumpuk.top = -1;
        }

        void push()
        {
            char temp[30];
            if(isFull() != 1)
            {
                tumpuk.top++;
                printf("\nMasukkan data:");
                scanf("%s",&temp);
                strcpy(tumpuk.data[tumpuk.top],temp);
                printf("Data %s berhasil di input\n",tumpuk.data[tumpuk.top]);
            }else{
                printf("\nData sudah penuh");
            }
        }

        void pop()
        {
            if(isEmpty() != 1)
            {
                printf("\nData %s telah dibuang\n",tumpuk.data[tumpuk.top]);
                tumpuk.top--;

            }else{
                printf("\nData masih kosong\n");
            }
        }

        void printData()
        {
            if(isEmpty() !=1)
            {
                for(int i=tumpuk.top;i>=0;i--)
                {
                    printf("\n%s\n",tumpuk.data[i]);
                }
            }else{
                printf("Data masih kosong\n");
            }
        }
    void stack()
    {
        inisialisasi();
        int choice;
        do{
            system("cls");
            printf("1.Push Stack\n");
            printf("2.Pop Stack\n");
            printf("3.Print Stack\n");
            printf("4.Clear Stack\n");
            printf("5.Exit\n");
            //printf("Input pilihan:");
            //scanf("%d",&choice);
            choice=get_int("masukan pilihan : ");
                switch(choice)
                {
                case 1:
                    push();
                    getch();
                    break;
                case 2:
                    pop();
                    getch();
                    break;
                case 3:
                    printData();
                    getch();
                    break;
                case 4:
                    if(isEmpty())
                    {
                        printf("\nData masih kosong!,tidak bisa reset\n");
                    }
                    else{
                          inisialisasi();
                    printf("\nData telah di reset!\n");
                    }
                    getch();
                    break;
                default:
                    fflush(stdin);
                    printf("tidak ada dalam pilihan\n");
                    getch();
                    break;
                    case 5:
                    main();
                    break;
                }

        }while(choice >0 && choice < 6);

return 0;
    }
    struct Antrian{
        int head;
        int tail;
        int data[MAX];
    }antrian;

    int isempty()
    {
        if(antrian.tail == -1)
        {
            return 1;
        }else{
            return 0;
        }
    }

    int isfull()
    {
        if(antrian.tail == MAX -1)
        {
            return 1;
        }else{
            return 0;
        }
    }

    void inisial()
    {
        antrian.head=antrian.tail = -1;
    }

    void enqueue(int data)
    {
        if(isempty()==1)
        {
            antrian.head=antrian.tail = 0;
            antrian.data[antrian.tail] = data;
            printf("Data %d berhasil diinput!\n",antrian.data[antrian.tail]);
        }
        else{


        if(isfull() == 0)
        {
            antrian.tail++;
            antrian.data[antrian.tail] = data;
            printf("data %d berhasil di input\n",antrian.data[antrian.tail]);
        }
        }
    }

    int dequeue()
    {
        if(isempty() == 1)
        {
            printf("\nData masih kosong!\n");
        }
        else{
            int i;
            int e = antrian.data[antrian.head];
            printf("\ndata %d telah dikeluarkan dari antiran\n",antrian.data[antrian.head]);
            for(i=antrian.head;i<=antrian.tail-1;i++)
            {
                antrian.data[i] = antrian.data[i+1];
            }
            antrian.tail--;
                 return e;

        }

    }

    void Clear()
    {
        antrian.head = antrian.tail = -1;
        printf("\nData telah di reset!\n");
    }

    void print()
    {
        if(isempty() == 0)
        {
            for(int i=antrian.head;i<=antrian.tail;i++)
            {
                printf("\n%d ",antrian.data[i]);

            }
        }else{
            printf("\nData masih kosongg!\n");
            getch();
            queue();
        }
    }

    void queue()
    {
        int dt;
        inisial();
     int choice;
        do{
                system("cls");
            printf("1.Enqueue\n");
            printf("2.Dequeue\n");
            printf("3.Print Queue\n");
            printf("4.Clear Queue\n");
            printf("5.Exit\n");
            //printf("Input pilihan:");
            //scanf("%d",&choice);
            choice=get_int("masukan pilihan : ");
                switch(choice)
                {
                case 1:
                    if(isfull() !=1)
                    {
                        printf("\nMasukkan data:");
                        scanf("%d",&dt);
                        enqueue(dt);
                        getch();
                    }else{
                        printf("\ndata sudah penuh!\n");
                        getch();
                    }
                    break;
                case 2:
                    dequeue();
                    getch();
                    break;
                case 3:
                    print();
                    printf("\n");
                    getch();
                    break;
                case 4:
                   Clear();
                   getch();
                    break;
                case 5:
                    main();
                    break;
                default:
                    fflush(stdin);
                    printf("\ntidak ada dalam pilihan\n");
                    getch();
                    break;
                }

        }while(choice>0 && choice <6);
        return 0;

    }

void exit1()
{
    system("cls");
    gotoxy(40,1);
    printf("================================================\n");
    gotoxy(40,2);
    printf("|                                              |\n");
    gotoxy(40,3);
    printf("|                TERIIMA KASIH                 |\n");
    gotoxy(40,4);
    printf("|                                              |\n");
    gotoxy(40,5);
    printf("================================================\n");
    getch();
    exit(0);
}

    int main()
{
    system("color 9");
    int pilihan = menu1();
    do
    {
        switch (pilihan)
        {
        case 1:
            stack();
            break;
        case 2:
            queue();
            break;
        case 3:
            exit1();
            break;
        }
    }while (pilihan != 2);
}
