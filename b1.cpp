/*Implement a problem of activity selection problem
with K persons.
Statement: Given two arrays S[] and E[] of size N denoting starting
and closing time of the shops and an integer value K denoting the
number of people, the task is to find out the maximum number of
shops they can visit in total if they visit each shop optimally based
on the following conditions:
 A shop can be visited by only one person
 A person cannot visit another shop if its timing collide with it*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n = 30;
    int s[n], e[n], k, i, start, end, visited = 0;

    cout << "\nEnter value of N: ";
    cin >> n;

    cout << "\nEnter starting times of shops: ";
    for (i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    cout << "\nEnter ending times of shops: ";
    for (i = 0; i < n; i++)
    {
        cin >> e[i];
    }

    cout << "\nEnter no. of people: ";
    cin >> k;

    vector<pair<int, int>> shops(n); // create vector shops
    for (int i = 0; i < n; ++i)
    {
        shops[i] = {s[i], e[i]}; // pair starting time and ending time of the same shops in vector
    }

    sort(shops.begin(), shops.end()); // sort the vector according to end time;

    cout << "Timing of shops : \n";
    for (i = 0; i < shops.size(); i++)
    {
        cout << "(" << shops[i].first << "," << shops[i].second << ") ";
    }

    for (i = 0; i < n; i++)
    {
        start = shops[i].first;
        end = shops[i].second;
        for (int j = 0; j < n; j++)
        {
        }
    }
    vector<int> person(k, 0);
    for (i = 0; i < n; i++)
    {
        start = shops[i].first;
        end = shops[i].second;
        for (int j = 0; j < k; j++)
        {
            if (person[j] <= start)
            {
                person[j] = end;
                visited++;
                break;
            }
        }
    }
    cout << "The max shops visited are : " << visited;

    return 0;
}
