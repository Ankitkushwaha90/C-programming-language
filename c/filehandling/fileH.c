#include <stdio.h>

int main(){
	FILE * newfile;
	//creater = fopen("new.txt","w");
	//char content[1000];
	
	newfile = fopen("createfile.txt", "w");
	
	fputs("Hello create web, i am programmer", newfile);
	fputs("Hello! what are doing for me", newfile);
	fclose(newfile);
	return 0;
	
	/*if(creater!=NULL){
		//printf("it is  written contain \n");
		//fgets(content, 1000, creater);
		//printf("%s", content );
	}else{
		printf("it is  not filled");
	}
	*/

	return 0;
}