#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct play
{
	char name[20];
	int score;
}p;
void start();
void help();

int main()
	{
		int chc;
		printf("Enter 1 to start quiz\n");
		printf("Enter 2 to see game help\n");
		printf("Enter 0 to exit quiz\n");
		scanf("%d",&chc);

		switch(chc)
		{
			case 1:
			start();
			break;

			case 2:
			help();
			break;

			default:
			exit(1);
		}
		getch();
		
		return 0;
	}
void help()
{
	int ch;
	printf("\n\n ******************** GAME HELP ********************");
	printf("\n ---------------------------------------------------");
	printf("\n ............. C program Quiz Game ..............\n");
	printf("\n >> There will be a total of 5 questions");
	printf("\n >> You will be given 4 options for each question, of which only one is correct");
	printf("\n >> You have to enter the option number to indicate your answer");
	printf("\n >> Each question will carry 5 points");
	printf("\n >> You will be asked questions continuously");
	printf("\n >> There is no negative marking for wrong answer");

	printf("\n\n *************** BEST OF LUCK ***************\n\n");

	printf("\n Do you want to continue playing ?");
	printf("\nEnter 1 if you want to play or 0 if you want to exit the game : ");
	scanf("%d",&ch);

	if(ch==1)
	{
		start();
	}
	else
	{
		exit(1);
	}
}
void start()
{
	int ans,count=0,f;
	printf("\n Please enter your name: ");
	scanf("%s",p.name);

	printf("********** Welcome \" %s \" to C Quiz Game **********\n\n",p.name);


	printf("Q(1). Grand Central Terminal, Park Avenue, New York is the world's\n 1.Largest railway station \t2.Highest railway station\n 3.Longest railway station \t4.None of the above\n\n");

	printf("Your answer: ");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("Correct! +5 points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer! Correct answer is 1.Largest railway station\n\n");
	}

	printf("Q(2). Entomology is the science that studies\n 1.Behaviour of human beings\t2.Insects\n 3.The origin and history of scientific terms\t4.The formation of rocks\n\n");

	printf("Your answer: ");
	scanf("%d",&ans);

	if(ans==2)
	{
		printf("Correct! +5 points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer! Correct answer is 2.Africa\n\n");
	}

	printf("Q(3). Eritrea, which became the 182nd member of the UN in 1993, is in the continent of\n 1.Asia\t\t2.Africa\n 3.Europe\t4.Australia\n\n");

	printf("Your answer: ");
	scanf("%d",&ans);

	if(ans==2)
	{
		printf("Correct! +5 points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer! Correct answer is 2.Africa\n\n");
	}

	printf("Q(4). Garampani sanctuary is located at\n 1.Junagarh, Gujarat\t2.Diphu, Assam\n 3.Kohima, Nagaland\t4.Gangtok, Sikkim\n\n");
	printf("Your answer: ");
	scanf("%d",&ans);

	if(ans==2)
	{
		printf("Correct! +5 points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer! Correct answer is 2.Diphu, Assam\n\n");
	}

	printf("Q(5). For which of the following disciplines is Nobel Prize awarded?\n 1.Physics and Chemistry\t2.Physiology\n 3.Literature, Peace and Economics\t4.All of the above\n\n");
	printf("Your answer: ");
	scanf("%d",&ans);

	if(ans==4)
	{
		printf("Correct answer! +5 points\n\n");
		++count;
	}
	else
	{
		printf("Wrong answer! Correct answer is 4.All of the above\n\n");
	}

	// Counting the number of correct answers and designating the respective star rating
	if(count>0)
	{
		printf("Thanks for playing!!! \nYour Score: %d points \nYour Star rating: ",count*5);
		p.score=count*5;

		if(p.score==25)
		{
			printf("*****\n");
		}
		else if(p.score==20)
		{
			printf("****\n");
		}
		else if(p.score==15)
		{
			printf("***\n");
		}
		else if(p.score==10)
		{
			printf("**\n");
		}
		else if(p.score==5)
		{
			printf("*\n");
		}
	}
	else
	{
		printf("You could not score even a single correct answer\n");
		printf("Better Luck Next Time!\n");
	}

	printf("Enter 1 if you want to play once more or 0 if you want to exit the game: ");
	scanf("%d",&f);
	if(f==1)
		main();
	else
		exit(1);
}



