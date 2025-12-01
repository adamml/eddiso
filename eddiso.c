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

#include <eddiso/awesome.h>
#include <eddiso/man.h>
#include <eddiso/server.h>
#include <eddiso/version.h>
 
/**
 * Main function
 *
 *    Return codes:
 *         0 : OK
 *        -1 : Invocation error - no mode flag supplied
 *        -2 : Invocation error - multiple mode flags supplied
 *        -3 : Wrong number of input arguments supplied
 */
int main (int argc, char *argv[]){
    
    /**
     * Choose the mode to run in later...
     *    -2 Error - multiple mode flags supplied
     *    -1 Error - no mode flag supplied
     *     0 Help
     *     1 List all Erddap servers
     *     2 Collect all ISO 19139 files from an Erddap server
     *     3 Display version information
     */
    int mode = -1;
    int i;
    for(i = 0; i< argc; i++){
        if(strcmp(argv[i], "--help") == 0){if(mode<0){mode = 0;} else {mode = -2;}}
        if(strcmp(argv[i], "--awesome") == 0){if(mode<0){mode = 1;} else {mode = -2;}}
        if(strcmp(argv[i], "--server") == 0){if(mode<0){mode = 2;} else {mode = -2;}}
        if(strcmp(argv[i], "--version") == 0){if(mode<0){mode = 3;} else {mode = -2;}}
    }
    
    if(mode == -2){
        printf("\nERROR: Multiple mode flags supplied, this functionality is not supported. See eddISO --help for details...\n\n");
        return -2;
    } else if(mode == -1){
        printf("\nERROR: A valid mode flag must be supplied, see eddISO --help for details...\n\n");
        return -1;
    } else if(mode == 0) {
        man();
    } else if(mode == 3){
        version();
    } else if(mode == 1){
        if(i != 3){
            if(i > 3){
                printf("\nERROR: Too many input arguments supplied, see eddISO --help for details...\n\n");
                
            } else {
                printf("\nERROR: Too few input arguments supplied, see eddISO --help for details...\n\n");
            }
            return -3;
        }
    } else {
        if(i != 4){
            if(i > 4){
                printf("\nERROR: Too many input arguments supplied, see eddISO --help for details...\n\n");
                
            } else {
                printf("\nERROR: Too few input arguments supplied, see eddISO --help for details...\n\n");
            }
            return -3;
        }
        
    }
    
    return 0;
}