#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100
#define AGE_LEN 2
//files are identified by using their file pointer
// this is obtained when the file is opened








int main(){
    FILE *fp;

    char name[MAXLINE];
    int age;
    double height;

    if(fp = fopen( "text.txt", "r") != NULL){

        fp = fopen("text.txt", "r");

        fscanf(fp, "%s\n%d\n%d", name, &age, &height);


        printf("name=%s, age=%d, height=%d", name, age, height);

        fclose(fp);
    }else{
        printf("Could not open file");
    }
    return 0;
}

