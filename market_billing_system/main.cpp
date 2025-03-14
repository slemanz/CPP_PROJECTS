#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
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

int main()
{
    Bill b;

    std::cout << "Hello world!\n";

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
        cout << "\t\tEnter Choice" << endl;
        cin >> val;

        if(val == 1)
        {
            
        }

        if(val == 3)
        {
            exit = true;
        }
    }

    return 1;
}

