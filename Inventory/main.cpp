//Garrett Vukovich
#include <iostream>
#include "Inventory.h"
using namespace std;

int main() {
    //Creates an inventory item
    Inventory item1(1005, 3.50, 15);

    // display the item's information
    cout << "Item number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost: " << item1.getCost() << endl;
    cout << "Total cost: " << item1.getTotalCost() << endl;

    item1.setQuantity(25);
    item1.setCost(3.75);

    //Display the updated information
    cout << "Updated quantity: " << item1.getQuantity() << endl;
    cout << "Updated cost: " << item1.getCost() << endl;
    cout << "Updated total cost: " << item1.getTotalCost() << endl;

    return 0;
}