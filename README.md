# 🧠 DSA in C++

My Data Structures & Algorithms practice in C++ – from basics (loops, conditionals, patterns) to classic array problems.

## 📚 What's Inside

| File | Topic |
|------|-------|
| `day.cpp` | Hello World – first program |
| `day3.cpp` | Basics practice (kept as comments): upper/lower-case check, ternary operator, loops, sum of odd numbers, do-while, prime check, primes up to N |
| `day4.cpp` | Pattern printing – nested loops (number grid, A–Y character grid) |
| `Kadanes_Algorithm.cpp` | Printing every subarray of an array (groundwork for Kadane's algorithm) |
| `maxsubarray.cpp` | Maximum subarray sum – O(n²) running-sum approach |
| `pairsum.cpp` | Pair sum – brute force O(n²) (commented) and two-pointer O(n) on a sorted array |
| `majority.cpp` | Majority element – brute-force frequency count (LeetCode-style function) |
| `day2.cpp`, `day5.cpp` | Placeholders (empty) |

## 🛠️ Tech Stack

- C++ (STL `iostream`, `vector`)
- VS Code with the C/C++ extension (`.vscode/` configs)

## 📁 Project Structure

```
DSA/
├── *.cpp          # Practice programs
├── .vscode/       # VS Code build / debug config
├── build/Debug/   # Compiled object files
└── output/        # Compiled executables
```

## 🚀 Run Locally

```bash
git clone https://github.com/shivamani-code/DSA.git
cd DSA
g++ pairsum.cpp -o pairsum
./pairsum
```

Swap in any other `.cpp` file the same way. (`majority.cpp` is a single function – call it from your own `main` to run it.)
