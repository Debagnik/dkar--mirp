#include <stdio.h>
#include <conio.h>
int main(){
	int a[3][3],A[3][3],t[3][3],i,j,s,e,mat[3][3];
	printf("\t\t\tmatrix inverse\n\n\n");
	printf("Enter the elements of the matrix row-column wise\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element a%d-%d:  ",i+1,j+1);
			scanf("%d",a[i][j]);
		}
	}
	A[0][0]=a[1][1]*a[2][2]-a[2][1]*a[1][2];
	A[0][1]=a[2][0]*a[1][2]-a[1][0]*a[2][2];
	A[0][2]=a[1][0]*a[2][1]-a[2][0]*a[1][1];
	A[1][0]=a[2][1]*a[0][2]-a[0][1]*a[2][2];
	A[1][1]=a[0][0]*a[2][2]-a[2][0]*a[0][2];
	A[1][2]=a[2][0]*a[0][1]-a[0][0]*a[2][1];
	A[2][0]=a[0][1]*a[1][2]-a[1][1]*a[0][2];
	A[2][1]=a[1][0]*a[0][2]-a[0][0]*a[1][2];
	A[2][2]=a[0][0]*a[1][1]-a[1][0]*a[0][1];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			t[j][i]=A[i][j];
		}	
	}	
	s=a[0][0]*(a[1][1]*a[2][2]-a[2][1]*a[1][2])-a[0][1]*(a[1][0]*a[2][2]-a[2][0]*a[1][2])+a[0][2]*(a[1][0]*a[2][1]-a[2][0]-a[1][1]);
	e=1/s;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat[i][j]=e*t[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat[i][j]);
			if(j==2)
			printf("\n\n\n");
		}
	}
				
	getch();
	return(0);
}
