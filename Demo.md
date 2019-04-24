# jiit-buy-sell-portal
JIIT-62's SDF-2 2019 Even Sem Freshmen Year Mini Project. A mini buy, sell and rental service application will be created using C language; The user will have the option to upload their contents to sell, and also browse through varieties to buy or rent accessories which will be sorted using different categories.

## Project Contributors

**Batch** B-12

- Amrit Srivastava : 18104070
- Ishita Batra : 18104082
- Ankesh Bharti : 18104071
- Shubh Anand : 18104069

## Features

Different categories include price range, rent time, or type of accessory (furniture, electronics, or books). 

The modules will be as follows:

1. Uploading contents to resale or rent.

2. Browsing through various categories given as:
- furiture resale/rent 
- electronic gadgets resale/rent 
- vehicles resale/rent 
- books resale/rent 

3. The above subcategories will be further divided into sub-sub categories.

4. If resale is chosen, the resale cost uploaded by the seller will be shown. if rent is chosen, cost will be calculated on the time basis.

## Code

[Link to code on repo](https://github.com/shermisaurus/jiit-buy-sell-portal/blob/master/project.c)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct variables{
  int id,age,price;
  char model[15],comp[15];
}v;

struct rent{
  int id,time,cost;
  char model[15],comp[15];
}r;

