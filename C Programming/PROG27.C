/*PROG27 - Program to create matchstick game*/
/*Authors: Asmit De, Shinjini Basu    Date: 22.08.2008*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int p,c,tp=0;
    clrscr();

    while(tp!=20)
    {
	printf("\n\nTotal matchsticks left: %d",21-tp);
	printf("\nPick up 1,2,3 or 4 matches "); scanf("%d",&p);
	if(p>4 || p<1) {printf("\nYou can only pick 1,2,3,4 matches"); continue;}

	tp=tp+p; printf("\nTotal matchsticks left: %d",21-tp);
	c=5-p; printf("\nComputer picks: %d",c);
	tp=tp+c;
    }
    printf("\n\nTotal matchsticks left: %d",21-tp);
    printf("\nYou lost the game!!!\nComputer wins!!!");

    puts("\n\nPress any key to continue....."); getch();
}
/*Output:
Total matchsticks left: 21
Pick up 1,2,3 or 4 matches 4                                                    
                                                                                
Total matchsticks left: 17                                                      
Computer picks: 1                                                               
                                                                                
Total matchsticks left: 16                                                      
Pick up 1,2,3 or 4 matches 2                                                    
                                                                                
Total matchsticks left: 14                                                      
Computer picks: 3                                                               
                                                                                
Total matchsticks left: 11                                                      
Pick up 1,2,3 or 4 matches 10                                                   
                                                                                
You can only pick 1,2,3,4 matches                                               
                                                                                
Total matchsticks left: 11                                                      
Pick up 1,2,3 or 4 matches 3                                                    
                                                                                
Total matchsticks left: 8                                                       
Computer picks: 2                                                               
                                                                                
Total matchsticks left: 6                                                       
Pick up 1,2,3 or 4 matches 1                                                    
                                                                                
Total matchsticks left: 5
Computer picks: 4

Total matchsticks left: 1
You lost the game!!!
Computer wins!!!

Press any key to continue.....
*/