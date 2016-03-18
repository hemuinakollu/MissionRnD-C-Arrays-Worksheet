/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>

struct student {
	char *name;
	int score;
};

struct student ** topKStudents(struct student *students, int len, int K) 
{
	struct student s;
	struct student **s1=(struct student**)malloc(sizeof(struct student));
	
	int i = 0, max = 0, j = 0, c = 0, k = 0;
	if (k > len)
		return s1;
	else if (students != NULL && K > 0 && len > 0)
	{
		for (i = 0; i < len - 1; i++)

		{
			c = 0;
			max = students[i].score;
			for (j = i + 1; j < len; j++)
			{
				if (students[j].score > max){
					max = students[j].score;
					k = j;
					c = -1;
				}

			}
			if (c == -1){
				s = students[k];
				students[k] = students[i];
				students[i] = s;
			}
		}
		for (i = 0; i < k; i++)
		{
			*s1[k] = students[k];
		}
		return s1;
	}
	 
	else{
		return NULL;
	}
}