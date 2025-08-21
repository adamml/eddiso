/**
 * erddap_iso_harvest.c
 *
 * @author: Adam Leadbetter (@adamml)
 * @date:
 * @licence:
 * @version:
 */

#include <stdio.h>
#include <string.h>
#include <eddiso/man.h>

 
/**
 * Main function
 *
 *    Return codes:
 *         0 : OK
 *        -1 : Invocation error - no mode flag supplied
 *        -2 : Invocation error - multiple mode flags supplied
 */
int main (int argc, char *argv[]){
    
    /**
     * Choose the mode to run in later...
     *    -2 Error - multiple mode flags supplied
     *    -1 Error - no mode flag supplied
     *     0 Help
     *     1 List all Erddap servers
     *     2 Collect all ISO 19139 files from an Erddap server
     */
    int mode = -1;
    
    for(int i = 0; i< argc; i++){
        if(strcmp(argv[i], "--help") == 0){if(mode<0){mode = 0;} else {mode = -2;}}
        if(strcmp(argv[i], "--awesome") == 0){if(mode<0){mode = 1;} else {mode = -2;}}
        if(strcmp(argv[i], "--server") == 0){if(mode<0){mode = 2;} else {mode = -2;}}
    }
    
    if(mode == -2){
        printf("\nERROR: Multiple mode flags supplied, this functionality is not supported. See eddISO -h for details...\n\n");
        return -2;
    } else if(mode == -1){
        printf("\nERROR: A valid mode flag must be supplied, see eddISO -h for details...\n\n");
        return -1;
    } else if(mode == 0) {
        man();
    } else if(mode == 1){
        
    } else {
        
    }
    
    return 0;
}