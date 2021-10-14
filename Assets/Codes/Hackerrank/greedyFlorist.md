# Greedy Florist

## Language: `c++`

### Question Statement [link](https://www.hackerrank.com/challenges/greedy-florist/problem)

&nbsp;

### **Question Statement**

A group of friends want to buy a bouquet of flowers. The florist wants to maximize his number of new customers and the money he makes. To do this, he decides he'll multiply the price of each flower by the number of that customer's previously purchased flowers plus . The first flower will be original price, , the next will be and so on.

Given the size of the group of friends, the number of flowers they want to purchase and the original prices of the flowers, determine the minimum cost to purchase all of the flowers. The number of flowers they want equals the length of the array.

Example

The length of , so they want to buy flowers total. Each will buy one of the flowers priced at the original price. Having each purchased flower, the first flower in the list, , will now cost . The total cost is .

Function Description

Complete the getMinimumCost function in the editor below.

getMinimumCost has the following parameter(s):

int c[n]: the original price of each flower
int k: the number of friends

**Input**
The first line contains two space-separated integers and , the number of flowers and the number of friends.
The second line contains space-separated positive integers , the original price of each flower.

**Output**
int: the minimum cost to purchase all flowers

### **Solution**

```cpp
#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c) {
    sort(c.begin(),c.end());
int n=0, sum=0;

for(int i=1; i<=c.size(); i++)
{
   if((i-1)%k == 0)
     {
        n++;
     }

    if(i-1 == 0)
    {
        n--;
    }

   sum = sum + (n+1)*c[c.size()-i];

}

return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        int c_item = stoi(c_temp[i]);

        c[i] = c_item;
    }

    int minimumCost = getMinimumCost(k, c);

    fout << minimumCost << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

```
