// Function to update an existing item
void updateItem(vector<Item>& inventory) {
    int id;

    cout << "Enter Item ID to update: ";
    cin >> id;

    // Search for item by ID
    for (auto& item : inventory) {

        if (item.id == id) {  // If ID matches

            // Update item details
            cout << "Enter New Name: ";
            cin >> item.name;

            cout << "Enter New Quantity: ";
            cin >> item.quantity;

            cout << "Enter New Price: ";
            cin >> item.price;

            cout << "Item updated successfully!\n";
            return;  // Exit after updating
        }
    }

    // If no matching ID found
    cout << "Item not found!\n";
}

// Function to remove an item from inventory
void removeItem(vector<Item>& inventory) {
    int id;

    cout << "Enter Item ID to remove: ";
    cin >> id;

    // Use iterator to safely remove element from vector
    for (auto it = inventory.begin(); it != inventory.end(); ++it) {

        if (it->id == id) {  // If ID matches

            inventory.erase(it);  // Remove item
            cout << "Item removed successfully!\n";
            return;  // Exit after removal
        }
    }

    cout << "Item not found!\n";
}

// Function to search for a specific item by ID
void searchItem(const vector<Item>& inventory) {
    int id;

    cout << "Enter Item ID to search: ";
    cin >> id;

    // Loop through inventory to find item
    for (const auto& item : inventory) {

        if (item.id == id) {

            // Display item details if found
            cout << "\nItem Found:\n";
            cout << "ID: " << item.id << endl;
            cout << "Name: " << item.name << endl;
            cout << "Quantity: " << item.quantity << endl;
            cout << "Price: " << item.price << endl;
            return;
        }
    }

    cout << "Item not found!\n";
}
