#ifndef ITEMSTACK_H
#define ITEMSTACK_H


#include "ItemRegistry.h"


struct ItemStack {
    int itemID;
    int count;
    int damage;

    ItemStack();

    bool empty() const;
};


#endif