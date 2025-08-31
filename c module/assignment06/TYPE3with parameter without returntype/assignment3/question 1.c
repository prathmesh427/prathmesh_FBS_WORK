//Print numbers from 1 to 10  Output: 1 2 3 4 5 6 7 8 9 10
#include <stdio.h>
 void printnumbers(int);
 void main()
 {
 	int no=1;
	 printnumbers(no);
 }
 void printnumbers(int no)
 {
    while(no<=10)
 	{
 	 printf("%d \n",no);
 	 no++;
    }
}
