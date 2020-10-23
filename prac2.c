#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 100
//files are identified by using their file pointer
// this is obtained when the file is opened




int fgetline(FILE *fp, char line[], int max){
    //compound conditionals MUST have surrounding brackets
    if( (fp = fopen("text.txt", "r+")) != NULL){
        int nch=0 , c;
        max--;
        while((c = getc(fp)) != EOF){
                if(c == '\n')
                    break;
                if(nch < max){ //ensure that the
                    line[nch] = c;
                    nch++;
                }
        }


        fclose(fp);
        if(c == EOF && nch == 0)
            return EOF;


        line[nch] = '\0';
        return nch;
    }else{
        printf("Unable to open file\n");
    }
    return -1;
}



int main(){
    FILE *fp;
    char line[MAXLINE];
    // must initialize pointer front of array
    int *ptr = line;

    fgetline(fp,line,MAXLINE);

    printf(" %s", ptr);
    return 0;
}

