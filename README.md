# Hashtable implementation in C with visualizations

### How to use
Clone the repository
```
git clone https://github.com/mbzhu1/visual-hashtable.git
```

Compile using the Makefile
```
make
```

This should create a executable called `main` which you can run 
```
./main
```

Sample output:
```
TESTS
Inserted UC Berkeley with key school
.____.
|    | --> key: school
| 15 | --> value: UC Berkeley
|____|
Inserted Michael with key name
.____.
|    | --> key: school
| 15 | --> value: UC Berkeley
|____|
.____.
|    | --> key: name
| 50 | --> value: Michael
|____|
Updated key name to have a value of Michael Zhu
.____.
|    | --> key: school
| 15 | --> value: UC Berkeley
|____|
.____.
|    | --> key: name
| 50 | --> value: Michael Zhu
|____|
```

- You can modify the code in `main.c` to run your own tests
- Hashtable is implemented with [open addressing](https://en.wikipedia.org/wiki/Open_addressing) and [double hashing](https://en.wikipedia.org/wiki/Double_hashing) in `hash_table.c`
- Prime number verification for the hash table size is implemented in `prime.c`
- We generally want the size of the hash table to be a prime number to avoid clustering which can decrease performance. For more information check out this [link](http://srinvis.blogspot.com/2006/07/hash-table-lengths-and-prime-numbers.html).

Inspired by tutorial written by [James Routley](https://github.com/jamesroutley/write-a-hash-table)


