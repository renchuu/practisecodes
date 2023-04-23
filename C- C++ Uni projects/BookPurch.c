#include<stdio.h>
#include <stdlib.h>
  
struct Info
{
   char name[30];
   char l_name[30];
   int age;
   int zipcode;
};

struct Info student;

char action [][30]= {"Harry potter collection","Sherlock Holmes bundle","Lord of the rings","Dune","Arsene lupin"};
int action_price [] = {240,170,300,35,42};

char romance [][30]= {"It ends with us","Pride and prejudice","After you","The fault in our stars","Beautiful disaster"};
int romance_price [] = {23,40,25,30,20};

char comics [][30]= {"Justice league","Avengers full pack","Superman First edition","Spider-man 2010 bundle","Batman 1990 collection"};
int comics_price[] = {105,120,24,44,50};

char horror [][30]= {"The shining","Friday the 13th","Coraline","IT","Hell house"};
int horror_price [] = {65,80,25,28,25};


void GetInfo()
{
    
    printf("Welcome to your friendly neighborhood BookE-Store\nBefore we proceed...\nPlease fill in the below info we need:\n");
    
    printf("Please enter your First Name: ");
    scanf("%s", student.name);
    
    printf("Please enter your Last Name: ");
    scanf("%s", student.l_name);
    
    printf("Please enter your Age: ");
    scanf("%d", &student.age);
            if (student.age < 18){
                printf("Sorry you must be older than 18 to use our services");
                exit(0);}
            if (student.age > 80){
                printf("Sorry you must be able to read to use our services");
                exit(0);}
    while (1){
        printf("Please enter your zipcode: ");
        scanf("%d", &student.zipcode);
        if (student.zipcode < 99999, student.zipcode > 10000){
            break;
        }
        printf("invalid zipcode!!\n"); 
    }
    
}


int main(){
    int choice;
    int taken;
    int price = 0;
    int yn = 0;        
    int i=0;
    
    GetInfo();
    
    while(1){
        printf("Please select a genre:\nPress 1 for Action\nPress 2 for romance\nPress 3 for science fiction\nPress 4 for horror\n==> ");
        scanf("%d", &choice);

        
            if (choice == 1){
                while (1) {
                    for (i = 0;i < 5;i++){
                        printf("%d_%s  :: %d tl\n",i+1,action[i],action_price[i]);
                    }
                    printf("Press 0 to cancel\n");
                    printf("Which book do you want? ");
                    scanf("%d",&taken);
                    if (taken == 0 ){
                        break;
                    }
                    if (taken < 1){
                        printf("Invalid input\n");
                        continue;
                    }
                    else if (taken > 5){
                        printf("Book not found\n");
                        continue;
                    }
                    else {
                        price = action_price[taken - 1] + price ;
                        break;
                    }
                break;
                }
            }
            if (choice == 2){
                while (1) {
                    for (i = 0;i < 5;i++){
                        printf("%d_%s  :: %d tl\n",i+1,romance[i],romance_price[i]);
                    }
                    printf("Press 0 to cancel\n");
                    printf("Which book do you want? ");
                    scanf("%d",&taken);
                    if (taken == 0 ){
                        break;
                    }
                    if (taken < 1){
                        printf("Invalid input\n");
                        continue;
                    }
                    else if (taken > 5){
                        printf("Book not found\n");
                        continue;
                    }
                    else {
                        price = romance_price[taken - 1] + price ;
                        break;
                    }
                break;
                }
            }
            if (choice == 3){
                while (1) {
                   for (i = 0;i < 5;i++){
                        printf("%d_%s  :: %d tl\n",i+1,comics[i],comics_price[i]);
                    }
                    printf("Press 0 to cancel\n");
                    printf("Which book do you want? ");
                    scanf("%d",&taken);
                    if (taken == 0 ){
                        break;
                    }
                    if (taken < 1){
                        printf("Invalid input\n");
                        continue;
                    }
                    else if (taken > 5){
                        printf("Book not found\n");
                        continue;
                    }
                    else {
                        price = comics_price[taken - 1] + price ;
                        break;
                    }
                    break;
                }
            }
            if (choice == 4){
                while (1) {
                    for (i = 0;i < 5;i++){
                        printf("%d_%s  :: %d tl\n",i+1,horror[i],horror_price[i]);
                    }
                    printf("Press 0 to cancel\n");
                    printf("Which book do you want? ");
                    scanf("%d",&taken);
                    if (taken == 0 ){
                        break;
                    }
                    if (taken < 1){
                        printf("Invalid input\n");
                        continue;
                    }
                    else if (taken > 5){
                        printf("Book not found\n");
                        continue;
                    }
                    else {
                        price = horror_price[taken - 1] + price ;
                        break;
                    }
                    break;
                }
            }
           
            
        printf("Do you want to buy another book? \nPress 1 for yes\nPress 2 for no\n");
        scanf("%d",&yn);
        if (yn == 2){
            break;
        }
        
    }
    
    printf("A purchase by the name of: %s %s\nFor the price of: %d\nWill be sent to our nearest store in : %d\n\n",student.name,student.l_name,price,student.zipcode);
    

    return 0;
}
