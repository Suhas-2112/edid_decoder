#include "validate_edid.h"


const unsigned char val[] = {0x00,0xff,0xff,0xff,0xff,0xff,0xff,0x00};

int validate(int fd)
{
    int s_byte;
    const unsigned char buf[8];
    lseek(fd,0,SEEK_SET);
    s_byte = read(fd,buf,8);
    if(s_byte != 8)
    {
        printf("Unable to read\n");
        return 0;
    }
    printf("\n");
    for(int i = 0;i<8;i++)
    {
        if(buf[i] !=val[i])
        {
            printf("Its not EDID file\n");
            return 0;
        }
    }
    return 1;
}