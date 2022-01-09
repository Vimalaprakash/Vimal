#include <stdio.h>
void display_options();
void create_new_account();
void deposit();
void withdraw();
void account_balance();
void edit_account();
void account_info();
void yellow();
void red();
void blue();
void green();
void purple();
void cayan();
void reset();
struct Bank{
	char bank_name[20];
	char branch_name[20];
	char ac_holder_name[20];
	char ac_holder_add[50];
	long int ac_holder_phone_number;
}acc;
int balance=500;
long int ac_no=9842868109;
void display_options(){
    red();
	printf("\n1.Create New Account");
	green();
	printf("\n2.Deposit");
	yellow();
	printf("\n3.Withdraw");
	blue();
	printf("\n4.Account Balance");
	purple();
	printf("\n5.Edit Account");
	cayan();
	printf("\n6.Account info");
}
void red(){
    printf("\033[0;31m");
}
void green(){
    printf("\033[0;32m");
}
void yellow(){
    printf("\033[0;33m");
}
void blue(){
    printf("\033[0;34m");
}
void purple(){
    printf("\033[0;35m");
}
void cayan(){
    printf("\033[0;36m");
}
void reset () {
  printf("\033[0m");
}
int main(){
	int op;
	char ch;
	yellow();
	printf("**********Welcome to Bank**********");
	//display_options();
	//printf("\nEnter the Option:");
	//scanf("%d",&op);
	//op=opc;
	do{
		
	display_options();
	red();
	printf("\nEnter the Option:");
	scanf("%d",&op);
		
	switch(op){
		case 1:
			create_new_account();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			account_balance();
			break;
		case 5:
			edit_account();
			break;
		case 6:
			account_info();
			break;
		default:
		    green();
			printf("\nEntered Option is Worng Enter the VALID option");
	  }blue();
	  printf ("\nDo you want to continue YES/NO:"); 
	  scanf(" %c", &ch);
    } while(ch == 'y');
	return 0;
}
void create_new_account(){
    red();
	printf("\nEnter the Bank Details:\n");
    yellow();
    printf("\nEnter the Bank Name:");
    scanf("%s",acc.bank_name);
    green();
    printf("\nEnter the Branch Name: ");
    scanf("%s",acc.branch_name);
    blue();
    printf("\nEnter the Account Holder Name:");
    scanf("%s",acc.ac_holder_name);
    cayan();
    printf("\nEnter the Account Holder Address:");
    scanf("%s",acc.ac_holder_add);
    purple();
    printf("\nEnter the Account Holder Phone Number:");
    scanf("%ld",&acc.ac_holder_phone_number);
	red();
	printf("\nPls Check the Details is Correct");
	printf("\nBank Name is: %s",acc.bank_name);
	printf("\nBranch Name is: %s",acc.branch_name);
	printf("\nAccount Number is: %ld",ac_no);
	printf("\nAccount Holder Name is: %s",acc.ac_holder_name);
	printf("\nAccount Holder Address is: %s",acc.ac_holder_add);
	printf("\nAccount Holder Phone Number is: %ld",acc.ac_holder_phone_number);
}
void deposit(){
	int amount;
	long int acc_no;
	yellow();
	printf("Enter the Account Number:");
	scanf("%ld",&acc_no);
	if (ac_no==acc_no){
		blue();
		printf("\nEnter the Amount:");
		scanf("%d",&amount);
		balance+=amount;
		green();
		printf("\nYour Balance in Account: %d",balance);
	}
	else {
		red();
		printf("\nYour Account Number is Worng");
	}
}
void withdraw(){
	long int acc_no;
	int amount;
    red();
	printf("Enter the Account Number:");
	scanf("%ld",&acc_no);
	if (ac_no==acc_no){
		yellow();
		printf("\nEnter the Amount:");
		scanf("%d",&amount);
		balance-=amount;
		blue();
		printf("\nYour Balance in Account: %d",balance);
	}
	else {
	    red();
		printf("\nYour Account Number is Worng");
	}
}
void account_balance(){
	long int acc_no;
	red();
	printf("\nEnter the Account Number:");
	scanf("%ld",&acc_no);
	if (ac_no==acc_no){
	yellow();
	printf("\nBalance Amount in Account: %d",balance);
	}
}
void edit_account(){
	int op;
	red();
	printf("\n1.Holder Name");
	green();
	printf("\n2.Holder Address");
	yellow();
	printf("\n3.Holder Phone Number");
	long int acc_no;
	blue();
	printf("\nEnter the Account Number:");
	scanf("%ld",&acc_no);
	if (ac_no==acc_no){
	purple();
	printf("\nEnter the Option:");
	scanf("%d",&op);
	switch(op){
		case 1:
		    red();
			printf("\nEnter the New Holder Name:");
			scanf("%s",acc.ac_holder_name);
			printf("Your New Name is: %s",acc.ac_holder_name);
			break;
		case 2:
		    green();
			printf("\nEnter the New Address:");
			scanf("%s",acc.ac_holder_add);
			printf("\nYour New Address is: %s",acc.ac_holder_add);
			break;
		case 3:
		    yellow();
			printf("\nEnter the New Holder Phone Number:");
			scanf("%ld",&acc.ac_holder_phone_number);
			printf("\nYour New Phone Number is: %ld",acc.ac_holder_phone_number);
			break;
		default:
			printf("\nYour Option is INVALID");
		}
	}
		
	else {
		printf("\nYour Account Number is Invalid");
	}
}
void account_info(){
	long int acc_no;
	yellow();
	printf("\nEnter the Account Number:");
	scanf("%ld",&acc_no);
	if (ac_no==acc_no){
	red();
	printf("\nYour Bank Name is: %s",acc.bank_name);
	printf("\nYour Branch Name is: %s",acc.branch_name);
	printf("\nYour Account Number is: %ld",ac_no);
	printf("\nYour Name is: %s",acc.ac_holder_name);
	printf("\nYour Address is: %s",acc.ac_holder_add);
	printf("\nYour Phone Number is: %ld",acc.ac_holder_phone_number);
	}
	reset();
}
