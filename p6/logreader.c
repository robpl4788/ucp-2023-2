#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc != 2)
    {
        printf("Invalid argument count\n");
    }
    else{
        FILE* log = fopen(argv[1], "r");
        if (log == NULL)
        {
            perror("Could not read log file");
        }
        else 
        {
            int done = 0;
            do 
            {
                char month[3];
                int day, hour, min, sec;
                char msg[100];
                fscanf(log, "%3s %d %d:%d:%d %99s", 
                    month, &day, &hour, &min, &sec, msg);
                printf("%s", month);

                if (msg == NULL)
                {
                    done = 1;
                }
                else if ( strstr(msg, "fail") != NULL)
                {
                    int time = hour * 60 * 60 + min * 60 + sec;
                    printf("%d %s", time, msg);
                }

            } while (done == 0);
        }
        fclose(log);

    }

    return 0;

}