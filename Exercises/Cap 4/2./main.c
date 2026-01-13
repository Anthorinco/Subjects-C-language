/*
*Question: If i and j are positive integers, does (-i) / j always have the same value
as - (i/j)? Justify your answer.
*/

// Answer: Depends, in C99 onwards the answer is yes, because when the division
// is negative it truncates to zero, but in C89 the values will differ according to the compiler.