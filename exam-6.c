#include<stdio.h>
//question-6 write any 3 employees name along with their role in a file called data.txt.

int main() 
{
	int i,*p;
    char name[50], role[50];

    p = fopen("D://data.txt","w"); 
    if (p == NULL) 
	{
        printf("Error= Unable to open p data.txt\n");
        return 1;
    }
    
    for (i = 0; i < 3; i++) 
	{
        
        printf("Enter name of employee %d = ", i+1);
        scanf("%s", name);

        printf("Enter role of employee %d = ", i+1);
        scanf("%s", role);

        
        getchar();

        fprintf(p, "%s,%s\n", name, role);
    }

    fclose(p);

    return 0;
}