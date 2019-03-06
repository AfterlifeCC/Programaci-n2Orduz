#include <stdio.h>
#include <string.h>
struct FamData{
    char name[20];
    int age;
};

int main(){
    FILE * ptrFl;

	ptrFl=fopen("testEx12.1.txt","a");

	struct FamData famMbrs[2], * ptrfamMbrs;
	ptrfamMbrs=&famMbrs;
	
	strcpy(ptrfamMbrs->name,"H. Simp");
	ptrfamMbrs -> age=30;

	strcpy(ptrfamMbrs->name,"M. Simp");
	ptrfamMbrs -> age=32;

//for(ptrFl;"%s %d";ptrfamMbrs->name; ptrfamMbrs++){
	//fprintf(ptrFl,"%s %d");

}

	

	fclose(ptrFl);

