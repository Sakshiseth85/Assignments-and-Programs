#include <iostream>
#include <string.h>
int j;
using namespace std;
class address
{
    int pin;
    string locality;
};

// account class
class account : public address
{
public:
    string name;
    int accno;
    string atype;

public:
    void getAccountDetails()
    {
        cout << "\nEnter Customer Name : ";
        cin >> name;
        cout << "Enter Account Number  : ";
        cin >> accno;
        cout << "Enter Account Type    : ";
        cin >> atype;
    }
    void displayDetails()
    {
        cout << "\n\nCustomer Name : " << name;
        cout << "\nAccount Number  : " << accno;
        cout << "\nAccount Type    : " << atype;
    }
};

// current account class
class current_account : public account
{
private:
    float balance;

public:
    void c_display()
    {
        cout << "\nBalance :" << balance;
    }
    void c_deposit()
    {
        float deposit;
        cout << "\nEnter amount to Deposit :  ";
        cin >> deposit;
        balance = balance + deposit;
    }
    void c_withdraw()
    {
        float withdraw;
        cout << "\n\nBalance : " << balance;
        cout << "\nEnter amount to be withdraw :";
        cin >> withdraw;
        if (balance > 1000)
        {
            balance = balance - withdraw;
            cout << "\nBalance Amount After Withdraw: " << balance;
        }
        else
        {
            cout << "\n Insufficient Balance";
        }
    }
};

// saving account class
class saving_account : public account
{
private:
    float sav_balance;

public:
    void s_display()
    {
        cout << "\nBalance :  " << sav_balance;
    }
    void s_deposit()
    {
        float deposit, interest;
        cout << "\nEnter amount to Deposit :  ";
        cin >> deposit;
        sav_balance = sav_balance + deposit;
        interest = (sav_balance * 2) / 100;
        sav_balance = sav_balance + interest;
    }
    void s_withdraw()
    {
        float withdraw;
        cout << "\nBalance :- " << sav_balance;
        cout << "\nEnter amount to be withdraw : ";
        cin >> withdraw;
        if (sav_balance > 500)
        {
            sav_balance = sav_balance - withdraw;
            cout << "\nBalance Amount After Withdraw: " << sav_balance;
        }
        else
        {
            cout << "\n Insufficient Balance";
        }
    }
};

// loan account class
class loan_account : public account
{
private:
    double interest_rate = 8;
    double total_amount, monthly_amount, total_interest;

public:
    double loan_amount, number_of_years;
    void total_loan()
    {
        cout << "Enter loan amount " << endl;
        cin >> loan_amount;
        cout << "Enter number of years" << endl;
        cin >> number_of_years;
        total_amount = (number_of_years * loan_amount) + (number_of_years * loan_amount * (interest_rate / 100.00));
        cout << "Final amount is " << total_amount << endl;
    }
    void monthly_amt()
    {
        monthly_amount = total_amount / (number_of_years * 12);
        cout << "Monthly EMI is " << monthly_amount << endl;
    }
    void total_intrest()
    {
        total_interest = total_amount - (number_of_years * loan_amount);
        cout << "Total interest is " << total_interest << endl;
    }

    void l_display()
    {
        cout << "\nYour principle ammount: " << loan_amount << endl;
        cout << "Banks Rate of interset per anum: " << interest_rate << endl;
        cout << "Number of years : " << number_of_years << endl;
    }
};

// admin class
class Admin : public account
{
public:
    char userid[10] = "admin";
    int pswd = 12345;
};

