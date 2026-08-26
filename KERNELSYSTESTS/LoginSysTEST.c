#include <stdbool.h>
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h> //Ignore Underline if uncommented

double osver = 0.001;

int test = 1234;
int userid  ;
int pass ;
int bootconfirm = '2' ; // 2 means unset, 0 for n, 1 for y
bool noabort = true; 


void useridcall() {
    printf("User ID: ");
    scanf("%d", &userid);

    //Check if user is correct
    while(userid != 1) {
        if(userid != 1){
            printf("User ID incorrect, Try again. \n");
            useridcall();
        }
    }
    
}
void passcall() {
    printf("Passcode: ");
    scanf("%d", &pass);

    //Chack if pass is correct
    while(pass != test){
        if(pass != test){
            printf("Passcode incorrect. Try again. \n");
            passcall();
        }
    }
}

int main() {

    printf("CordialOS Closed beta %.3lf \n", osver);
    useridcall();
    passcall();
    printf("TEST ARRAY QWERTYUIOPASDFGHJKLZXCVBNM \nNEWLINE");
    

    // End login

    return 0;
    }
