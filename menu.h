#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include<conio.h>

int n;

void menu()
{	
	system("cls");
	printf("\t\t***********REPORT CARD***********\n\n");
	printf("\t\t\t1.Add new Record.\n");
	printf("\t\t\t2.Search for a Record.\n");
	printf("\t\t\t3.Delete a Record.\n");
	printf("\t\t\t4.To check the Record.\n");
	printf("\t\t\t5.To end the Program.\n");
	printf("--> ");
	scanf("%d",&n);
}	
