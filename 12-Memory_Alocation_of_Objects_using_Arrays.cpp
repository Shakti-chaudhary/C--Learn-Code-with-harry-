#include <iostream>
#include <iomanip>

using namespace std;

class Shop
{                            /*   Object Array    */
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void init_counter(void) { counter = 0; }
    void set_price(void);
    void display_price(void);
};

void Shop ::set_price(void)
{
    cout << "Enter the id of item no " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "Enter the Price of item" << endl;
    cin >> item_price[counter];
    counter++;
}
void Shop ::display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
        cout << setw(50) << "The Price of item id " << item_id[i] << " is " << item_price[i] << endl;
    }
}

int main()
{
    Shop dukaan;

    dukaan.init_counter();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();
    dukaan.display_price();

    return 0;
}