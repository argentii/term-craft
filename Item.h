//Name: Item.h
//Author: Argentii
//Desc: Header file for item class

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;


struct Item {
  int id;
  string name;
  int maxStackSize;
  bool isDamageable;
};


#endif

/*
//Name: Item.h
//Author: Argentii
//Desc: Header file for item class

#ifndef ITEM_H
#define ITEM_H

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;


struct Item {
  Item();
  ~Item();
  int id;
  string name;
  int maxStackSize;
  bool isDamageable;
};


extern unordered_map<int, Item> ItemRegistry;


struct ItemStack {
  int itemID;
  int count;
  int damage
};


#endif
*/