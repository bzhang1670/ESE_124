/*************
Brian Zhang 109310183
ESE 124
HW11
 *************/

//Program A

/*
#include<stdio.h>

int main(){
	float sum = 0, result;
	int i,j,M,N;
    
	printf("Please enter the number of quizzes: ");
	scanf("%d",&M);
	printf("Please enter the number of students: ");
	scanf("%d",&N);
	printf("\n");
	float x[M][N];
	float a[M];
	float b[N];

	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("Enter the grade in quiz # %d for student # %d: ",i,j);
			scanf("%f",&x[i][j]);
		}
	}
    
	printf("\n\t");
	for(j=0;j<N;j++){
		printf("\t\tstudent # %d",j);
	}
	printf("\n");
	for(i=0;i<M;i++){
		printf("quiz # %d",i);
		for(j=0;j<N;j++){
			printf("\t\t%.2f\t",x[i][j]);
		}
		printf("\n");
	}
    
	printf("\nAverage grades by quiz:  \n");
	
	for(i=0;i<M;i++){
		a[i] = 0;
		for(j=0;j<N;j++){
			a[i] += x[i][j];
		}
		a[i] /= N;
	}
    
	for(i=0;i<M;i++){
		printf("average grade in quiz # %d: %.2f\n",i,a[i]);
	}
    
	
	printf("\nAverage grades by student:\n");
    
	for(j=0;j<N;j++){
		b[j] = 0;
		for(i=0;i<M;i++){
			b[j] += x[i][j];
		}
		b[j] /= M;
	}
	
	for(j=0;j<N;j++){
		printf("average grade of student # %d: %.2f\n",j,b[j]);
	}
    
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			sum += x[i][j];
		}
	}
	result = sum/(M*N);
	printf("\nThe average grade of all students over all quizzes is %.2f \n", result);
    
	getchar();
	return 0;
}

*/
//Program B
#include<stdio.h>
#define size 100

void inputGrades(float arr[size][size], int numstudents, int numquizzes);
void avgGradeByQuiz(float arr[size][size], float a[size], int numstudents, int numquizzes);
void avgGradeByStudent(float arr[size][size], float b[size], int numstudents, int numquizzes);

int main(){
	float sum = 0, result;
	int M,N,i,j;
    
	printf("Please enter the number of quizzes: ");
	scanf("%d",&M);
	printf("Please enter the number of students: ");
	scanf("%d",&N);
	printf("\n");
	float x[M][N];
	float a[M];
	float b[N];
    
	inputGrades(x, N, M);

	printf("\nAverage grades by quiz:  \n");
	
	avgGradeByQuiz(x, a, N, M);

	printf("\nAverage grades by student: \n");

	avgGradeByStudent(x, b, N, M);
    
	getchar();
	return 0;
}

//Prototype functions
void inputGrades(float arr[size][size], int numstudents, int numquizzes) {
  int i, j;
	for(i=0;i<numquizzes;i++){
		for(j=0;j<numstudents;j++){
			printf("Enter the grade in quiz # %d for student # %d: ",i,j);
			scanf("%f",&arr[i][j]);
		}
	}
    
	printf("\n\t");
	for(j=0;j<numstudents;j++){
		printf("\t\tstudent # %d",j);
	}
	printf("\n");
	for(i=0;i<numquizzes;i++){
		printf("quiz # %d",i);
		for(j=0;j<numstudents;j++){
			printf("\t\t%.2f\t",arr[i][j]);
		}
		printf("\n");
	}
  
}

void avgGradeByQuiz(float arr[size][size], float a[size], int numstudents, int numquizzes) {
  int i, j;
  for(i=0;i<numquizzes;i++){
    a[i] = 0;
    for(j=0;j<numstudents;j++){
      a[i] += arr[i][j];
    }
    a[i] /= numstudents;
  }
  
  for(i=0;i<numquizzes;i++){
    printf("average grade in quiz # %d: %.2f\n", i, a[i]);
  }
}

void avgGradeByStudent(float arr[size][size], float b[size], int numstudents, int numquizzes) {
  int i, j;
  float result, sum = 0;
  for(j=0;j<numstudents;j++){
    b[j] = 0;
    for(i=0;i<numquizzes;i++){
      b[j] += arr[i][j];
    }
    b[j] /= numquizzes;
  }
  
  for(j=0;j<numstudents;j++){
    printf("average grade of student # %d: %.2f\n",j,b[j]);
  }
  
  for(i=0;i<numquizzes;i++){
    for(j=0;j<numstudents;j++){
      sum += arr[i][j];
    }
  }
  result = sum/(numquizzes*numstudents);
  printf("\nThe average grade of all students over all quizzes is %.2f \n", result);
}
