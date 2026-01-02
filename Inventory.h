#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <ItemStack.h>

//Constants
int MAX_INVENTORY_SIZE = 27;
int MAX_HOTBAR_SIZE = 9;
int MAX_TOTAL_INVENTORY = 36;


// Name: 
// Description:
// Preconditions:
// Postconditions:

class Inventory {
public:
    explicit Inventory(size_t size);

    bool addItem();
    bool removeItem();

    ItemStack& slot(size_t index);
    const ItemStack& slot(size_t index) const;

    size_t size() const;

private:
    vector<ItemStack> m_slots;
};


#endif
