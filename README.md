# Vending_Machine
Project in OOP

This C++ code represents a simple vending machine program and incorporates the following technologies and concepts:

1. **Classes and Objects:** It utilizes the concept of classes and objects to represent beverages (`Beverage`) and alcoholic beverages (`Alcohol`). Instances of these classes are created within the vending machine (`VendingMachine`).

2. **Dynamic Memory Allocation:** Dynamic memory allocation is used with the `new` keyword to create instances of beverages and alcoholic beverages.

3. **Vectors:** The code employs `std::vector` to store instances of beverages and alcoholic beverages, facilitating dynamic management within the program.

4. **User Interface:** It provides a simple text-based user interface, interacting with users via the console. It displays product information, receives user selections, and handles transactions.

5. **Conditional Statements and Loops:** Conditional statements (`if`) and loops (`while`) are utilized for tasks such as checking the validity of user-inputted product IDs, verifying if the user is an adult, and handling loops during transactions.

6. **Type Conversion:** The `atoi` function is used for converting strings to integers, transforming user-inputted product IDs from strings to integers.

7. **File Input/Output:** While the current code doesn't involve file input/output, comments suggest the possibility of using these functionalities.

8. **Function Calls and Modularization:** Modular design is achieved through function calls, with functions such as `Show_interface`, `Choose_product`, etc., handling different tasks.

It's worth noting that the code contains commented sections, such as those related to file input/output and math libraries. These sections are commented out, possibly because they aren't utilized in the current program.
