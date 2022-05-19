#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int main(const int argc, const char** const argv)
{
    if(argc > 1)
    {
        for(int i = 1 ; i < argc ; i++)
        {
            if(0 > printf("%zu\n", ((NULL != argv[i]) ? strlen(argv[i]) : 0)))
            {
                perror("printf()");
                return EXIT_FAILURE;
            }
        }
    }
    else
    {
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
