#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void welcome();
void pinverify(int pin);
void mainmenu();
void checkbalance(int balance);
int moneydeposit(int balance);
int moneywithdrawl(int balance);
void exitmenu();
void wrongnumber();

int main()
{
	int pin;
	int balance = 100000;
	int number;
	int option;
	welcome();
	pinverify(pin);
	mainmenu();


	printf("your number:");
	scanf("%d",&number);

	      switch(number)
	      {
	      	case 1:
	      		checkbalance(balance);
	      		break;
	      	case 2:
	      		balance = moneydeposit(balance);
	      		break;
	      	case 3:
	      		balance = moneywithdrawl(balance);
	      		break;
	      	case 4:
	      		exitmenu();
	      		break;
	      	default:
	      		wrongnumber();
	      		break;
		  }

	printf("would like to do another transcation:\n");
	printf("press \n 1.yes \n 2.no\n");
	printf("option:");

	scanf("%d",&option);

	if(option == 1)
	{
		main();
	}
	else
	{
		exitmenu();
	}

}

//functions
void welcome()
{
	printf("\t\t$$$$$$money kicks$$$$$$\t\t\n\n");
	printf("\t\twelcome to nsa atm\t\t\n\n");

}

void pinverify(int pin)
{
	while(pin != 1234)
	{
		printf("enter your atm pin:");
		scanf("%d",&pin);
		if(pin != 1234)
		{
			printf("wrong pin\n\n");
		}
	}
}


void mainmenu()
{
	printf("\n\n");
	printf("select your option\n:");
	printf("1.check balance\t\t");
	printf("2.money deposit\n\n");
	printf("3.money withdrawl\t\t");
	printf("4.exit\n\n");
}

void checkbalance(int balance)
{
	printf("\n\n  your available balance is :rs%d\n\n",balance);
}

int moneydeposit(int balance)
{
	int deposit;
	printf("\n\nyour available balance is:%d",balance);
	printf("\n\nenter amount to deposit:");
	scanf("%d",&deposit);

	balance = balance+deposit;
	printf("your new balance is:%d\n\n",balance);
	return balance;
}

int moneywithdrawl(int balance)
{
	int withdrawl;
	printf("enter amount to withdrawl:");
	scanf("%d",&withdrawl);

	if(balance>=withdrawl)
	{
		balance = balance - withdrawl;
		printf("\n\nsuccessful");
		printf("\n\navailable balance in your account is:rs%d\n",balance);
	}
	else
	{
		printf("\n\nyou dont have money\n\n");
	}
	return balance;

}


void exitmenu()
{
	printf("\t\t\ttake your receipt\n\n");
	printf("\t\tthank you for choosing our atm\n");
	printf("\nyou only nsa bank for fast and secure service!!!\n");
}

void wrongnumber()
{
	printf("you have selected wrong numbebr!!!");
}
