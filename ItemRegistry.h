#ifndef ITEM_REGISTRY_H
#define ITEM_REGISTRY_H


#include <unordered_map>
#include "Item.h"
using namespace std;

extern unordered_map<int, Item> ItemRegistry;

void RegisterItem( int id, const string& name, int maxStack, bool isDamageable
  
);

#endif