#include "Inventory.h"
#include <algorithm>


Inventory::Inventory(size_t size) : m_slots(size) {}

size_t Inventory::size() const {
    return m_slots.size();
}

//checks vector for item in slot at index
ItemStack& Inventory::slot(size_t index) {
    return m_slots[index];
}

//constant version of slot check
const ItemStack& Inventory::slot(size_t index) const {
    return m_slots[index];
}