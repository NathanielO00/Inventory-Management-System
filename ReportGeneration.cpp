// Function to generate inventory summary report
void generateReport(const vector<Item>& inventory) {

    // Check if inventory has items
    if (inventory.empty()) {
        cout << "No data available for report!\n";
        return;
    }

    int totalItems = 0;      // Total quantity of all items
    double totalValue = 0;   // Total monetary value of inventory

    // Calculate totals
    for (const auto& item : inventory) {
        totalItems += item.quantity;                   // Add quantities
        totalValue += item.quantity * item.price;     // Quantity × Price
    }

    // Display report summary
    cout << "\n----- Inventory Report -----\n";
    cout << "Total Different Items: " << inventory.size() << endl;
    cout << "Total Quantity of Items: " << totalItems << endl;
    cout << "Total Inventory Value: $"
        << fixed << setprecision(2) << totalValue << endl;
}
