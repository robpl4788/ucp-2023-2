#include <stdio.h>

int main(int argc, char *argv[]){
    if (argc == 3)
    {
    FILE* inputFile = fopen(argv[1], "r");
    
    if (inputFile == NULL)
    {
        perror("Input file error: ");
        fclose(inputFile);
    }
    
    else 
    {
    FILE* outPutFile = fopen(argv[2], "w");


    int character;
    do{
        character = fgetc(inputFile);
        if (character != EOF){
            fputc(character, outPutFile);
        }
    } while (character != EOF);
    fclose(inputFile);
    fclose(outPutFile);
    }
    }
    else
    {
        printf("Incorrect Argument Count\n");
    }

    
    return 0;
}