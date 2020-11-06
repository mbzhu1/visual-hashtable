typedef struct {
    char* key;
    char* value;
} ht_item;

typedef struct {
    int size;
	int base_size;
    int count;
    ht_item** items;
} ht_hash_table;

#define HT_PRIME_A 151
#define HT_PRIME_B 227
#define NULL 0
static int HT_INITIAL_BASE_SIZE = 53;
static ht_item HT_DELETED_ITEM = {NULL, NULL};

ht_hash_table* ht_new();
static ht_hash_table* ht_new_sized(const int base_size);
void ht_del_hash_table(ht_hash_table* ht);
static int ht_hash(const char* s, const int a, const int m);
static int ht_get_hash(const char* s, const int num_buckets, const int attempt);
void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* h, const char* key);
static void ht_resize(ht_hash_table* ht, const int base_size);
static void ht_resize_up(ht_hash_table* ht);
static void ht_resize_down(ht_hash_table* ht);
void ht_visualize(ht_hash_table* ht);
