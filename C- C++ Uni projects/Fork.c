#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void file(){
	char file_name[20];
	sprintf(file_name,"%d.txt", getpid());
	FILE *fp=fopen(file_name,"w");
	fclose(fp);
}


void create_tree(int height){
	if(height==0){
		file();
		return;
	}
	int pid=fork();
	if(pid>0){
		int pid2=fork();
		if(pid2>0){
			wait(NULL);
			printf("parent= %d c1. %d c2. %d\n", getpid(), pid, pid2);
			fflush(stdout);
			file();
		}
		else if(pid2==0)
			create_tree(--height);
	}
	else if(pid==0)
		create_tree(--height);
}

int main(int argc, char *argv[]) {
	create_tree(3);
	return 0;
}
