void addItem(vector<Item>& inventory) {
    Item newItem;  // Create a temporary Item object

    // Take details from user
    cout << "Enter Item ID: ";
    cin >> newItem.id;

    cout << "Enter Item Name: ";
    cin >> newItem.name;

    cout << "Enter Quantity: ";
    cin >> newItem.quantity;

    cout << "Enter Price: ";
    cin >> newItem.price;

    // Add new item to vector
    inventory.push_back(newItem);

    cout << "Item added successfully!\n";
}

// Function to display all items in inventory
void viewItems(const vector<Item>& inventory) {

    // Check if inventory is empty
    if (inventory.empty()) {
        cout << "Inventory is empty!\n";
        return;  // Exit function early 
    }

    cout << "\nID\tName\tQuantity\tPrice\n";
    cout << "------------------------------------------\n";

    // Loop through each item in vector
    for (const auto& item : inventory) {

        // Display item details in formatted form
        cout << item.id << "\t"
            << item.name << "\t"
            << item.quantity << "\t\t"
            << fixed << setprecision(2) << item.price << endl; // prints price in fixed-point notation instead of scientific
    }
}
