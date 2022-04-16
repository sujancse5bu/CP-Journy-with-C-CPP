#include <iostream>
#include <utility>
#include <vector>
Using namespace std;
typedef pair <int, int> PII; /// From now on, we can use PII in the place of pair.
vector <PII> V;              /// We will put weight at the first place and price in the second place.
bool cmp (PII A, PII B)
{
    /// We want to order on decreasing order of price/weight. So return A.price/A.weight>B.price/B.weight
    /// But it is better if we can avoid division because of possible precision loss. So we can rewrite it as:
    /// return A.price*B.weight>B.price/A.weight; We use first for weight & second for price. So
    return A.second*B.first>A.first*B.second;

}
