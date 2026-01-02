#include "ItemStack.h"


ItemStack::ItemStack() : itemID(-1), count(0), damage(0) {}


bool ItemStack::empty() const {
    return itemID == -1 || count <= 0;
}