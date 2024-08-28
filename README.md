his project focuses on sorting algorithms and understanding Big O notation, which are crucial for analyzing and optimizing algorithm performance. Here’s an overview of what you need to know:

Key Learning Objectives
Sorting Algorithms: You should be familiar with at least four different sorting algorithms, such as Bubble Sort, Insertion Sort, Selection Sort, and Quick Sort. Understanding how each algorithm works, its advantages and disadvantages, and its typical use cases is essential.
Big O Notation: This is a mathematical notation used to describe the time and space complexity of an algorithm. It helps evaluate how the running time or space requirements of an algorithm grow as the input size increases. Common Big O notations include O(1), O(n), O(n^2), O(log n), and O(n log n).
Selecting Sorting Algorithms: Based on the input size and data characteristics, you should be able to choose the most efficient sorting algorithm. For example, Quick Sort is often faster for large datasets, but Merge Sort is more stable and works well with linked lists.
Stable Sorting Algorithms: A stable sort maintains the relative order of records with equal keys. Understanding which algorithms are stable and why that might matter in certain applications is crucial.
Requirements
Code Style: Your code must follow the Betty coding style, which emphasizes readability and consistency.
No Standard Library: You must implement the sorting algorithms without using standard library functions like printf or puts.
Function Prototypes: Include all function prototypes in a header file named sort.h, and ensure it’s include-guarded.
Doubly Linked List: You’ll be working with a doubly linked list data structure, defined as listint_t. Functions like print_array and print_list are provided to help you print your data structures.
Testing
Random Data: You can use random integer sets to test your sorting algorithms, which can be generated using tools like Random.org.


Tips
Efficiency: Focus on optimizing your algorithms not just for correctness but for efficiency, particularly in terms of time complexity.
Stability: Remember to identify which of your sorting implementations are stable, as this can be important for certain applications.
