// Suppose that the function f has the following definition:
// int f(int a, int b) { ... }
// Which of the following statements are legal? (Assume that i has type int and
// x has type double.)
// (a) i = f(83, 12);
// ANSWER: Legal
// (b) x = f(83, 12);
// ANSWER: Legal, you can save an int into a double
// (c) i = f(3.15, 9.28);
// ANSWER: Not sure if you implicit casting will work for function parameters
// (d) x = f(3.15, 9.28);
// ANSWER: Same as above
// (e) f(83,12);
// ANSWER: Legal, you can call a function witout using it's output
