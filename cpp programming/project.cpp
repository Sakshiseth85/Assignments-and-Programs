#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
class Mybank
{
private:
    string id;
    int count;
    struct person
    {
        string name, ID, address;
        int contact, cash;
    } person[100];

public:
    Mybank()
    {
        count = 0;
    }
    int ad_id = 1001;
    void choice();
    void choiceadmin();
    void perData();
    void show();
    void update();
    void search();
    void transactions();
    void del();
};
int main()
{
    // Mybank object;
    // object.choice();
    cout << "Press u. To login as user" << endl;
    cout << "Press a. To login as admin" << endl;
    char a;
    a = getch();
    Mybank obj;
    switch (a)
    {
    case 'u':
        obj.choice();
        break;
    case 'a':
        obj.choiceadmin();
    default:
        break;
    }
    return 0;
}
void Mybank::choice()
{
    char ch, c, ad;
    while (1)
    {

        cout << "\n\nPRESS..!!" << endl;
        cout << "1. Create new account" << endl;
        cout << "2. View customers list" << endl;
        cout << "3. Update information of existing account" << endl;
        cout << "5. For transactions" << endl;
        cout << "7. Exit" << endl;
        ch = getch();
        system("CLS");
        switch (ch)
        {
        case '1':
            Mybank::perData();
            break;
        case '2':
            if (count == 0)
            {
                cout << "No data is entered" << endl;
            }
            else
            {
                Mybank::show();
            }
            break;
        case '3':
            if (count == 0)
                cout << "No data is entered" << endl;
            else
                Mybank::update();
            break;
        case '5':
            if (count == 0)
                cout << "No data is entered" << endl;
            else
                Mybank::transactions();
            break;
        case '7':
            exit(0);
            break;
        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}
void Mybank::choiceadmin()
{
    char ad;
    while (1)
    {
        cout << "Press 4 to search an user" << endl;
        cout << "Press 6. to delete an existing account" << endl;
        ad = getch();
        switch (ad)
        {
        case '4':
            if (count == 0)
                cout << "No data is entered" << endl;
            else
                Mybank::search();
            break;
        case '6':
            if (count == 0)
                cout << "No data is entered" << endl;
            else
                Mybank::del();
            break;
        case '8':
            exit(0);
            break;

        default:
            cout << "Invalid" << endl;
            break;
        }
    }
}

void Mybank::perData()
{
    cout << "Enter data of person " << count + 1 << endl;
    cout << "Enter name: ";
    cin >> person[count].name;
    cout << "ID: ";
    cin >> person[count].ID;
    cout << "Address: ";
    cin >> person[count].address;
    cout << "Contact: ";
    cin >> person[count].contact;
    cout << "Total Cash: ";
    cin >> person[count].cash;
    count++;
}
void Mybank::show()
{
    for (int i = 0; i < count; i++)
    {
        cout << "Data of person " << i + 1 << endl;
        cout << "Name: " << person[i].name << endl;
        cout << "ID: " << person[i].ID << endl;
        cout << "Address: " << person[i].address << endl;
        cout << "Contact: " << person[i].contact << endl;
        cout << "Cash: " << person[i].cash << endl;
    }
}
void Mybank::update()
{
    cout << "Enter id of student those data you want to update" << endl;
    cin >> id;
    for (int i = 0; i < count; i++)
    {
        if (id == person[i].ID)
        {
            cout << "Previous data" << endl;
            cout << "Data of person " << i + 1 << endl;
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].ID << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;
            cout << "\nEnter new data" << endl;
            cout << "Enter name: ";
            cin >> person[i].name;
            cout << "ID: ";
            cin >> person[i].ID;
            cout << "Address: ";
            cin >> person[i].address;
            cout << "Contact: ";
            cin >> person[i].contact;
            cout << "Total Cash: ";
            cin >> person[i].cash;
            break;
        }
        if (i == count - 1)
        {
            cout << "No such record found" << endl;
        }
    }
}
void Mybank::search()
{
    cout << "Enter id of student those data you want to search" << endl;
    cin >> id;
    for (int i = 0; i < count; i++)
    {
        if (id == person[i].ID)
        {
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].ID << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;
            break;
        }
        if (i == count - 1)
        {
            cout << "No such record found" << endl;
        }
    }
}
void Mybank::transactions()
{
    int cash;
    char ch;
    cout << "Enter id of student those data you want to transaction" << endl;
    cin >> id;
    for (int i = 0; i < count; i++)
    {
        if (id == person[i].ID)
        {
            cout << "Name: " << person[i].name << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "\nExisting Cash " << person[i].cash << endl;
            cout << "Press 1 to deposit" << endl;
            cout << "Press 2 to withdraw" << endl;
            ch = getch();
            switch (ch)
            {
            case '1':
                cout << "How much cash you want to deposit??" << endl;
                cin >> cash;
                person[i].cash += cash;
                cout << "Your new cash is " << person[i].cash << endl;
                break;
            case '2':
            back:
                cout << "How much cash you want to withdraw??" << endl;
                cin >> cash;
                if (cash > person[i].cash)
                {
                    cout << "Your existing cash is just " << person[i].cash << endl;
                    Sleep(3000); // in mili secs
                    goto back;
                }
                person[i].cash -= cash;
                cout << "Your new cash is " << person[i].cash << endl;
                break;
            default:
                cout << "Invalid input" << endl;
                break;
            }
            break;
        }
        if (i == count - 1)
        {
            cout << "No such record found" << endl;
        }
    }
}
void Mybank::del()
{
    char ch;
    cout << "Press 1 to remove specific record" << endl;
    cout << "Press 2 to remove full record" << endl;
    ch = getch();
    switch (ch)
    {
    case '1':
        cout << "Enter id of student those data you want to remove" << endl;
        cin >> id;
        for (int i = 0; i < count; i++)
        {
            if (id == person[i].ID)
            {
                for (int j = i; j < count; j++)
                {
                    person[j].name = person[j + 1].name;
                    person[j].ID = person[j + 1].ID;
                    person[j].address = person[j + 1].address;
                    person[j].contact = person[j + 1].contact;
                    person[j].cash = person[j + 1].cash;
                    count--;
                    cout << "Your required data is deleted" << endl;
                    break;
                }
            }
            if (i = count - 1)
            {
                cout << "No such record found" << endl;
            }
        }
        break;
    case '2':
        count = 0;
        cout << "All record is deleted" << endl;
        break;
    default:
        cout << "Invalid Input" << endl;
        break;
    }
}