/*Program Name: cli_sumEff.c
 * Author: Spencer Peters
 * Class: CSC-2410
 * Date: 9/26/19
 * Location ~/speters/csc2410/cli_sumEff.c
 * Program that gives a sum of the integers given in the command line
 * */


#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    int sum;
    
    //Checks to see if there are more than 10 integers and if there is the program exits with exit code 1
    if(argc > 11) 
    {
        fprintf(stderr, "Too Many Integers!!\n");
        exit (1);
    }
    //Checks to see if there are enough integers and if there isn't the program exits with exit code 2
    else if(argc < 3)
    {
        fprintf(stderr, "Not Enough Integers Provided!\n");
        exit (2);
    }

    //If all checks path the program proceeds to sum the cli arguments
    for(int i = 1; i < argc; i++)
    {
       sum += atoi(argv[i]);
    }
    fprintf(stdout, "Total: %i\n", sum);
    return 0;
}
