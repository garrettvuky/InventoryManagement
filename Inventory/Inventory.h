//Garrett Vukovich
#pragma once
class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    //Default Constructor
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }
    //Constructs an item and sets the total cost of the items
    Inventory(int number, double itemCost, int itemQuantity) {
        itemNumber = number;
        cost = itemCost;
        quantity = itemQuantity;
        setTotalCost();
    }

    //sets quantity of item if valid
    void setQuantity(int itemQuantity) {
        if (itemQuantity >= 0) {
            quantity = itemQuantity;
            setTotalCost();
        }
    }
    //sets item number if valid
    void setItemNumber(int number) {
        if (number >= 0)
            itemNumber = number;
    }
    //sets cost if valid
    void setCost(double itemCost) {
        if (itemCost >= 0.0) {
            cost = itemCost;
            setTotalCost();
        }
    }
    //sets total cost if valid
    void setTotalCost() {
        totalCost = quantity * cost;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};
