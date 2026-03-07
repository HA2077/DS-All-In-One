# Data Structures in C++ (DS All In One)
**A collection of foundational Data Structures implemented from scratch in C++, built for a better understanding of the data structure course I am taking.**

## 🚀 Current Modules

* **Stack:** Implemented using a C++ `std::vector` (LIFO). Includes manual boundary checking to ensure stability during `pop` operations.
* **Queue:** A **Circular Queue** implementation using a fixed-size array (FIFO). Utilizes modulo arithmetic `(Front + Qsize) % 10` to manage wrap-around logic.
* **Singly Linked List:** Built using custom `Node` structs and `nullptr` for modern memory safety (C++23 standard). Supports insertion and deletion at both ends and by specific value.

## 🛠️ Extended Roadmap

As the semester progresses, the following structures will be implemented in sync with the course syllabus:

- [ ] **ArrayList:** Manual implementation of a dynamic array (resizing logic).
- [ ] **Hash Tables:** Exploring collision resolution (Chaining vs. Open Addressing). [cite: 26]
- [ ] **Trees:** Binary Search Trees (BST) and traversal algorithms (In-order, Pre-order, Post-order). [cite: 26]
- [ ] **Priority Queues:** Implementation using Heaps. [cite: 26]
- [ ] [**Unified TUI:** A Terminal User Interface for real-time visualization of data states.
    * *Note: Still evaluating whether to use Python for the TUI wrapper or keep it pure C++.*

## 💻 Tech Stack
* **Language:** C++23 (utilizing `nullptr` and modern standards).
* **Environment:** Linux / Windows GCC.
