#include <iostream>
#include <string.h>

using namespace std;

// This section declares the functions used in the program.
// This improves code readability and organization.
void displayBloodInventory(const vector<int>& bloodInventory);
bool donateBlood(string bloodGroup, int quantity, vector<int>& bloodInventory);
bool requestBlood(string bloodGroup, int requestedQuantity, int& availableQuantity, const vector<int>& bloodInventory);

