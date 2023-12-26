#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
    struct stat sfile;
    stat("hello.txt",&sfile);
    printf("\nfile size=%ld",sfile.st_size);
       printf("\n blck size=%ld",sfile.st_blksize);
          printf("\n mode=%d",sfile.st_mode);
             printf("\n aces time=%ld",sfile.st_atime);
                printf("\n modfcytion time=%ld",sfile.st_mtime);
}