//
//  Customer.h
//  Activity_24
//
//  Created by Juwon Hong on 10/21/24.
//

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

// Define the Customer structure
struct Customer {
    int id;
    std::string name;
    std::string email;
};

// Function declarations
void inputCustomerData(Customer &customer);
void printCustomerData(const Customer &customer);

#endif
