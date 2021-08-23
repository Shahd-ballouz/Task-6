#include<stdio.h>
#include<conio.h>

int main(){
    FILE *fptr;
    fptr = fopen("emp.txt", "w");
	fprintf(fptr,"STEMKFS");
	fptr = fopen("emp.txt", "r");
 	char word[100] ={0};
 	fscanf(fptr,"%s",word);
	
	char *wordptr;
	wordptr=word[7];
	int i;
	for(i==0;i<7;i++){
		word[0]==word[7];
		word[0]==word[7];
		word[0]==word[7];
		fptr = fopen("emp.txt", "w");
		fprintf(fptr,"%s",word);
		
				
		
	}

    fclose(fptr);
return 0;
}
