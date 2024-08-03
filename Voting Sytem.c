#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "|       (Ram Bahadur   )     |       1      | "
#define CANDIDATE2 "|       (Shyam Bahadur)      |       2      | "
#define CANDIDATE3 "|       (Hari Bahadur)       |       3      | "
#define CANDIDATE4 "|       (Madan Bahadur)      |       4      | "


int a=0, b=0, c=0, d=0, e=0;
struct vote{
	int age,num,n;
char fname[50],lname[50],g[40];
int choice;
 int date,month,year;
}s;

void castVote(){
FILE *fp=NULL;
fp=fopen("advance.txt","a+");
if(fp==NULL){
	printf("error");
	exit(1);
}

    		printf("\n\nPLEASE ENTER YOUR FIRST NAME:");
    		scanf("%s",&s.fname);
    			printf("\n\nPLEASE ENTER YOUR LAST NAME:");
    		scanf("%s",&s.lname);
    	
printf("\nENTER AGE:");
	
	scanf("%d",&s.age);
	
	if(s.age>=18){
		printf("\n\t\tYOU ARE ELIGIBLE VOTER");}
    else if(s.age<18){
    	printf("\n\t\tYOU ARE NOT ELIGIBLE VOTER");}
    	if(s.age>=18){
    	GENDER:
    	  printf("\n\nPLEASE ENTER YOUR GENDER:\t");
    
         scanf("%s",&s.g);
           if((strcmpi(s.g,"male")==0)||(strcmpi(s.g,"female")==0)||(strcmpi(s.g,"f")==0)||(strcmpi(s.g,"m")==0)) 
            {
                      printf("\n\t\t\tVALID");                                                                                    
            } 
           else
           {
             printf("\n\nEnter male or female only\n\n");
             goto GENDER;
             
           }
    
           printf("\n\nENTER YOUR DATE OF BIRTH");
           printf("\n\tDay:\t");
           scanf("%d",&s.date);
           printf("\n\tMonth:\t");
           scanf("%d",&s.month);
           printf("\n\tYear:\t");
           scanf("%d",&s.year);
    	if(s.age>=18){
    	printf("\n\nENTER YOUR VOTER NUMBER:");
    	scanf("%d",&s.num);
    
    	
		
printf("\n\n ********** Please choose your Candidate **********\n\n");
printf("-------------------------------------------------------------------------");
printf("\n|         CANDIDATES         |   SYMBOL     |");
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s", CANDIDATE1);
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s", CANDIDATE2);
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s", CANDIDATE3);
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s", CANDIDATE4);
printf("\n|-----------------------------------------------------------------------|");
printf("\n%s","|          {None}            |       5      | " );
printf("\n|-----------------------------------------------------------------------|");

printf("\n\n Input your choice:");
scanf("%d",&s.n);


 switch(s.n){
	case 1:
		printf("\nYOU CHOOSE 1");
		break;
		case 2:
			printf("\nYOU CHOOSE 2");
		break;
			case 3:
			printf("\nYOU CHOOSE 3");
    	break;
			case 4:
			printf("\nYOU CHOOSE 4");
		break;
			default:
			printf("\nWRONG INPUT");
		break;
			}

switch(s.n)
{
    case 1: a++; 
	break;
    case 2: b++; 
	break;
    case 3: c++; 
	break;
    case 4: d++; 
	break;
    case 5: e++; 
	break;
    default: printf("\n !!!!!!!!ERROR::WRONG CHOICE !!!!!!!! ");
	}
   
	     printf("\n\t\t\t\t\t\tFIRST NAME = %s",s.fname);
	     printf("\n\t\t\t\t\t\tLAST NAME = %s",s.lname);
	     printf("\n\t\t\t\t\t\tAGE = %d",s.age);
	     printf("\n\t\t\t\t\t\tDATE OF BIRTH=%d/%d/%d",s.date,s.month,s.year);
	     printf("\n\t\t\t\t\t\tNUMBER = %d",s.num);
	     
 
         
printf("\n\n\t\t\t\t****YOUR VOTE HAS BEEN RECORDED****");
	printf("\n\t\t\t\t\t****THANK YOU****");

printf("\n\n\t\t\t\t\tPRESS ANY BUTTON TO CONTINUE");
}
}
fprintf(fp,"\n\n%s \n%s \n%d \n%d \n%d \n%s \n%d \n%d \n%d",s.fname,s.lname,s.age,s.num,s.n,s.g,s.date,s.month,s.year);
	fclose(fp);

getch();
system("cls");

}
void votesCount(){
	
  printf("\n************************************************************************************************************************");
  printf("\n****************************                      VOTING                              **********************************");
  printf("\n****************************                     STASTICS                             **********************************");
  printf("\n************************************************************************************************************************");
  printf("\n\n |         CANDIDATES         | SYMBOL       | Votes ");

printf("\n %s - %d ", CANDIDATE1, a);
printf("\n %s - %d ", CANDIDATE2, b);
printf("\n %s - %d ", CANDIDATE3, c);
printf("\n %s - %d ", CANDIDATE4, d);
printf("\n %s - %d ", "WRONG VOTES",e);
printf("\n\n\t\t\t\t\tPRESS ANY BUTTON TO CONTINUE");
getch();
system("cls");
}

