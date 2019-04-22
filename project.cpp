#include<iostream>
#include<stdio.h>
#include<fstream>


using namespace std;

typedef struct variables{

  int ch_main,ch_cat, ch_el, ch_b, ch_veh;


}var;

void mobile_d()
{}

void lap_d(/* arguments */)
 {}

void headphone_d()
{}

void electronics_d()
{
  var v;
    printf("1. MOBILE PHONE\n");
    printf("2. LAPTOP/PC\n" );
    printf("3.HEADPHONES/EARPHONES\n" );
    printf("4.EXIT\n" );
    printf("Enter your choice\n" );
    cin>>v.ch_el;

    switch (v.ch_el)
    {
      case 1: mobile_d();break;
      case 2:  lap_d(); break;
      case 3:  headphone_d(); break;
      case 4: exit(0);
      default: cout<<"Enter valid choice";

    }
}
void c_d()
{}

void ds_d()
{}

void fic_d()
{}

void books_d(/* arguments */)
{
  var v;
    printf("1. C++\n");
    printf("2. DATA STRUCTURES\n" );
    printf("3. FICTION\n" );
    printf("4.EXIT\n" );
    printf("Enter your choice\n" );
    cin>>v.ch_b;

    switch (v.ch_b)
    {
      case 1: c_d();break;
      case 2:  ds_d(); break;
      case 3:  fic_d(); break;
      case 4: exit(0);
      default: cout<<"Enter valid choice";

    }
}
void car_d(/* arguments */)
{}

void sc_d(/* arguments */)
{}

void bike_d(/* arguments */)
 {}


void vehicles_d()
{
  var v;
    printf("1. CAR\n");
    printf("2. SCOOTY\n" );
    printf("3. BIKES\n" );
    printf("4.EXIT\n" );
    printf("Enter your choice\n" );
    cin>>v.ch_b;

    switch (v.ch_veh)
    {
      case 1: car_d();break;
      case 2:  sc_d(); break;
      case 3:  bike_d(); break;
      case 4: exit(0);
      default: cout<<"Enter valid choice";

    }
}


void mobile_u()
{}

void lap_u(/* arguments */)
 {}

void headphone_u()
{}

void electronics_u()
{
  var v;
    printf("1. MOBILE PHONE\n");
    printf("2. LAPTOP/PC\n" );
    printf("3.HEADPHONES/EARPHONES\n" );
    printf("4.EXIT\n" );
    printf("Enter your choice\n" );
    cin>>v.ch_el;

    switch (v.ch_el)
    {
      case 1: mobile_u();break;
      case 2:  lap_u(); break;
      case 3:  headphone_u(); break;
      case 4: exit(0);
      default: cout<<"Enter valid choice";

    }
}
void c_u()
{}

void ds_u()
{}

void fic_u()
{}


void books_u(/* arguments */)
{
  var v;
    printf("1. C++\n");
    printf("2. DATA STRUCTURES\n" );
    printf("3. FICTION\n" );
    printf("4.EXIT\n" );
    printf("Enter your choice\n" );
    cin>>v.ch_b;

    switch (v.ch_b)
    {
      case 1: c_u();break;
      case 2:  ds_u(); break;
      case 3:  fic_u(); break;
      case 4: exit(0);
      default: cout<<"Enter valid choice";

    }
}
void car_u(/* arguments */)
{}

void sc_u(/* arguments */)
{}

void bike_u(/* arguments */)
 {}

void vehicles_u()
{
  var v;
    printf("1. CAR\n");
    printf("2. SCOOTY\n" );
    printf("3. BIKES\n" );
    printf("4.EXIT\n" );
    printf("Enter your choice\n" );
    cin>>v.ch_b;

    switch (v.ch_veh)
    {
      case 1: car_u();break;
      case 2:  sc_u(); break;
      case 3:  bike_u(); break;
      case 4: exit(0);
      default: cout<<"Enter valid choice";

    }
}



   void category_d(/* arguments */)
   { var v;
     printf("1. ELECTRONICS\n");
     printf("2.BOOKS\n" );
     printf("3.VEHICLES\n" );
     printf("4.EXIT\n" );
     printf("Enter your choice\n" );
     cin>>v.ch_cat;

     switch (v.ch_cat)
     {
       case 1: electronics_d(); break;
       case 2: books_d(); break;
       case 3: vehicles_d(); break;
       case 4: exit(0);
       default: cout<<"Enter valid choice";

     }
   }

   void category_u(/* arguments */)
   { var v;
     printf("1. ELECTRONICS\n");
     printf("2.BOOKS\n" );
     printf("3.VEHICLES\n" );
     printf("4.EXIT\n" );
     printf("Enter your choice\n" );
     cin>>v.ch_cat;

     switch (v.ch_cat)
     {
       case 1: electronics_u(); break;
       case 2: books_u(); break;
       case 3: vehicles_u(); break;
       case 4: exit(0);
       default: cout<<"Enter valid choice";

     }
   }

void input_rent()
{
 category_d();

}
 void input_upload(/* arguments */)
  {
   category_u();
 }

 void input_resale(){
   category_d();

 }

void input_main()
{
var v;
  printf("WELCOME TO JIIT BUY/SELL PORTAL\n");
  printf("1. RENT an accessory \n");
  printf("2. BUY an accessory\n");
  printf("3. UPLOAD accessories for resale and rent\n");
  printf("4.Exit\n");
  printf("Enter your choice\t");
  cin>>v.ch_main;

  switch(v.ch_main)
    {
      case 1: input_rent(); break;
      case 2: input_resale(); break;
      case 3: input_upload(); break;
      case 4: exit(0);
      default: cout<<"Enter valid choice";
    }


}


int main()
{
input_main();
  return 0;
}
