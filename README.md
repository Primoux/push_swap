# push_swap

Sorts a stack of integers using only a small set of stack operations, with the goal of using as few moves as possible. A 42 Common Core project about algorithmic cost.

## Build

```bash
make              # push_swap
make push_swap_debug   # a build with debug output
make clean / fclean / re
```

## Usage

```bash
./push_swap 3 1 5 2 4
```

It prints the list of operations, one per line. Counting them is the point:

```bash
./push_swap 3 1 5 2 4 | wc -l
```

Errors (non-integers, duplicates, values outside `int`) print `Error` on stderr and nothing else.

## Available operations

| Op | Effect |
|---|---|
| `sa` `sb` `ss` | swap the first two elements of a, of b, or of both |
| `pa` `pb` | push the top of the other stack onto a, or onto b |
| `ra` `rb` `rr` | rotate a, b, or both up by one |
| `rra` `rrb` `rrr` | rotate a, b, or both down by one |

## The algorithm

I used a **binary radix sort**, which keeps the move count predictable rather than trying to be clever per input.

1. Parsing replaces each value by its **rank** in the sorted order, so the numbers become `0..n-1` and only their bits matter.
2. `count_byteshift()` computes how many bits that range needs — effectively `ceil(log2(n))`.
3. For each bit position `i`, every element of stack a is inspected once: if bit `i` is set it is rotated to the back of a, otherwise it is pushed to b. Pushing everything back then leaves the stack sorted on the bits seen so far.
4. After the last bit, the stack is sorted.

This runs in `O(n log n)` operations, with no special casing beyond a small hand-written sort for tiny stacks (`little_sort`).

The stacks themselves are the **doubly linked circular list** from my [Libft](https://github.com/Primoux/Libft) (`t_list_db_cir`), which makes both rotate directions O(1).

## Layout

```
src/parsing/    argument checking, duplicate detection, ranking
src/operations/ swap, push, rotate
src/solving/    little_sort, radix sort driver
```
