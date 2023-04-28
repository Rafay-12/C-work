#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
int random(int n){
    srand(time(NULL));
    return rand()%n;
}
int greater(char a,char b){
    if (a == b)
    {
        return -1;
    }
    else if (a == 'r' && b == 's')
    {
        return 1;
    }
    else if (a == 's' && b == 'r')
    {
        return 0;
    }
    else if (a == 's' && b == 'p')
    {
        return 1;
    }
    else if (a == 'p' && b == 's')
    {
        return 0;
    }
    else if (a == 'p' && b == 'r')
    {
        return 1;
    }
    else if (a == 'r' && b == 'p')
    {
        return 0;
    }


}

int main()
{
   int user_choice;
   int com_choice = random(3)+1;
   char player,computer;
   int com_score = 0;
   int user_score = 0;
   char name[20];
   char dict[] = {'r','s','p'};
   printf("Wellcome to rock,paper scissor\n\nEnter your name:\n");
   gets(name);
   for (int i = 0; i < 3; i++)
   {
       printf("\nEnter '1' for 'rock'\n'2' for 'scissor'\n'3' for paper\n");
       scanf("%d",&user_choice);
       player = dict[user_choice - 1];
       printf("you choose %c\n",player);
       printf("Computer's turn\n");
       computer = dict[com_choice-1];
       printf("computer choose %c\n",computer);
       if (greater(player,computer) == 1)
       {
           printf("\nyou won %s\ncomputer loss\n",name);
           user_score++;
           printf("\nyour score is %d\ncomputer score is %d\n",user_score,com_score);
       }
       else if (greater(player,computer) == 0)
       {
           printf("\nyou loss %s\ncomputer wins\n",name);
           com_score++;
           printf("\nyour score is %d\ncomputer score is %d\n",user_score,com_score);
       }
       else if (greater(player,computer) == -1)
       {
           printf("Its tie %s\n",name);
           printf("\nyour score is %d\ncomputer score is %d\n",user_score,com_score);
       }
       else{
           printf("you entered wrong number\n");
       }
   }
   if(com_score>user_score){
       printf("\nWell played but you loss\n");
   }
   else if(user_score>com_score){
       printf("\ncongragulations you won\n");
   }
   else if(user_score==com_score){
       printf("\nthe game is tie\n");
   }

   
}
