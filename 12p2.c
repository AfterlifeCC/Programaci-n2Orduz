#include <stdio.h>
#include <string.h>
struct FamData{
    char name[20];
    int age;
};

int main(){
    FILE * ptrFl;

	ptrFl=fopen("testEx12.txt","a");

	struct FamData famMbrs, * ptrfamMbrs;
	ptrfamMbrs=&famMbrs;
	strcpy(ptrfamMbrs->name,"H. Simp");
	ptrfamMbrs -> age=30;

	fprintf(ptrFl,"%s %d",ptrfamMbrs->name, ptrfamMbrs->age);

	fclose(ptrFl);

}
