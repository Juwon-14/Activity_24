//
//  Customer.cpp
//  Activity_24
//
//  Created by Juwon Hong on 10/21/24.
//

#include <iostream>
#include "Customer.h"

using namespace std;

// Function to input customer data
void inputCustomerData(Customer &customer) {
    cout << "Enter customer ID: ";
    cin >> customer.id;
    cin.ignore();

    cout << "Enter customer name: ";
    getline(cin, customer.name);

    cout << "Enter customer email: ";
    getline(cin, customer.email);
}

// Function to print customer ID,Name,and email
void printCustomerData(const Customer &customer) {
    cout << "\nCustomer Information:\n";
    cout << "ID: " << customer.id << "\n";
    cout << "Name: " << customer.name << "\n";
    cout << "Email: " << customer.email << "\n";
}

