#include"validate_edid.h"


void print_edid(int fd)
{
    unsigned char buf[128];
    int s_read;
    s_read = read(fd,buf,128);
    if(s_read<0)
    {
        printf("Failed to read\n");
    }
    printf("In hex\n");
    printf("------------------------------");
    for(int i=0;i<128;i++)
    {
        if(i%16 ==0)
        {
            printf("\n");
        }
        printf("%02x ",buf[i]);
    }
    printf("\n------------------------------");
}