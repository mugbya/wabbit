#include <stdio.h>
#include <unistd.h>

int main(){
    if (fork() > 0){
	return 0;
    } else{
	fork();
	fork();
	main();
    }

   return 0; 
}
