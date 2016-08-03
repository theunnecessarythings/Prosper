PROSPER: Product on Sorting, Searching and their Performance


 PROSPER contains five major modules.

Module-1: Insertion sort and its variants: This module implements Insertion-Sort-Iterative(),

Insertion-Sort-Recursive(), Binary-Search-based-Insertion-Sort(), Counting-Inversions().

Insertion-Sort-Iterative() : Implement insertion sort using iterative method.

Insertion-Sort-Recursive(): Implement recursive version of insertion sort.

Binary-Search-based-Insertion-Sort(): During i

to look for the correct position for the i

to locate the position for i

Counting-Inversions(). For an array A of distinct integers, an inversion is a pair (i, j) such that

i < j and A[i] > A[j]. Implement a routine that will count the number of inversions in an array.

Module-2: Quick sort and its variants: This module implements Quick-Sort(), Quick-
Sort-Pivot-Middle(), Quick-Sort-Pivot-First(), Quick-Sort-Pivot-Random()

Quick-Sort() : Implement classical quick sort (the one discussed in class)

Quick-Sort-Pivot-Middle(): Implement Classical quick sort by taking pivot as the middle element

always

Quick-Sort-Pivot-First(): Implement Classical quick sort by taking pivot as the first element

always

Quick-Sort-Pivot-Random(): Implement Classical quick sort by choosing a random element as

the pivot

Module-3: Hybrid Sorting and Searching: This module implements Quick-Insertion-Sort(),

Variant-Linear-Search()

Quick-Insertion-Sort(): Perform classical quick sort till the problem size reduces to 20. For the

problem size 20, return the array as it is without performing partion(). Now, perform classical

insertion sort on the entire array. i.e., recursion bottoms out when the input size becomes 20, no

work is done on the 20-size array, further insertion sort is performed on the entire array.

Merge-Insertion-Sort(): Perform classical merge sort till the problem size reduces to 20. For the

problem size 20, we perform insertion sort. Recursion bottoms out when the input size is 20.

Due to insertion sort, each leaf is sorted (sub array size:20), further merge routine performs the

desired task to output the sorted array.

Variant-Linear-Search(): Perform linear search from both ends of the array alternately. i.e.,

Compare (x, A[1]),(x, A[n]),(x, A[2]),(x, A[n − 1])...

Module-4: Applications: This module implements some of the programming questions asked

in coding interviews, programming contests that are based on divide and conquer paradigm, in-
cremental design.

th iteration, insertion sort performs linear search

th element. Employ binary search instead of linear search

th element.

1

Towers of Hanoi(): Implement a recursive algorithm for Towers of Hanoi

L− shaped triomino(): Placing L−shaped triomino in a chess board with one square removed.

Recall that in discrete mathematics course, we have shown an existential proof that such a placing

is possible. Here, we present a construction, i.e., an algorithm that will exhibit one such placement.

Ladder-climbing(): A monkey is asked to climb a ladder of n-steps. At each step it takes at most

two steps (either one step or two steps). In how many different ways can the monkey climb up

the ladder. Write a program that will count and also print all possible solutions.

Circus(): A circus is designing a tower routine consisting of people standing atop one another’s

shoulders. For practical and aesthetic reasons, each person must be both shorter and lighter than

the person below him. Given the heights and weights of each person in the circus, write a method

to compute the largest possible number of people in such a tower. For ex:

input; (65, 100),(70, 100),(56, 90),(75, 190),(60, 95),(68, 110),

output; (56, 90),(60, 95),(65, 100),(68, 110),(70, 150),(75, 190)

Module-5: Performance Analysis: This module compares the performance of classical algo-
rithms and the variants proposed in the above modules.

input-generation() : Generate 100 random inputs each of size 20,40,60,80,100.

Plot-Insertion-sort(): Compare the performance of Insertion-Sort-Iterative(), Insertion-Sort-Recursive(),

Binary-Search-based-Insertion-Sort(), Counting-Inversions().

Plot-Quick-Sort(): Quick-Sort(), Quick-Sort-Pivot-Middle(), Quick-Sort-Pivot-First(), Quick-Sort-
Pivot-Random()

Plot-Hybrid-sort(): plot Insertion-Sort-Iterative(), Quick-Sort(), Quick-Insertion-Sort(), Merge-
Insertion-Sort().

Plot-Variant-Linear(): plot Variant-Linear-Search() and Linear-Search()
