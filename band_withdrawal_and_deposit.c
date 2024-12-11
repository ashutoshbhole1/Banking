#include <stdio.h>
#include <string.h>

typedef struct customer
{
    int acc_no;
    char name[20];
    int balance;
} customer;

// 1st PART

// void balace_below_100(customer customers[], int count)
// {
//     for (int i = 0; i < count; i++)
//     {
//         if (customers[i].balance < 100)
//         {
//             printf("%d %s %d", customers[i].acc_no, customers[i].name, customers[i].balance);
//             printf("\n");
//         }
//     }
// }

int main()
{
    customer customers[] = {
        {123, "Ashutosh Bhole", 6596},
        {124, "Kanha Bhai", 999999},
        {125, "Parihar", 45},
        {566, "Anshul", 98},
        {456, "Arjun", 10}
        };

    // 1st PART
    // balace_below_100(customers, 5);

    // 2nd part

    int code;
    printf("PRESS 0 for Withdrawal  \nPRESS 1 for Deposit \n");

    scanf("%d", &code);

    int account_no, amt;
    if (code == 1)
    {

        printf("Enter the Account No. : ");
        // scanf("%d", &account_no);
        scanf("%d", &account_no);

        for (int j = 0; j < 5; j++)
        {
            if (customers[j].acc_no == account_no)
            {
                printf("Hello %s \nHow much amount do you want to add : ", customers[j].name);
                scanf("%d", &amt);

                printf("Deposit Successfully Done. \nYour current balance is :  %d\n", amt + customers[j].balance);
                break;
            }
        }
    }

    else if (code == 0)
    {
        printf("Enter the Account No. : ");
        // scanf("%d", &account_no);
        scanf("%d", &account_no);

        for (int j = 0; j < 5; j++)
        {
            if (customers[j].acc_no == account_no)
            {
                printf("Hello %s \nHow much amount do you want to Withdraw : ", customers[j].name);
                scanf("%d", &amt);

                if (customers[j].balance - amt >= 100)
                {
                    printf("Withdra wal Successfully Done. \nYour current balance is :  %d\n", customers[j].balance - amt);
                    break;
                }else{
                    printf("The Balance is insufficient for the specified withdrawal.");
                }
            }
        }
    }

    return 0;
}
