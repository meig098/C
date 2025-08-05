#include <stdio.h>
#include <stdlib.h>

int main(){
    int fi=1,num=2,f;
    char filename[100];
    while (1) {
        num*=num;

        printf("%d\n",num);
        int*point = (int*)malloc(sizeof(int)*num);
        sprintf(filename,"%d.txt",fi);
        FILE*file=fopen(filename,"w");
        
        for (int i=0;i<=fi;i++){
            fprintf(file,"ㅋ");
        }
        fclose(file);
        fi++;
    }
    return 0;
}