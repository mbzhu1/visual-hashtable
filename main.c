#include "hash_table.h"
#include <stdio.h>

int main() {
	ht_hash_table* ht = ht_new();
	//  tests
	printf("TESTS\n");
	ht_insert(ht, "school", "UC Berkeley");
	printf("Inserted %s with key %s \n", ht_search(ht, "school"), "school"); 
	ht_visualize(ht);
	ht_insert(ht, "name", "Michael");
	printf("Inserted %s with key %s \n", ht_search(ht, "name"), "name"); 
	ht_visualize(ht);
	// update tests
	ht_insert(ht, "name", "Michael Zhu");
	printf("Updated key %s to have a value of %s \n", "name", ht_search(ht, "name")); 
	ht_visualize(ht);
	ht_del_hash_table(ht);
}
