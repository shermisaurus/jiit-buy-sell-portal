#include<stdio.h>
#include<conio.h>
#include<direct.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>

//*******C UTILITY FUNCZTIONS*******//
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

COORD coord={0,0};

void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
//***C UTILITY FUNCZTIONS END HERE***//

//*****************************************************//
//         STRUCTURE USED IN THE WHOLE PROGRAM         //
//*****************************************************//
struct MAIN{
   int accno;
   char name[80];
   char type;
   int amt;
}s;
//*****************************************************//
//                STRUCTURE END HERE                   //
//*****************************************************//

void item_network();
void createacc(void);
void buy_item();
void sell_item();
void rent_item();
void admin_network(void);

void main(){
    system("cls");
    int ch;
    printf("\t\t\t\t\t\t\t*******************************************************\n");
    printf("\t\t\t\t\t\t\t*******************************************************\n");
    printf("\t\t\t\t\t\t\t**         WELCOME TO JIIT BUY/SELL PORTAL           **\n");
    printf("\t\t\t\t\t\t\t**               \"SELLING MADE EASY\"                 **\n");
    printf("\t\t\t\t\t\t\t**                                                   **\n");
    printf("\t\t\t\t\t\t\t*******************************************************\n");
    printf("\t\t\t\t\t\t\t*******************************************************\n");
    printf("   1. ADD AN ITEM\n");
    delay(300);
    printf("   2. SEARCH AN ITEM IN LIST\n");
    delay(300);
    printf("   3. ITEM LIST\n");
    delay(300);
    printf("   4. SELL COST ITEM\n");
    delay(300);
    printf("   5. SELL AN ITEM\n");
    delay(300);
    printf("   6. RENT COST OF ITEM\n");
    delay(300);
    printf("   7. CLOSE SHOP\'S\n");
    delay(300);
    printf("   8. EXIT\n");
    delay(300);
    printf("   ENTER YOUR CHOICE(1-8): ");
    scanf("%d",&ch);
    if(ch==1)
        createacc();
    else if(ch==2)
	    item_network();
    else if(ch==3)
	    admin_network();
    else if(ch==4)
        buy_item();
    else if(ch==5)
        sell_item();
    else if(ch==6)
	    rent_item();
    else if(ch==7){
	    remove("account.txt");
	    main();
    }
    else
        exit(0);
    getch();
}

void createacc(){
    system("cls");
    FILE *fp = fopen("account.txt","a");
    delay(150);
    printf("\n");
    printf("---------------------------------------------------------------------NEW ITEM ENTRY FORM---------------------------------------------------------------------\n");
    accno:
    printf("   Enter Your 5-digit Item No.: ");
    scanf("%d",&s.accno);
    printf("\n");
    printf("   Enter Item Name: ");
    fflush(stdin);
    fgets(s.name,80,stdin);
    printf("\n");
    printf("   E-Electronics\n");
    printf("   B-Book\n");
    printf("   V-Vehicle\n");
    printf("   Enter Account Type(E\\B\\V): ");
    scanf("%c",&s.type);
    printf("\n");
    printf("   Enter Item Cost: ");
    scanf("%ld",&s.amt);
    fwrite(&s,sizeof(s),1,fp);
    printf("\n\n   THANKS FOR USING OUR SERVICES YOUR ITEM IS ADDED SUCCESSFULLY..........");
    fclose(fp);
    getch();
    main();
}

void item_network()
{   system("cls");
    FILE *fp;
    int ch;
    char utype;
    printf("   Enter Item ID.: ");
    scanf("%d",&ch);
    printf("\n");
    printf("====================================================================\n");
    printf("ITEM NO.                 NAME                 Type           COST   \n");
    printf("====================================================================\n");
    fp = fopen("account.txt","r");
    if(!fp){
        printf("   File doesn't exists");
        getch();
        main();
    }
    int i=5;
    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
            break;
        if(s.accno==ch){
            utype=toupper(s.type);
            gotoxy(0,i);
            printf("%ld",s.accno);
            gotoxy(20,i);
            printf("%s",s.name);
            gotoxy(47,i);
            printf("%c",utype);
            gotoxy(61,i);
            printf("%ld",s.amt);
            gotoxy(76,i);
            i++;
        }
    }
    fclose(fp);
    getch();
    main();
}

void admin_network()
{   system("cls");
    FILE *fp;
    char ch, utype;
    printf("====================================================================\n");
    printf("ITEM NO.                 NAME                 Type           COST   \n");
    printf("====================================================================\n");
    fp = fopen("account.txt","r");
    if(!fp){
        printf("   File doesn't exists");
        getch();
        main();
    }
    int i=5;
    while(1)
    {
        fread(&s,sizeof(s),1,fp);
        if(feof(fp))
            break;
        utype=toupper(s.type);
        gotoxy(0,i);
        printf("%ld",s.accno);
        gotoxy(20,i);
        printf("%s",s.name);
        gotoxy(47,i);
        printf("%c",utype);
        gotoxy(61,i);
        printf("%ld",s.amt);
        gotoxy(76,i);
        i++;
    }
    fclose(fp);
    getch();
    main();
}

void buy_item()
{   system("cls");
    int ch;
    FILE *fin;
    fin = fopen("account.txt", "r");
    printf("                             SELLING PORTAL");
    delay(150);
    printf("\n\n");
    printf("   Enter Item ID: ");
    scanf("%d",&ch);
    while(fread(&s,sizeof(s),1,fin)){
        if(s.accno==ch){
            printf("\n   Name of Item: %s\n",s.name);
            if(s.type=='E')
                printf("   Item Type: Electronics\n\n");
            else if(s.type=='B')
                printf("   Item Type: Book\n\n");
            else
                printf("   Item Type: Vehicle\n\n");
            int cost;
            cost= s.amt*1.18;
            printf("   Sell Cost is: %ld\n\n",cost);
            break;
        }
    }
    getch();
    main();
}

void rent_item()
{   system("cls");
    int ch,time;
    FILE *fin;
    fin = fopen("account.txt", "r");
    printf("                             RENTING PORTAL");
    delay(150);
    printf("\n\n");
    printf("   Enter Item ID: ");
    scanf("%d",&ch);
    while(fread(&s,sizeof(s),1,fin)){
        if(s.accno==ch){
            printf("\n   Name of Item: %s\n",s.name);
            if(s.type=='E')
                printf("   Item Type: Electronics\n\n");
            else if(s.type=='B')
                printf("   Item Type: Book\n\n");
            else
                printf("   Item Type: Vehicle\n\n");
            printf("   Enter Time of Renting: ");
            scanf("%d",&time);
            int cost = time*.2*s.amt;
            printf("   Sell Cost is: %d\n\n",cost);
            break;
        }
    }
    getch();
    main();
}

void sell_item(){
    system("cls");
    long int accno2;
    char found = 'f';
    printf("                              SELL AN ITEM\n");
    FILE *fio=fopen("account.txt","r");
    FILE *file=fopen("temp.txt", "w");
    printf("   Please Confirm Your Item ID.:");
    scanf("%ld",&accno2);
    while(fread(&s,sizeof(s),1,fio)){
        if(s.accno==accno2)
            found='t';
        else
            fwrite(&s,sizeof(s),1,file);
            fflush(stdin);
    }
    if(found=='f'){
      printf("\n   Please Enter Correct Item ID.");
      getch();
    }
    fclose(fio);
    fclose(file);
    remove("account.txt");
    rename("temp.txt","account.txt");

    getch();
    main();
}