void mobile_d(){
    system("cls");
    FILE *fptr = fopen("elec_mob.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Mobiles are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Mobile ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("elec_mob.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.3*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void lap_d(){
    system("cls");
    FILE *fptr = fopen("elec_lap.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Mobiles are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Mobile ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("elec_lap.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.4*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void headphone_d(){
    system("cls");
    FILE *fptr = fopen("elec_head.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available HeadPhones are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Headphone ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("elec_head.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.2*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void electronics_d(){
    system("cls");
    int ch;
    printf("1. MOBILE PHONE\n");
    printf("2. LAPTOP/PC\n" );
    printf("3. HEADPHONES/EARPHONES\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice: " );
    scanf("%d",&ch);

    switch(ch){
      case 1:  mobile_d();
               break;
      case 2:  lap_d();
               break;
      case 3:  headphone_d();
               break;
      case 4:  exit(0);
      default: printf("Enter valid choice");
    }
}

void c_d(){
    system("cls");
    FILE *fptr = fopen("book_c.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Books are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Book ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("book_c.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.1*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void ds_d(){
    system("cls");
    FILE *fptr = fopen("book_ds.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Books are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Book ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("book_ds.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.15*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void fic_d(){
    system("cls");
    FILE *fptr = fopen("book_fic.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Books are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Book ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("book_fic.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.2*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void books_d(){
    system("cls");
    int ch;
    printf("1. C++\n");
    printf("2. DATA STRUCTURES\n" );
    printf("3. FICTION\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice\n" );
    scanf("%d",&ch);

    switch (ch){
      case 1: c_d();
              break;
      case 2: ds_d();
              break;
      case 3: fic_d();
              break;
      case 4: exit(0);
      default: printf("Enter valid choice");
    }
}

void car_d(){
    system("cls");
    FILE *fptr = fopen("vehi_car.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Cars are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter  ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("vehi_car.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.4*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void sc_d(){
    system("cls");
    FILE *fptr = fopen("vehi_sc.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Scooter are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Scooter ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("vehi_sc.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.3*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void bike_d(){
    system("cls");
    FILE *fptr = fopen("vehi_bike.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Bike are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Bike ID: ");
        scanf("%d",&ch);
        int time;
        FILE *fpt = fopen("vehi_bike.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Enter your Time of rent: ");
                scanf("%d",&time);
                int c = time*0.3*r.cost;
                printf("Cost of rent is %d",c);
            }
        }
        fclose(fpt);
	}
}

void vehicles_d(){
    system("cls");
    int ch;
    printf("1. CAR\n");
    printf("2. SCOOTY\n" );
    printf("3. BIKES\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice\n" );
    scanf("%d",&ch);

    switch(ch){
      case 1: car_d();
              break;
      case 2: sc_d();
              break;
      case 3: bike_d();
              break;
      case 4: exit(0);
      default: printf("Enter valid choice");
    }
}

void category_d(){
     system("cls");
     int ch;
     printf("1. ELECTRONICS\n");
     printf("2. BOOKS\n" );
     printf("3. VEHICLES\n" );
     printf("4. EXIT\n" );
     printf("Enter your choice\n" );
     scanf("%d",&ch);

     switch(ch){
       case 1: electronics_d();
               break;
       case 2: books_d();
               break;
       case 3: vehicles_d();
               break;
       case 4: exit(0);
       default: printf("Enter valid choice");
     }
}

void mobile_u(){
    system("cls");
    FILE *fptr = fopen("elec_mob.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Model, Price and Age of phone:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Company name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Model: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Age of phone: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void lap_u(){
    system("cls");
    FILE *fptr = fopen("elec_lap.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Model, Price and Age of Laptop:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Company name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Model: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Age of Laptop: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void headphone_u(){
    system("cls");
    FILE *fptr = fopen("elec_headphone.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Model, Price and Age of Headphone:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Company name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Model: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Age of Headphones: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void electronics_u(){
    int ch;
    printf("1. MOBILE PHONE\n");
    printf("2. LAPTOP/PC\n" );
    printf("3. HEADPHONES/EARPHONES\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice\n" );
    scanf("%d",&ch);

    switch (ch){
      case 1:  mobile_u();
               break;
      case 2:  lap_u();
               break;
      case 3:  headphone_u();
               break;
      case 4:  exit(0);
      default: printf("Enter valid choice");
    }
}

void c_u(){
    system("cls");
    FILE *fptr = fopen("book_c.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Author, Price and Age of Book:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Book name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Author: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Publishing year: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void ds_u(){
    system("cls");
    FILE *fptr = fopen("book_ds.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Author, Price and Age of Book:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Book name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Author: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Publishing year: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void fic_u(){
    system("cls");
    FILE *fptr = fopen("book_fic.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Author, Price and Age of Book:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Book name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Author: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Publishing year: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void books_u(){
    int ch;
    printf("1. C++\n");
    printf("2. DATA STRUCTURES\n" );
    printf("3. FICTION\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice\n" );
    scanf("%d",&ch);

    switch (ch){
      case 1:  c_u();
               break;
      case 2:  ds_u();
               break;
      case 3:  fic_u();
               break;
      case 4:  exit(0);
      default: printf("Enter valid choice");
    }
}

void car_u(){
    system("cls");
    FILE *fptr = fopen("vehi_car.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Model, Price and Age of Headphone:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Company name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Model: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Age of Car: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void sc_u(){
    system("cls");
    FILE *fptr = fopen("vehi_sc.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Model, Price and Age of Headphone:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Company name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Model: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Age of Scooter: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void bike_u(){
    system("cls");
    FILE *fptr = fopen("vehi_bike.txt","a");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        printf("Enter Company name, Model, Price and Age of Headphone:- \n");
        printf("Enter ID: ");
        scanf("%d",&v.id);
        printf("Company name: ");
        fflush(stdin);
        fgets(v.comp,15,stdin);
        printf("Model: ");
        fflush(stdin);
        fgets(v.model,15,stdin);
        printf("Age of Bike: ");
        scanf("%d",&v.age);
        printf("Price: ");
        scanf("%d",&v.price);
        fwrite(&v,sizeof(v),1,fptr);
        fclose(fptr);
	}
}

void vehicles_u(){
    system("cls");
    int ch;
    printf("1. CAR\n");
    printf("2. SCOOTY\n" );
    printf("3. BIKES\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice\n" );
    scanf("%d",&ch);

    switch(ch)
    {
      case 1:  car_u();
               break;
      case 2:  sc_u();
               break;
      case 3:  bike_u();
               break;
      case 4:  exit(0);
      default: printf("Enter valid choice");
    }
}

void category_u(){
     system("cls");
     int ch;
     printf("1. ELECTRONICS\n");
     printf("2. BOOKS\n" );
     printf("3. VEHICLES\n" );
     printf("4. EXIT\n" );
     printf("Enter your choice\n" );
     scanf("%d",&ch);

     switch (ch){
       case 1: electronics_u();
               break;
       case 2: books_u();
               break;
       case 3: vehicles_u();
               break;
       case 4: exit(0);
       default: printf("Enter valid choice");
     }
}

void mobile_dd(){
    system("cls");
    FILE *fptr = fopen("elec_mob.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Laptops are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",++i,r.model);
        }
        fclose(fptr);
        printf("Enter Laptops ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("elec_mob.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void lap_dd(){
    system("cls");
    FILE *fptr = fopen("elec_lap.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Laptops are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",++i,r.model);
        }
        fclose(fptr);
        printf("Enter Laptops ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("elec_lap.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void headphone_dd(){
    system("cls");
    FILE *fptr = fopen("elec_mob.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0, ch;
        printf("Available Headphones are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",++i,r.model);
        }
        fclose(fptr);
        printf("Enter HeadPhone ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("elec_head.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void electronics_dd(){
    system("cls");
    int ch;
    printf("1. MOBILE PHONE\n");
    printf("2. LAPTOP/PC\n" );
    printf("3. HEADPHONES/EARPHONES\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice: " );
    scanf("%d",&ch);

    switch(ch){
      case 1:  mobile_dd();
               break;
      case 2:  lap_dd();
               break;
      case 3:  headphone_dd();
               break;
      case 4:  exit(0);
      default: printf("Enter valid choice");
    }
}

void c_dd(){
    system("cls");
    FILE *fptr = fopen("book_c.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Books are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Book ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("book_c.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void ds_dd(){
    system("cls");
    FILE *fptr = fopen("book_ds.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Books are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Book ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("book_ds.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void fic_dd(){
    system("cls");
    FILE *fptr = fopen("book_fic.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Books are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Book ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("book_fic.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void books_dd(){
    system("cls");
    int ch;
    printf("1. C++\n");
    printf("2. DATA STRUCTURES\n" );
    printf("3. FICTION\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice\n" );
    scanf("%d",&ch);

    switch (ch){
      case 1: c_dd();
              break;
      case 2: ds_dd();
              break;
      case 3: fic_dd();
              break;
      case 4: exit(0);
      default: printf("Enter valid choice");
    }
}

void car_dd(){
    system("cls");
    FILE *fptr = fopen("vehi_car.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Cars are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Car ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("vehi_car.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void sc_dd(){
    system("cls");
    FILE *fptr = fopen("vehi_sc.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Scooters are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Scooter ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("vehi_sc.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void bike_dd(){
    system("cls");
    FILE *fptr = fopen("vehi_bike.txt","r");
    if(!fptr){
      printf("Error!");
      exit(1);
    }

    else{
        int i=0,ch;
        printf("Available Bike are:- \n");
        while(fread(&r,sizeof(r),1,fptr)){
            printf("%d. %s",r.id,r.model);
        }
        fclose(fptr);
        printf("Enter Bike ID: ");
        scanf("%d",&ch);
        FILE *fpt = fopen("vehi_bike.txt","r");
        while(fread(&r,sizeof(r),1,fpt)){
            if(r.id==ch){
                printf("Cost of rent is %d",r.cost);
            }
        }
	}
}

void vehicles_dd(){
    system("cls");
    int ch;
    printf("1. CAR\n");
    printf("2. SCOOTY\n" );
    printf("3. BIKES\n" );
    printf("4. EXIT\n" );
    printf("Enter your choice\n" );
    scanf("%d",&ch);

    switch(ch){
      case 1: car_dd();
              break;
      case 2: sc_dd();
              break;
      case 3: bike_dd();
              break;
      case 4: exit(0);
      default: printf("Enter valid choice");
    }
}

void category_dd(){
     system("cls");
     int ch;
     printf("1. ELECTRONICS\n");
     printf("2. BOOKS\n" );
     printf("3. VEHICLES\n" );
     printf("4. EXIT\n" );
     printf("Enter your choice\n" );
     scanf("%d",&ch);

     switch(ch){
       case 1: electronics_dd();
               break;
       case 2: books_dd();
               break;
       case 3: vehicles_dd();
               break;
       case 4: exit(0);
       default: printf("Enter valid choice");
     }
}

int main(){
    system("cls");
    int ch;
    printf("WELCOME TO JIIT BUY/SELL PORTAL\n");
    printf("1. RENT an accessory \n");
    printf("2. BUY an accessory\n");
    printf("3. UPLOAD accessories for resale and rent\n");
    printf("4. Exit\n");
    printf("Enter your choice\t");
    scanf("%d",&ch);

    switch(ch){
        case 1: category_d();
                break;
        case 2: category_dd();
                break;
        case 3: category_u();
                break;
        case 4: exit(0);
        default: printf("Enter valid choice");
    }
}

## Flow Chart


## Data Structures used and the reason behind


## Functions Explained : Working and Algorithms


## Results Screenshots

![screen1](https://raw.githubusercontent.com/shermisaurus/jiit-buy-sell-portal/master/Screens/1.jpeg)
![screen2](https://raw.githubusercontent.com/shermisaurus/jiit-buy-sell-portal/master/Screens/2.jpeg)
![screen3](https://raw.githubusercontent.com/shermisaurus/jiit-buy-sell-portal/master/Screens/3.jpeg)
![screen4](https://raw.githubusercontent.com/shermisaurus/jiit-buy-sell-portal/master/Screens/4.jpeg)
![screen5](https://raw.githubusercontent.com/shermisaurus/jiit-buy-sell-portal/master/Screens/5.jpeg)


## Task Distribution 


