#include <cmath>
class Solution {
public:
    string intToRoman(int num) {
        int x = to_string(num).length()-1;
        string t = "";
        const vector<pair<int, string>> romanMap = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"}, {1, "I"}
        };
        for (const auto& entry : romanMap) {
            while (num >= entry.first) {
                num -= entry.first;
                t += entry.second;
                cout << num << " " << endl; 
            }
        }
        return t;
    }
};