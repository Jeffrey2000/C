#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100
#define AGE_LEN 2
//files are identified by using their file pointer
// this is obtained when the file is opened








int main(){
    FILE *fp;
    char name[MAXLINE];
    char height[MAXLINE];
    int age;
    if((fp=fopen("text.txt", "r") != NULL)){
        fp = fopen("text.txt", "r");

        fgets(name, MAXLINE, fp);
        fgets(age, MAXLINE, fp);
        fgets(height, MAXLINE, fp);

        *height = (double)(*height);
        printf("name=%s, age=%s, height=%s", name, age, height);
        fclose(fp);
        return 0;
    }

    printf("Could not open file\n");
    return 1;
}