void winningCandidate(){
  printf("\n***********************************************************************************************************************");
  printf("\n****************************                      LEADING                              ********************************");
  printf("\n****************************                     CANDIDATE                             ********************************");
  printf("\n***********************************************************************************************************************");
    if(a>b && a>c && a >d)
    printf("\n\t\t%s",CANDIDATE1);
    else if (b>c && b>d && b >a)
    printf("\n\t\t%s",CANDIDATE2);
    else if(c>d && c>b && c >a)
    printf("\n\t\t%s",CANDIDATE3);
    else if(d>a && d>b && d >c)
    printf("\n\t\t%s",CANDIDATE4);
    else
    printf("\n\t\t\t\t\t----- NO Winner----");
    printf("\n\n\n\t\t\t\t\tPRESS ANY BUTTON TO CONTINUE");
    getch();
    system("cls");

}
    
int main()
{
	FILE *fp;

  system("cls");
  
  void listofvoters(){
	fp=fopen("advance.txt","r");
	while(fscanf(fp,"%s%s%d%d%d%s%d%d%d",s.fname,s.lname,&s.age,&s.num,&s.n,s.g,&s.date,&s.month,&s.year)!=EOF){
	printf("\nFIRST NAME=%s\n",s.fname);
		printf("LAST NAME=%s\n",s.lname);
	printf("AGE=%d\n",s.age);
	printf("VOTING NUMBER=%d\n",s.num);
		printf("CHOICE=%d\n",s.n);
		printf("GENDER=%s\n",s.g);
	printf("DATE OF BIRTH=%d/%d/%d\n",s.date,s.month,s.year);
}
 fclose(fp);
 printf("\n\n\n\t\t\t\t\tPRESS ANY BUTTON TO CONTINUE");
 getch();
 system("cls");


}
do{

        printf("\n***********************************************************************************************************************");
        printf("\n****************                                      WELCOME                                          ****************");
        printf("\n****************                                        TO                                             ****************");
        printf("\n****************                                 ELECTION MANAGEMENT                                   ****************");
        printf("\n****************                                      SYSTEM                                           ****************");
        printf("\n***********************************************************************************************************************");

printf("\n\n 1. CAST THE VOTE");
printf("\n 2. FIND VOTES COUNT");
printf("\n 3. FIND WINNING CANDIDATE");
printf("\n 4. LIST OF VOTERS");
printf("\n 5. EXIT");

printf("\n\n PLEASE ENTER YOUR CHOICE : ");
scanf("%d", &s.choice);
getch();
system("cls");

switch(s.choice)
{
case 1: castVote();
break;
case 2: votesCount();
break;
case 3: winningCandidate();
break;
case 4: listofvoters();
break;
default: printf("\n\t\t\t\t\t!!!!!!!!!!ERROR:INVALID CHOICE");

 printf("\n\n\t\t\t\t\tPRESS ANY BUTTON TO CONTINUE");
 getch();
 system("cls");

}
}while(s.choice!=0);

return 0;
}

