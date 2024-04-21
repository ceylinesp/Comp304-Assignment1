#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main( int argc, char* argv[])
{
        if (argc != 2) {
        	printf("Error: %s <number of forks can't be>\n", argv[0]);
        	return 1;
        }
        
        int n = atoi(argv[1]); 
	if (n < 0) {
        	printf("Enter a positive integer!");
        	return 1;
        }

	int level=0;
	printf("Main Process ID: %d, level : %d\n", getpid(), level);

        pid_t current = getpid();
        
        for (int i = 0; i < n; ++i){
                pid_t current= getpid();
                pid_t pid = fork();
                if(pid==0){
                        level += 1;
                        pid_t parentID= current;
                        current= getpid();
                }
}
 	if(level != 0){       
        printf("Process ID: %d, ParentID: %d, level : %d\n",current, getpid(),level);
	}
        return 0;
}
# comp-304-operating-systems-assignment-1-ceylinesp
