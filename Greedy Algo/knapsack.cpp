// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// struct Item {
//     double weight;
//     double value;
// };

// // Comparator to sort items by value/weight ratio in descending order
// bool compare(Item a, Item b) {
//     double ratioA = a.value / a.weight;
//     double ratioB = b.value / b.weight;
//     return ratioA > ratioB;
// }

// double fractionalKnapsack(double capacity, vector<Item> items) {
//     // Sort items by value/weight ratio (descending order)
//     sort(items.begin(), items.end(), compare);

//     double totalValue = 0.0;
//     double remaining = capacity;

//     for (auto& item : items) {
//         if (remaining <= 0) break;

//         // Take entire item if possible
//         if (item.weight <= remaining) {
//             totalValue += item.value;
//             remaining -= item.weight;
//         }
//         // Take fractional part if capacity is less than item weight
//         else {
//             double fraction = remaining / item.weight;
//             totalValue += item.value * fraction;
//             remaining = 0;
//         }
//     }

//     return totalValue;
// }

// int main() {
//     int n;
//     double capacity;
    
//     cout << "Enter number of items: ";
//     cin >> n;
//     cout << "Enter knapsack capacity: ";
//     cin >> capacity;

//     vector<Item> items(n);
//     cout << "Enter weight and value for each item:\n";
//     for (int i = 0; i < n; i++) {
//         cout << "Item " << i+1 << " (weight value): ";
//         cin >> items[i].weight >> items[i].value;
//     }

//     double maxValue = fractionalKnapsack(capacity, items);
//     cout << "Maximum value in knapsack: " << maxValue << endl;

//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//create struct to create an obbject item which contains both weight & value.
struct item{
    int weight;
    int value;
};

//comparator to compare and sort value?weight ratio in descending order:

bool compare(item a , item b){
    double ratioA = double(a.value) / double(a.weight);
    double ratioB = double(b.value) / double(b.weight);
    return ratioA > ratioB;
}

// fractional knapsack problem:

double Knapsack(double capacity, vector <item> items){
    sort(items.begin(), items.end(), compare);
    double totalValue = 0.0;
    double remaining = capacity;

    for(int i = 0; i < items.size(); i++){
        if(remaining <= 0)
            break;
    

}