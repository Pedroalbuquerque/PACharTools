# PACharTools
 
This set of function allow some char array manipulation t prepare them to be used as part of a structure and included in CRC validation

## What is the problem?
say that you have an array size 10 like 
char test[10];

and you assign it the string "Hello", than the array will contain
test[0]='H'
...
test[4]='o'
test[5]=NULL
test[6] and following up to test[9]= ????

what is the CRC for this array ? 
It will vary depending on content of array positions that you do not control like test[6] and forward.

so to have a consistent CRC calculated on this array, you need to "clean" the remaing position that you do not need and any other copy function also do not clean.

I choose to set all of this array positions to NULL by using the included function
strcpy_cln()

example:
char dest[10];
char src[5] = "Hi"
strcpy_cln( dest, src, sizeof(dest) ) // copy src to dest and fill with NULL until end of dest

you can also find alternative ways to achieve the same result, for sure

hope you can enjoy or at least find it interesting.

