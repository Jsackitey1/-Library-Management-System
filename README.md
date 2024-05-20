## Overview

This project is a Library Management System developed in C to manage books and users within a library. The system provides functionalities for adding books, adding users, and initializing the library database. The primary purpose of this project is to improve my coding skills and to become proficient in the C programming language.

## Features

### Book Management
- **Add Book**: Allows users to add new books to the library by entering book ID, title, author, and quantity.
- **Initialize Books**: Sets up the library with a default empty book structure.

### User Management
- **Add User**: Enables users to add new library users by entering user ID and name.
- **Initialize Users**: Prepares the user database with default values, including setting up user IDs and default names, and initializing borrowed books.

### Interactive Menu
- **User Interface**: Provides a simple menu-driven interface for users to add books, add users, and exit the program.

## Project Structure

- **Main Program**: The `main` function initializes the library database, handles user input, and calls appropriate functions based on user choices.
- **Book Functions**: Functions to add books to the library.
- **User Functions**: Functions to add users to the library.

## How to Run

1. **Compile the Program**: Use a C compiler to compile the source code file. A suitable one is codeblocks
   ```
   gcc -o library_management library_management.c
   ```

2. **Run the Program**: Execute the compiled program.
   ```
   ./library_management
   ```

3. **Follow the Menu**: Use the interactive menu to add books, add users, or exit the program.

## Example Usage

1. **Add Book**: Choose the option to add a book and provide the necessary details like book ID, title, author, and quantity.
2. **Add User**: Choose the option to add a user and provide the user ID and name.
3. **Exit**: Exit the program using the menu option.

## Conclusion

This Library Management System is designed to enhance my coding skills and familiarize myself with the C programming language. It provides a practical approach to managing books and users in a library, offering a straightforward and user-friendly experience.
