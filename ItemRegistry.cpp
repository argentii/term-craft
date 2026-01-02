#include "ItemRegistry.h"
using namespace std;

unordered_map<int, Item> ItemRegistry;

void RegisterItem( int id, const string& name, int maxStack, bool isDamageable) {
    ItemRegistry[id] = {id, name, maxStack, isDamageable};
}


