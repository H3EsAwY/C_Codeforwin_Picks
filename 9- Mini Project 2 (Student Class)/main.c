/*********************************************
 * Name         : Hany Ali Elesawy
 * Due Date     : 2022.09.11
 * Date Started : 2022.09.11
 * Topic        : Mini Project 2
 * a program that allows the user to enter students’ names followed by their test scores.........
 * .....
 * (Without using a Struct and with using a sorting mechanism)
 *********************************************/
 
 
#include <stdio.h>
#include <string.h>

#define MAX_ARRAY_SIZE 100
#define MAX_STUDENTS   20


int main()
{
	/*********************************** Variables and stuff ***********************************/
	int numStudents = 0;
	char arrStrNames[MAX_ARRAY_SIZE][MAX_STUDENTS];
	int arrScores[MAX_STUDENTS];
	
	int sumScore=0;
	float avgScore;
	
	
	/*************************************** Taking Input ***************************************/
	
	printf("\nEnter the number of students you want to enter: "); 
	fflush(stdout);
	scanf("%d", &numStudents);
	
	/*
	 *	We have to clear the input buffer to get rid of the \n left in the stream to prevent problems with
	 *	the next %[^\n]s which fails if the first character read is a \n
	 */
	 
	/* 
	 *	We can either use a scanf("%*c") which will read a character then discards it,
	 *	or 
	 *	we can just type
	 */
	 
	/*scanf("%*c");*/
	
	fflush(stdin);
	
	
	for(int i=0; i<numStudents; i++)
	{
		printf("\nEnter student %d NAME: ", i+1); 
		fflush(stdout);
		scanf("%[^\n]s", &arrStrNames[i]);
		fflush(stdin);
		
		
		printf("Enter student %d SCORE: ", i+1); 
		fflush(stdout);
		scanf("%d", &arrScores[i]);
		fflush(stdin);
	}
	
	/*********************************************************************************************/
	/**************************************** Bubble Sort ****************************************/
					/*Sorting The 2 Arrays in a Descending order based on scores*/
	/*********************************************************************************************/
	
	for(int i=0; i<numStudents; i++)
	{
		
		for(int j=0; j<numStudents-1; j++)
		{
			
			if(arrScores[j]<arrScores[j+1])
			{	
				char strTemp[MAX_ARRAY_SIZE];
				
				int tempScore = arrScores[j];
				strcpy(strTemp, arrStrNames[j]);
				
				
				arrScores[j] = arrScores[j+1];
				strcpy(arrStrNames[j], arrStrNames[j+1]);
				
				
				arrScores[j+1] = tempScore;
				strcpy(arrStrNames[j+1], strTemp);
			}
			
		}
		
	}
	
	/************************************ Getting sum , Avg ************************************/
	
	for(int i; i<numStudents; i++)
	{
		sumScore = sumScore + arrScores[i];
	}
	avgScore = (float) sumScore/numStudents;
	
	printf("\n\n--------------------------------------\n");
	printf("The average score is: %.2f\n", avgScore);
	printf("--------------------------------------\n\n");
	
	/************************************ printing Top and belowAvg ************************************/
	
	printf("--------------------------------------\n");
	printf("Top Scorer: %s \nWith Score: %d\n", arrStrNames[0], arrScores[0]);
	printf("Keep up the good work!!\n");
	printf("--------------------------------------\n\n");
	
	printf("--------------------------------------\n");
	printf("**Warning**: The following students have a below average score\n\n");
	
	for(int i=0; i<numStudents; i++)
	{
		if (arrScores[i] < avgScore)
			printf("Name: %s \nScore:%d\n\n", arrStrNames[i], arrScores[i]);
	}
	
	printf("If you need help improving, please reach out!\n");
	printf("--------------------------------------\n\n");
	
	/*********************************************************************************************/
	/************************************ General Stats ************************************/
	/*********************************************************************************************/
	
	printf("--------------------------------------\n");
	printf("Number of Students in Class: %d\n", numStudents);
	printf("Highest Score: %d\n", arrScores[0]);
	printf("Average Score: %.2f\n", avgScore);
	printf("Lowest Score: %d\n", arrScores[numStudents-1]);
	printf("--------------------------------------\n");
	
	return 0;
}
 