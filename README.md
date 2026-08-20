# 🎒 Fractional Knapsack using Greedy Algorithm

A C implementation of the **Fractional Knapsack Problem** using the **Greedy Algorithm**.

This project was developed as part of my **Design and Analysis of Algorithms (DAA)** coursework to understand greedy problem-solving, sorting, and algorithm complexity.

---

## 📌 About the Project

The **Fractional Knapsack Problem** is an optimization problem where we are given a set of items, each having a specific **value** and **weight**, along with a knapsack that has a limited capacity.

The goal is to maximize the total value placed inside the knapsack.

Unlike the **0/1 Knapsack Problem**, the Fractional Knapsack problem allows us to take a **fraction of an item** when the entire item cannot fit.

### 💡 Greedy Strategy

The algorithm calculates the **value-to-weight ratio** for every item.

Items are then considered in descending order of their ratio:

> **Value / Weight**

The item with the highest ratio is selected first, allowing the algorithm to maximize the value obtained from the available capacity.

---

## ⚙️ Algorithm

The solution follows these steps:

1. Calculate the value-to-weight ratio for each item.
2. Sort all items in descending order of their ratio.
3. Start selecting items from the highest ratio.
4. If the complete item fits, add it to the knapsack.
5. If the complete item does not fit, take the fraction that fills the remaining capacity.
6. Continue until the knapsack reaches its maximum capacity.
7. Return the maximum value obtained.

---

## 💻 Technologies Used

| Technology       | Purpose                              |
| ---------------- | ------------------------------------ |
| C                | Implementation                       |
| Greedy Algorithm | Problem-solving approach             |
| Sorting          | Ordering items by value/weight ratio |
| GCC              | Compilation                          |

---

## ⏱️ Complexity Analysis

### Time Complexity

**O(n log n)**

The items are sorted according to their value-to-weight ratio, which takes **O(n log n)** time.

### Space Complexity

**O(n)**

Additional memory is used to store the item information and calculated ratios.

---

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone https://github.com/Sahil4507/fractional-knapsack.git
```

### 2. Enter the project directory

```bash
cd fractional-knapsack
```

### 3. Compile the program

```bash
gcc miniproject.c -o fractional_knapsack
```

### 4. Run the program

```bash
./fractional_knapsack
```

---

## 📂 Project Structure

```text
fractional-knapsack/
│
├── miniproject.c
└── README.md
```

---

## 🧠 What I Learned

Through this project, I practiced:

* Greedy algorithm design
* Sorting techniques
* Optimization problems
* Value-to-weight ratio calculations
* C programming
* Time complexity analysis
* Space complexity analysis

---

## 📚 Academic Context

**Course:** Design and Analysis of Algorithms (DAA)

**Topic:** Greedy Algorithms

**Problem:** Fractional Knapsack

**Language:** C

---

## 🚀 Future Improvements

Some possible improvements for this project include:

* Adding better input validation
* Supporting multiple test cases
* Improving the user interface of the console output
* Comparing the solution with the 0/1 Knapsack approach
* Adding a visual representation of the selected items

---

## 👨‍💻 Author

**Sahil Singh**


---

⭐ If you found this project useful, feel free to explore the repository.
