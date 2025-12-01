#include <stdio.h>
#include <eddiso/version.h>

/*
 * Semantic version string
 */
char EDDISO_VERSION[] = "0.0.1";

void version(){
    printf("\n\teddiso version = %s\n\n", EDDISO_VERSION);
}