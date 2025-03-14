#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <unistd.h>
using namespace std;

class Bill
{
    private:
        string Item;
        int Rate, Quantity;
    public:
        Bill():Item(""), Rate(0), Quantity(0){ }

        void setItem(string item)
        {
            Item = item;
        }

        void setRate(int rate)
        {
            Rate = rate;
        }

        void setQuant(int quant)
        {
            Quantity = quant;
        }

        string getItem()
        {
            return Item;
        }

        int getRate()
        {
            return Rate;
        }

        int getQuant()
        {
            return Quantity;
        }
};

void addItem(Bill b)
{
    bool close = false;
    while(!close)
    {
        int choice;
        cout << "\t1. Add" << endl;
        cout << "\t2. Close" << endl;
        cout << "\tEnter Choice: ";
        cin  >> choice;

        if(choice == 1)
        {
            string item;
            int rate, quant;

            cout << "\tEnter Item Name: ";
            cin  >> item;
            b.setItem(item);

            cout << "\tEnter Rate of Item: ";
            cin  >> rate;
            b.setRate(rate);

            cout << "\tEnter Quantity of Item: ";
            cin >> quant;
            b.setQuant(quant);

            ofstream out("../Bill.txt", ios::app); // append mode
            if(!out)
            {
                cout << "\tError: File Can't Open!" << endl;
            }else
            {
                out << "\t" << b.getItem() << " : " << b.getRate() << " : " << b.getQuant() <<endl << endl;
            }
            out.close();
            cout << "\tItem Added Successfuly" << endl;
            sleep(2);
        }else if(choice == 2)
        {
            system("clear");
            close = true;
            cout << "\tBack to Main Menu" << endl;
            sleep(3);
        }
    }
}

void printBill()
{
    int count = 0;
    bool close = false;
    while(!close)
    {
        system("clear");
        int choice;
        cout << "\t1. Add Bill." << endl;
        cout << "\t2. Close Session." << endl;
        cout << "\tEnter Choice: ";
        cin  >> choice;

        if(choice == 1)
        {
            string item;
            int quant;

            cout << "\tEnter Item: ";
            cin >> item;
        }
    }
}

int main()
{
    Bill b;

    bool exit = false;
    while(!exit)
    {
        system("clear");
        int val;

        cout << "\tWelcome to Market Billing System" << endl;
        cout << "\t********************************" << endl;
        cout << "\t\t1. Add Item" << endl;
        cout << "\t\t2. Print Bill" << endl;
        cout << "\t\t3. Exit" << endl;
        cout << "\t\tEnter Choice: ";
        cin >> val;

        if(val == 1)
        {
            addItem(b);
        }else if(val == 2)
        {
            printBill();
        }

        if(val == 3)
        {
            exit = true;
        }
    }

    return 1;
}

