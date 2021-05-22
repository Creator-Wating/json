#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    int expect =1;
    int actual =0;
    fprintf(stderr, "%s:%d: expect:" "%d" actual: " "%d" 
            "\n ",_FILE_,_LINE_, expect,actual);
}
