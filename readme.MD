# C Programming

Welcome to the "C Programming Concepts and Basic Codes" repository! This repository is designed to help beginners and intermediate learners understand fundamental concepts of C programming through concise explanations and practical code examples.

## Table of Contents

1. [Introduction](#introduction)
2. [Setup and Compilation](#setup-and-compilation)
3. [Basic C Programming Concepts](#basic-c-programming-concepts)
    - [Variables and Data Types](#variables-and-data-types)
    - [Control Structures](#control-structures)
    - [Functions](#functions)
    - [Pointers](#pointers)
    - [Arrays and Strings](#arrays-and-strings)
    - [Structures](#structures)
    - [File Handling](#file-handling)
    - [Dynamic Memory Allocation](#dynamic-memory-allocation)
4. [Basic Codes](#basic-codes)
5. [Contributing](#contributing)
6. [License](#license)
7. [Contact](#contact)

## Introduction

This repository contains a collection of C programming concepts and basic code examples to help you grasp the foundational aspects of C. Each concept is accompanied by a brief explanation and sample code to illustrate its usage.

## Setup and Compilation

1. **Clone the repository:**

    ```bash
    git clone https://github.com/your-username/C-Programming.git
    cd C-Programming
    ```

2. **Compile and run a C program:**

    Use a C compiler such as `gcc` to compile the `.c` files:

    ```bash
    gcc filename.c -o output
    ./output
    ```

## Basic C Programming Concepts

### Variables and Data Types

- **Variables:** Used to store data values.
- **Data Types:** Common data types include `int`, `float`, `char`, and `double`.

    ```c
    #include <stdio.h>

    int main() {
        int age = 25;
        float height = 5.9;
        char grade = 'A';
        printf("Age: %d, Height: %.1f, Grade: %c\n", age, height, grade);
        return 0;
    }
    ```

### Control Structures

- **Conditional Statements:** `if`, `else if`, and `else`.
- **Loops:** `for`, `while`, and `do-while`.

    ```c
    #include <stdio.h>

    int main() {
        int num = 10;
        if (num > 0) {
            printf("Positive\n");
        } else {
            printf("Negative\n");
        }

        for (int i = 0; i < 5; i++) {
            printf("Loop: %d\n", i);
        }

        return 0;
    }
    ```

### Functions

- **Defining Functions:** Using `return_type function_name(arguments)`.
- **Arguments and Return Values:**

    ```c
    #include <stdio.h>

    int add(int a, int b) {
        return a + b;
    }

    int main() {
        int sum = add(5, 3);
        printf("Sum: %d\n", sum);
        return 0;
    }
    ```

### Pointers

- **Pointer Variables:** Pointers store memory addresses.
- **Dereferencing:** Access the value at the memory address.

    ```c
    #include <stdio.h>

    int main() {
        int x = 10;
        int *ptr = &x;

        printf("Value of x: %d\n", x);
        printf("Address of x: %p\n", ptr);
        printf("Value at address: %d\n", *ptr);

        return 0;
    }
    ```

### Arrays and Strings

- **Arrays:** Contain multiple elements of the same data type.
- **Strings:** Arrays of characters.

    ```c
    #include <stdio.h>

    int main() {
        int arr[5] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }

        char str[] = "Hello, World!";
        printf("\n%s\n", str);

        return 0;
    }
    ```

### Structures

- **Defining Structures:** Group variables of different data types.

    ```c
    #include <stdio.h>

    struct Student {
        char name[50];
        int age;
        float gpa;
    };

    int main() {
        struct Student s1 = {"Alice", 20, 3.8};
        printf("Name: %s, Age: %d, GPA: %.2f\n", s1.name, s1.age, s1.gpa);
        return 0;
    }
    ```

### File Handling

- **Reading and Writing Files:** Use functions like `fopen()`, `fclose()`, `fread()`, `fwrite()`.

    ```c
    #include <stdio.h>

    int main() {
        FILE *file = fopen("example.txt", "w");
        if (file != NULL) {
            fprintf(file, "Hello, File Handling in C!\n");
            fclose(file);
        } else {
            printf("File could not be opened.\n");
        }
        return 0;
    }
    ```

### Dynamic Memory Allocation

- **Allocating Memory:** Use `malloc()`, `calloc()`, `realloc()`, and `free()`.

    ```c
    #include <stdio.h>
    #include <stdlib.h>

    int main() {
        int *ptr;
        ptr = (int *)malloc(5 * sizeof(int));

        for (int i = 0; i < 5; i++) {
            ptr[i] = i + 1;
            printf("%d ", ptr[i]);
        }

        free(ptr);
        return 0;
    }
    ```

## Basic Codes

In this section, you will find various basic C code examples categorized by their functionality and concept. These examples are meant to reinforce the concepts covered and provide hands-on practice.

## Contributing

Contributions are welcome! If you would like to contribute to this repository, please follow these steps:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Commit your changes (`git commit -am 'Add new feature'`).
4. Push to the branch (`git push origin feature-branch`).
5. Create a new Pull Request.

## License

This repository is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.

## Contact

For any questions, suggestions, or feedback, please feel free to contact me:

- **Name:** Somnath Shaw
- **GitHub:** [Somnath Shaw](https://github.com/somnath0904)

---

Happy Coding!
