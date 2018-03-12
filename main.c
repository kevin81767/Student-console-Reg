//FIRST QUESTION

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kevin
 *
 * Created on November 6, 2017, 6:32 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
 * 
 */



struct students{
    int ID;
    char name[30];
    int marks;
};
struct students s[];
    


int g=0,i,qty,choice;



//Function to record students

int Records(){
    
 
        printf("Enter the ID of student No %d: ",g+1);
        scanf("%d",&s[g].ID);
        printf("\nEnter his/her name: ");
        scanf("%s",&s[g].name);
        printf("\nEnter his/her mark: ");
        scanf("%d",&s[g].marks);
        printf("_____________________________\n\n");
        g++;
    
}

//Function to search students

void Search(){
    int user;
    printf("Enter an ID to search information: ");
    scanf("%d",&user);
    for(i=0;i<g;i++){
        if(s[i].ID){
            if(s[i].ID == user){
                printf("\n\tID\t|\tName\t|\tMarks\t|\n");
                printf("\t_______________________________________");
                printf("\n");
                printf("\t%d\t|",s[i].ID);
                printf("\t%s\t|",s[i].name);
                printf("\t%d\t|",s[i].marks);
                printf("\n\n");
            }
            else{
                printf("No match found!!!\n\n");
            }
            
        }
        
    }
    
}


//Function to Display students

void Display(){
    printf("\n");
    printf("\tID\t|\tName\t|\tMarks\t|\n");
    printf("\t___________________________________________________");
    printf("\n");
    for(i=0;i<g;i++){
        printf("\t%d\t|",s[i].ID);
        printf("\t%s\t|",s[i].name);
        printf("\t%d\t|",s[i].marks);
        printf("\n\n");
    }
}


int main(){
    
    
//    Asking user how many students he want to record
    
    
//    switch case
    
    do{
        printf("What do you want to do?\n");
        printf("______MENU__________\n");
        printf("1.  RECORD A STUDENTS    \n");
        printf("2.  DISPLAY STUDENTS \n");
        printf("3.  SEARCH A STUDENT    \n");
        printf("Choose a number from the menu :");
        scanf("%d",&choice);
    
   
        switch (choice){
         case 1:
             Records();
             break;
         case 2:
             Display();
             break;
         case 3:
             Search();
             break;
        }
    }
        
    while(choice != 4);
  
    return 0;
}
