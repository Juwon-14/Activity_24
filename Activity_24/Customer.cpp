//
//  Customer.cpp
//  Activity_24
//
//  Created by Juwon Hong on 10/21/24.
//

#include <iostream>
#include "Customer.h"

// Function to input customer data
void inputCustomerData(Customer &customer) {
    std::cout << "Enter customer ID: ";
    std::cin >> customer.id;
    std::cin.ignore();

    std::cout << "Enter customer name: ";
    std::getline(std::cin, customer.name);

    std::cout << "Enter customer email: ";
    std::getline(std::cin, customer.email);
}

// Function to print customer ID, Name, and Email
void printCustomerData(const Customer &customer) {
    std::cout << "\nCustomer Information:\n";
    std::cout << "ID: " << customer.id << "\n";
    std::cout << "Name: " << customer.name << "\n";
    std::cout << "Email: " << customer.email << "\n";
}


