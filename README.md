# Set Operations Program

## Overview
This C++ program performs various set operations on two user-defined sets within a predefined universe. It validates input sets and computes standard set operations including union, intersection, difference, symmetric difference, and complement.

## Features
- Input validation for set elements (checks for duplicates and universe membership)
- Set operations:
  - Union (A ∪ B)
  - Intersection (A ∩ B)
  - Difference (A \ B and B \ A)
  - Symmetric Difference (A Δ B)
  - Complement (A' and B' relative to the universe)
- Dynamic memory allocation for sets

## Requirements
- C++ compiler with support for dynamic memory allocation
- Standard input/output library

## Usage
1. Compile the program using a C++ compiler:
   ```
   g++ -o set_operations set_operations.cpp
   ```
2. Run the executable:
   ```
   ./set_operations
   ```
3. Follow the prompts:
   - Enter the size of the first set
   - Enter the size of the second set
   - Enter elements for the first set
   - Enter elements for the second set

## Input Constraints
- Sets must contain unique elements (no duplicates)
- All elements must be within the predefined universe (1 to 10)
- Input must be integers

## Output
The program will display:
- Union of the two sets
- Intersection of the two sets
- Difference between the sets (A-B and B-A)
- Symmetric difference between the sets
- Complement of each set relative to the universe

## Error Handling
The program will terminate with an error message if:
- Any set contains duplicate elements
- Any element is outside the predefined universe (1-10)

## Code Structure
- `search_colvo()`: Helper function to count occurrences of an element in an array
- `main()`: 
  - Handles user input
  - Validates sets
  - Performs set operations
  - Displays results

## Example
```
Vvedite dlinu 1 mnogestva 3
Vvedite dlinu 2 mnogestva 3
Zapolnite 1 mnogestvo
1 2 3
Zapolnite 2 mnogestvo
2 3 4

Obedenenie: 1 2 3 4 
Peresechenie: 2 3 
Raznost1: 1 
Raznost2: 4 
Simmetria: 1 4 
Universe1: 4 5 6 7 8 9 10 
Universe2: 1 5 6 7 8 9 10 
```

## Notes
- The universe is fixed to contain integers from 1 to 10
- The program uses dynamic memory allocation for sets
- All operations are performed using integer arrays and custom search functions
