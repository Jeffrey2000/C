#include<stdio.h>
#include<stdlib.h>

// Introduces a structure declaration ( a list of declarations in enclosed bracket)
// An optional name called a structure tag may follow the word struct
struct letters {
    char a, b, c; //members of struct
};

// need to add width to the each new line dynamically
int pyramid(char a, char b, char c){
    printf(" %c\n", a);
    printf(" %c%c%c\n", a,b,a);


    for(int i = 1; i <= 7; i++){
        printf(" %c%c", a, b);
        for(int j = 1; j <= i; j++){
            printf("%c", c);
        }
        printf("%c%c\n", b, a);
    }

    return 0;
}

struct letters info(){
    struct letters arr;
    printf("Enter values for a, b , c : .. .");
    // %c with whitespace must be used
    scanf(" %c %c %c", &arr.a, &arr.b, &arr.c);
    return arr;
}

// this reserves no storage, only defines structure to expect
int main(){
    struct letters letterArray;
    letterArray = info();
    //Draws pyramid
    pyramid(letterArray.a, letterArray.b, letterArray.c);
    return 0;
}


