#include "validate_edid.h"


int main()
{
    int fd;

    fd = open("edid_sample",O_RDONLY,0);

    if(fd<0)
    {
        perror("Unable to open file");
    }
    print_edid(fd);

    if(validate(fd))
    {
        printf("Its a valid EDID\n");
    }
    else
    {
        printf("Its not a valid EDID\n");
    }
    return 0;
}