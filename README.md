# Credit-Card-CRM

# Credit Card and Customer Management System

## Overview
The **Credit Card and Customer Management System** is a C++ application designed to manage credit card and customer data efficiently. It leverages object-oriented programming principles and modern C++ features like smart pointers and STL containers to ensure scalability, memory safety, and flexibility. This project is suitable for learning advanced C++ concepts or building foundational tools for financial management.

---

## Features

### 1. Credit Card Management
- Tracks essential details: card number, type, and maximum limit.
- Implements strict encapsulation by disabling copy and move operations for credit card objects.
  
### 2. Customer Management
- Manages customer data including ID, name, age, and linked credit cards.
- Uses `std::shared_ptr` to associate customers with their credit cards, ensuring memory safety and efficient resource handling.

### 3. Advanced Functionalities
- **Object Creation**: Dynamically creates customer and credit card objects.
- **Data Operations**:
  - Filters and analyzes customer and credit card data based on conditions.
  - Identifies credit cards exceeding thresholds and validates customer details.
  - Implements higher-order functions for flexible operations on data collections.

---

## Key Components

### Header Files:
1. **CreditCard.h**:
   - Defines the `CreditCard` class for managing card details.
   - Includes methods for setting and retrieving attributes and a custom stream output operator.
   
2. **Customer.h**:
   - Defines the `Customer` class for managing customer information.
   - Links customers to their credit cards using smart pointers.
   
3. **functionalities.h**:
   - Provides higher-order functions and utilities for data operations, including filtering, counting, and analysis.

---

## Getting Started
1. **Prerequisites**:
   - A C++17 or later compatible compiler.
   - Basic understanding of object-oriented programming and STL.

2. **Compilation**:
   Use any C++ build system (e.g., `g++`) to compile the files. Example:
   ```bash
   g++ -std=c++17 CreditCard.cpp Customer.cpp main.cpp -o CreditCardSystem
   ```

3. **Execution**:
   Run the executable:
   ```bash
   ./CreditCardSystem
   ```

---

## Potential Use Cases
- **Educational**: Learn advanced C++ concepts like smart pointers, STL containers, and higher-order functions.
- **Financial Applications**: Extend the system to build tools for managing credit card transactions or customer relationships.

---

## Future Enhancements
- Add support for real-time transaction management.
- Integrate a database for persistent storage of customer and card data.
- Provide a user-friendly interface or API for interaction. 

--- 

### Contributing
Contributions and suggestions are welcome! Feel free to fork this repository and submit pull requests.
