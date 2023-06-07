#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[10],last_name[10],fathers_name[10],mothers_name[10];
	char user_id[20],user_id2[20],password[12],pass[12];
	int ac,value,value1;
	double account,phone_number,opening_balance;
	int co;
	double a,b,c,d;
	printf("\n\n\n\t\t\t\t\t**************************************\n");
	printf("\n\t\t\t\t\t\t BANK OF BARODA\n \n\n\n ");
	printf("\t\t\t\t\t***************************************\n\n");
	printf("Choose Your Account \n\n\n\n");
	printf("1. Current Account \t\t\t 2. Saving Account \n\n");
	scanf("%d",&ac);
	printf("Enter Your First Name :-\n");
	scanf("%s",&name);
	printf("Enter Your Last Name :-\n");
	scanf("%s",&last_name);
	printf("Enter Your Fathers Name :-\n");
	scanf("%s",&fathers_name);
	printf("Enter Your Mothers Name :-\n");
	scanf("%s",&mothers_name);
	printf("Enter Your Phone Number :- \n\n");
	scanf("%lf",&phone_number);
	printf("Enter Your Account Number :-\n");
	scanf("%lf",&account);
	printf("Enter Your User ID :- \n");
	scanf("%s",&user_id);
	printf("Enter Your Password(character) :-\n");
	scanf("%s",&password);
	printf("Enter Your Opening Balance :-\n");
	scanf("%lf",&opening_balance);
	printf("\t\t\tThankyou for creating Account\n\n\n");
	system("cls");
	b:
	printf("If You Want to Continue.... \n\n 1. continue \n 2. Exit \n");
	printf("Enter Your UserId :-\n");
	scanf("%s",&user_id2);
	value=strcmp(user_id,user_id2);
	if(value==0)
	{
		printf("Userid is match\n");
	}
	else
	{
		printf("Userid is Not Match\n ");
		printf("Re-Enter Your User Id\n");
		goto b;
	}
	printf("Enter Your Password :-\n");
	scanf("%s",&pass);
	value1=strcmp(password,pass);
	if(value1==0)
	{
		printf("Password is Match\n");
	}
	else
	{
		printf("Password is Not Match\n");
		printf("Re-Enter Your Password\n");
		goto b;
	}
	a:
	printf(" If you want to continue....... \n\n");
	printf("1.To Assign Initial Value \n");
	printf("2.Deposit Amount \n");
	printf("3.Withdraw Amount\n");
	printf("4.Display All Details\n");
	printf("5.Exit \n");
	printf("Choose a Option  ");
	scanf("%d",&co);
	if(co==1)
	{
		system("cls");
		printf("Your Name :-%s %s\n ",name,last_name);
		printf("Your Fathers Name :- %s %s \n",fathers_name,last_name);
		printf("Your Mothers Name :-%s %s \n",mothers_name,last_name);
		printf("Your Phone Number is :- %lf \n",phone_number);
		printf("Your Account Number is :-%lf\n",account);
		printf("Your Password is :-%s \n",password);
		printf("Your Opening Balance is :- %lf \n",opening_balance);
		goto a;
	}
	else if(co==2)
	{
		system("cls");
		printf("Your Current Amount is %lf \n",opening_balance);
		printf("Enter Your Deposit Amount :-\n");
		scanf("%lf",&a);
		c= opening_balance + a;
		printf("After Deposite Amount :-%lf \n",c);
		goto a;
	}
	else if(co==3)
	{
		system("cls");
		printf("Your Current Amount is %lf\n",opening_balance);
		printf("Enter Your Withdraw Amount :- \n");
		scanf("%lf",&b);
		d= opening_balance-b;
		printf("After Withdraw Amount :- %lf \n",d);
		goto a;
	}
	else if(co==4)
	{
		system("cls");
		printf("Your Name :- %s %s\n ",name,last_name);
		printf("Your Fathers Name :-%s %s \n",fathers_name,last_name);
		printf("Your Mothers Name :- %s %s \n",mothers_name,last_name);
		printf("Your Phone Number is :- %lf \n",phone_number);
		printf("Your Account Number is :- %lf\n",account);
		printf("Your Password is :- %s \n",password);
		printf("Your Opening Balance is :- %lf \n",opening_balance);
	goto a;
	}
	else
	{
		printf("exit");
	}
		
}
