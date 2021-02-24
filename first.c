/*
 *   This is the secret file that will completely transform the project.
 *   It would be better with this additional line.
 *   And why stop with one, the more documentation the better!  :-)
 */

#define ERROR(S) \
        fprintf(stderr,"%s\nUnix error %d: %s\n",(S),errno,strerror(errno));

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

#define min(x,y)   (((x)<(y)) ? (x) : (y))
#define max(x,y)   (((x)>(y)) ? (x) : (y))

int main(int argc, char *argv[])
{

  return 0;
}


