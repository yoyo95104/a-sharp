#include <stdio.h>
#include <string.h>

char *version = "0.0.0";
int main(int argc, char *argv[]) {
    char *output_file = NULL;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-o") == 0) {
            if (i + 1 < argc) {
                output_file = argv[i + 1];
                i++; 
            } else {
                fprintf(stderr, "Error: -o requires a filename.\n");
                return 1;
            }
        } else if (strcmp(argv[i], "-v") == 0) {
            printf("%s\n" , version);
        }else if(strcmp(argv[i] , "-c")){
		if(i + 1 < argc){
		  output_file = argv[i+1];
		  i++;
		}
	}else {
            printf("CA [usage]\n -o [File] 'Object File' \n -v 'Version' \n  -c [File] 'Compile to a Binary'");
        }
	if(output_file != NULL){
		printf("%s" , output_file);
	}
    }
    return 0;
}
