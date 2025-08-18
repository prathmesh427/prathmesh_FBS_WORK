//Print table for given number. 
// Input: n = 5  Output 5 10 15 20 25 30 35 40 45 50
#include <stdio.h>
void table(int);
void main()
{
	int no= 1;
	table(no);
}
void table(int no)
{
	while(no<=10)
	{
		printf("%d \n",no*5);
		no++;
	}

}