//*********************************************************** MAIN ***********************************************************************//
int main()
{
    current_account c1[100];
    saving_account s1[100];
    Admin a;
    loan_account l[100];
    char type;
    int i = 0;
start:
    cout << "\nEnter S for saving customer, C for current a/c customer. L for loan customer and A for admin: ";
    cin >> type;
    int choice;
    i++;
    if (type == 's' || type == 'S')
    {
        s1[i].getAccountDetails();
        int p;
        cout << "Please log in with your account! " << endl
             << "Enter your account number : " << endl;
        cin >> p;
        if (p == s1[i].accno)
        {
            cout << "You are succesfully logged In! " << endl;
            while (1)
            {
                cout << "\nChoose Your Choice" << endl;
                cout << "1)   Deposit" << endl;
                cout << "2)   Withdraw" << endl;
                cout << "3)   Display Balance" << endl;
                cout << "4)   Display with full Details" << endl;
                cout << "5)   logout" << endl;
                cout << "6)   Exit!!" << endl;
                cout << "Enter Your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    s1[i].s_deposit();
                    break;
                case 2:
                    s1[i].s_withdraw();
                    break;
                case 3:
                    s1[i].s_display();
                    break;
                case 4:
                    s1[i].displayDetails();
                    s1[i].s_display();
                    break;
                case 5:
                    goto start;
                    break;
                case 6:
                    goto end;
                default:
                    cout << "\n\nEntered choice is invalid,\"TRY AGAIN\"";
                }
            }
        }
        else
        {
            cout << "No such user exists! " << endl;
            goto start;
        }
    }
    else if (type == 'c' || type == 'C')
    {
        c1[i].getAccountDetails();
        int p;
        cout << "Please log in with your account! " << endl
             << "Enter your account number : " << endl;
        cin >> p;
        if (p == c1[i].accno)
        {
            cout << "You are succesfully logged In! " << endl;
            while (1)
            {
                cout << "\nChoose Your Choice" << endl;
                cout << "1)   Deposit" << endl;
                cout << "2)   Withdraw" << endl;
                cout << "3)   Display Balance" << endl;
                cout << "4)   Display with full Details" << endl;
                cout << "5)   logout" << endl;
                cout << "6)   Exit!!" << endl;
                cout << "Enter Your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    c1[i].c_deposit();
                    break;
                case 2:
                    c1[i].c_withdraw();
                    break;
                case 3:
                    c1[i].c_display();
                    break;
                case 4:
                    c1[i].displayDetails();
                    c1[i].c_display();
                    break;
                case 5:
                    goto start;
                    break;
                case 6:
                    goto end;
                default:
                    cout << "\n\nEntered choice is invalid,\"TRY AGAIN\"";
                }
            }
        }
        else
        {
            cout << "No such user exists! " << endl;
            goto start;
        }
    }
    else if (type == 'l' || type == 'L')
    {
        l[i].getAccountDetails();
        int p;
        cout << "Please log in with your account! " << endl
             << "Enter your account number : " << endl;
        cin >> p;
        if (p == l[i].accno)
        {
            cout << "You are succesfully logged In! " << endl;
            while (1)
            {
                cout << "\nChoose Your Choice" << endl;
                cout << "1)  Get your loan: " << endl;
                cout << "2)  Check your total interest: " << endl;
                cout << "3)  Check your monthly EMI: " << endl;
                cout << "4)   Display with full Details" << endl;
                cout << "5)   logout" << endl;
                cout << "6)   Exit!!" << endl;
                cout << "Enter Your choice: ";
                cin >> choice;
                switch (choice)
                {
                case 1:
                    l[i].total_loan();
                    break;
                case 2:
                    l[i].total_intrest();
                    break;
                case 3:
                    l[i].monthly_amt();
                    break;
                case 4:
                    l[i].displayDetails();
                    l[i].l_display();
                    break;
                case 5:
                    goto start;
                    break;
                case 6:
                    goto end;
                default:
                    cout << "\n\nEntered choice is invalid,\"TRY AGAIN\"";
                }
            }
        }
        else
        {
            cout << "No such user exists! " << endl;
            goto start;
        }
    }
    else if (type == 'a' || type == 'A')
    {
        char arr[20];
        int p;
        cout << "enter admin user id :\n";
        cin >> arr;
        cout << "enter admin password :\n";
        cin >> p;
        int num;
        if ((p == a.pswd) && !(strcmp(arr, a.userid)))
        {
            cout << "Logged in as Admin \n";
        start1:
            cout << "\nChoose Your Choice" << endl;
            cout << "1)   display details" << endl;
            cout << "2)   delete details " << endl;
            cout << "Enter Your choice: ";
            cin >> num;
            switch (num)
            {
            case 1:
            {
                for(int j=i;j<i;j++){
                   a.displayDetails();
                }
                break;
            }
            case 2:
            {
                cout << "Enter the account no.";
                int ac;
                cin >> ac;
                for (int j = 1; j <= i; j++)
                {
                    if (ac == s1[j].accno)
                    {
                        cout << "\nAccount found";
                        s1[j].accno = 0;
                        s1[j].atype = '0';
                        cout << "\n updated  details of the remaining accounts ";
                        for (int j = 1; j < i; j++)
                        {
                            cout << "\nAccount Number  : " << s1[j].accno;
                            cout << "\nAccount Type    : " << s1[j].atype;
                        }
                    }
                    goto start1;
                }
                break;
            }
            }
        }
    }
    else
    {
        cout << "\nInvalid Account Selection";
    }
end:
    cout << "\nThank You for Banking with us..";
    return 0;
}