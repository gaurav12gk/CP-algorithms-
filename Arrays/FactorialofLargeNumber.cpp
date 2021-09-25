// How to multiply a number ‘x’ with the number stored in res[]? 
// The idea is to use simple school mathematics. We one by one multiply x with every digit of res[].
//  The important point to note here is digits are multiplied from rightmost digit to leftmost digit.
//   If we store digits in same order in res[], then it becomes difficult to update res[] without extra
//   hat is why res[] is maintained in reverse way, i.e., digits from right to left are stored.

// multiply(res[], x) 
// 1) Initialize carry as 0. 
// 2) Do following for i = 0 to res_size – 1 
// ….a) Find value of res[i] * x + carry. Let this value be prod. 
// ….b) Update res[i] by storing last digit of prod in it. 
// ….c) Update carry by storing remaining digits in carry. 
// 3) Put all digits of carry in res[] and increase res_size by number of digits in carry.
