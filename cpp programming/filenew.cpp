#include <iostream>
#include <fstream>
#include <iomanip> //use for setw,endl function
#include <conio.h>
#include <windows.h>
using namespace std;


//Customer_detail Class
class Customer_detail
{
public:
char cus_Name[50];
    float Acc_balance;
    int Acc_No;
void create_Acc();
    void show_Account();
    void Acc_modify();
    void Cus_Report();
};


//saving class
class saving_account : public Customer_detail
{
public:
    void Deposit_s(int x);
    void Withdraw_s(int x);
};


//current class
class current_account : public Customer_detail
{
public:
    void Deposit_c(int x);
};


// loan class 
class loan_account : public Customer_detail
{
private:
    double interest_rate = 8;
    double total_amount, monthly_amount, total_interest;
public:
    int acct_no;
    double loan_amount, number_of_years;
    void total_loan()
    {
        cout << "\nEnter loan amount " << endl;
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


// admin
class admin
{
public:
    char adm_ID[10] = "sakshi";
    int pass_ID = 1234;
};


//functions for custoer
void Customer_detail::create_Acc()
{
    cout << "Enter Pin Number : ";
    cin >> Acc_No;
    cout << "\nEnter Account Holder Name : ";
    cin.ignore();
    cin.getline(cus_Name, 50);
    cout << "\nEnter Account Opening Balance :";
    cin >> Acc_balance;
}
void Customer_detail::show_Account()
{
    cout << "\nAccount number : " << Acc_No;
    cout << "\nAccount Holder's name : " << cus_Name;
    cout << "\nBalance amount : " << Acc_balance;
}
void saving_account::Deposit_s(int x)
{
    float interest;
    Acc_balance += x;
    interest = (Acc_balance * 2) / 100;
    Acc_balance += interest;
}
void current_account::Deposit_c(int x)
{
    Acc_balance += x;
}
void saving_account::Withdraw_s(int x)
{
    Acc_balance -= x;
}
void Customer_detail::Acc_modify()
{
    cout << "\nAccount number : " << Acc_No;
    cout << "\nModify account Holder's name : ";
    cin.ignore();
    cin.getline(cus_Name, 50);
    cout << "\nModify balance amount : ";
    cin >> Acc_balance;
}
void Customer_detail::Cus_Report()
{
    cout << Acc_No << setw(15) << cus_Name << setw(16)  << Acc_balance << endl;
}
//-------------------------------------------
void addCustomer_detail_record();
void search_acc(int n);
void modify_Acc(int n);
void file_DepositeWithdraw(int n, int option);
void show_AllCustomer_detail();
void delete_Acc(int n);
//-------------------------------------------
void transactions()
{
    int menu3choice, num;
    cout << "\nChoose your transaction type : \n[1].Deposit Amount \n[2].Withdraw Amount\n[3].Exit\n";
    cin >> menu3choice;
    cout << "\n\n\tEnter the account no. : ";
    cin >> num;
    file_DepositeWithdraw(num, menu3choice);
}


//function called for customer in main
void choice_Customer_detail()
{
    loan_account l;
    int num;
	char arr[20];
    int p;
    char menu2choice;
   
    cout << "\nPress [1] to Saving Account\nPress [2] to open Current account\nPress [3] to open Loan Account\nPress [4] for Transaction options\nPress [5] for More Settings\nPress [6] to Know your account Information\nPress [7] to Exit\n";
    cin >> menu2choice;
    switch (menu2choice)
    {
    case '1':
        addCustomer_detail_record();
        break;
    case '2':
        addCustomer_detail_record();
        break;
    case '3':
	 cout << "Enter pin: \n";
		addCustomer_detail_record();
        l.total_loan();
        l.monthly_amt();
        l.total_intrest();
        break;
    case '4':
        transactions();
        break;
    case '5':
        int n;
        cout << "\nChoose your setting :  \n\t[1].Modify any Account \n\t[2].Delete any Account";
        cin >> n;
        cout << "\n\n\tEnter account no. : ";
        cin >> num;
        if (n == 1)
        {
            modify_Acc(num);
        }
        else if (n == 2)
        {
            delete_Acc(num);
        }
        else
        {
            break;
        }
        break;
    case '6':
        cout << "\n\nPlease login!! : ";
        cout << "\n\nEnter the account no. : ";
        cin >> num;
        search_acc(num);
        break;
    case '7':
        break;
    default:
        cout << "\nImvalid Input.........";
        break;
    }
}


//main............................................................................................................

int main()
{
    admin a;
    char arr[20];
    int p;
START:
    char menu1choise, choiceYN = 'Y';
    int n;
    std::cout << "\n\n>>>>>>>>>>>>>__WELCOME TO Bank <<<<<<<<<<<<<\n";
    do
    {
        cout << "\n\nChoose Category :";
        cout << "\n[1].Proceed as a Customer  \n[2].Proceed as Admin \n[3].Exit  ";
        cin >> menu1choise;
        switch (menu1choise)
        {
        case '1':
            choice_Customer_detail();
            break;
        case '2':
            cout << "Enter admin user id :\n";
            cin >> arr;
            cout << "Enter admin password :\n";
            cin >> p;
            int num;
            if ((p == a.pass_ID) && !(strcmp(arr, a.adm_ID)))
            {
                cout << "Press 1 to display users details: " << endl;
                cout << "Press 2 to delete the accounts: " << endl;
                cin >> n;
                switch (n)
                {
                case 1:
                    show_AllCustomer_detail();
                    break;
                case 2:
                    cout << "Which account u want to delete? " << endl;
                    cin >> num;
                    delete_Acc(num);
                    break;
                }
            }
            break;
        case '3':
            cout << "\t                   >>>>>>>>>>>>>__THANK YOU__<<<<<<<<<<<<<\n";
            return 0;
        default:
            cout << "\n Invalid Input.......";
            cout << "\t                   >>>>>>>>>>>>>__THANK YOU__<<<<<<<<<<<<<\n";
            return 0;
        }
        // goto NOW;
        cout << "\n Do you want any other services? ";
        cin >> choiceYN;
        if (choiceYN == 'y' || choiceYN == 'Y')
        {
            goto START;
        }
    } while (choiceYN == 'Y');
    cout << "\t                   >>>>>>>>>>>>>__THANK YOU__<<<<<<<<<<<<<\n";

    cout << " __________________________________________________________________________________________\n ";
    return 0;
}



//___________________ Customer_detail - File Handling _____________________

void addCustomer_detail_record()
{
    Customer_detail Customer_detail;
    ofstream(outfile);
    outfile.open("Customer_detail.dat", ios::app | ios::binary);//append mode
    Customer_detail.create_Acc();
    outfile.write((char *)&Customer_detail, sizeof(Customer_detail));//write mode
}
void search_acc(int n)
{
    Customer_detail Customer_detail;
    bool flag = false;
    ifstream inFile;
    inFile.open("Customer_detail.dat", ios::in | ios::binary);//read mode
    if (!inFile)
    {
        cout << "File could not be open. press any key...";
        return;
    }
    while (inFile.read((char *)&Customer_detail, sizeof(Customer_detail)))
    {
        if (Customer_detail.Acc_No == n)
        {
            Customer_detail.show_Account();
            flag = true;
        }
    }
    inFile.close();
    if (flag == false)
        cout << "\n\nAccount number not exist";
}
void modify_Acc(int n)
{
    bool found = false;
    Customer_detail Customer_detail;
    fstream File;
    File.open("Customer_detail.dat", ios::binary | ios::in | ios::out);
    if (!File)
    {
        cout << "File could not be open. press any key...";
        return;
    }
    while (!File.eof() && found == false)
    {
        File.read(reinterpret_cast<char *>(&Customer_detail), sizeof(Customer_detail));
        if (Customer_detail.Acc_No == n)
        {
            Customer_detail.show_Account();
            cout << "\n\nEnter new account details" << endl;
            Customer_detail.Acc_modify();
            int pos = (-1) * static_cast<int>(sizeof(Customer_detail));
            File.seekp(pos, ios::cur);
            File.write(reinterpret_cast<char *>(&Customer_detail), sizeof(Customer_detail));
            cout << "\n\n\t Record updated";
            found = true;
        }
    }
    File.close();
    if (found == false)
        cout << "\n\n Record not found";
}
void file_DepositeWithdraw(int n, int option)
{
    saving_account Customer_detail;
    current_account Customer_detail2;
    int amt;
    bool found = false;
    fstream File;
    File.open("Customer_detail.dat", ios::binary | ios::in | ios::out);
    if (!File)
    {
        cout << "File could not be open, press any key...";
        return;
    }
    while ((char *)&Customer_detail, sizeof(Customer_detail) && found == false)
    {
        File.read(reinterpret_cast<char *>(&Customer_detail), sizeof(Customer_detail));
        if (Customer_detail.Acc_No == n)
        {
            found = true;
            Customer_detail.show_Account();
            if (option == 1)
            {
                cout << "\n\n\tTo deposit amount ";
                cout << "\n\nEnter the amount to deposit";
                cin >> amt;
                Customer_detail.Deposit_s(amt);
            }
            if (option == 2)
            {
                cout << "\n\n\tWithdraw amount ";
                cout << "\n\nEnter amount to withdraw";
                cin >> amt;
                float bal = Customer_detail.Acc_balance - amt;
                if (bal < 1000)
                    cout << "Insufficient balance";
                else
                    Customer_detail.Withdraw_s(amt);
            }
            int pos = (-1) * static_cast<int>(sizeof(Customer_detail));
            File.seekp(pos, ios::cur);
            File.write(reinterpret_cast<char *>(&Customer_detail), sizeof(Customer_detail));
            cout << "\n\n\tRecord updated";
        }
    }
    File.close();
    if (found == false)
        cout << "\n\nRecord not found";
}
void show_AllCustomer_detail()
{
    saving_account Customer_detail;
    ifstream(infile);
    infile.open("Customer_detail.dat", ios::in | ios::binary);
    if (!infile)
    {
        cout << "File could not Found";
        return;
    }
    cout << "\n\n\t\tACCOUNT LIST\n\n";
    cout << "==========================================================\n";
    cout << "Acc no.      NAME      Account Balance\n";
    cout << "==========================================================\n";
    while (infile.read((char *)&Customer_detail, sizeof(Customer_detail)))
    {
        Customer_detail.Cus_Report();
    }
    infile.close();
}
void delete_Acc(int n)
{
    saving_account Customer_detail;
    ifstream inFile;
    ofstream outFile;
    inFile.open("Customer_detail.dat", ios::in | ios::binary);
    if (!inFile)
    {
        cout << "File could not be open. press any key...";
        return;
    }
    outFile.open("Temp.dat", ios::out | ios::binary);
    inFile.seekg(0, ios::beg);
    while (inFile.read((char *)&Customer_detail, sizeof(Customer_detail)))
        ;
    {
        if (Customer_detail.Acc_No != n)
        {
            outFile.write((char *)&Customer_detail, sizeof(Customer_detail));
        }
    }
    inFile.close();
    outFile.close();
    remove("Customer_detail.dat");
    rename("Temp.dat", "Customer_detail.dat");
    cout << "\n\n\tRecord deleted..";
}