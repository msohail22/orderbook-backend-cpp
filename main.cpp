#include <iostream>


struct Order {
    int prices;
    int quantity;
};

void printOrder(const Order& order) {
    std::cout << "Price: " << order.prices << std::endl;
    std::cout << "Quantity: " << order.quantity << std::endl;
}

int main() {
    
    Order order;
    order.prices = 100;
    order.quantity = 10;
    printOrder(order);
    return 0;
}