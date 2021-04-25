#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
void calculate(int arr[], int n);

int main()
{
    const int n=10;
    int arr[n];

    cout << "The elements in the array are: ";
    for (int i=0; i<n; i++)
    {
        arr[i] = rand()%10;
        cout << arr[i] << " ";
    }

    cout << endl;
    calculate(arr,n);

    return 0;
}

void calculate(int arr[], int n)
{
    bool visited[n]={false}; //mark all elements as unvisited

    for (int i=0; i<n; i++)
    {
        int count = 0;

        if (visited[i] == false) //if the element is unvisited, count and print the frequency
        {
            for (int j=0; j<n; j++)
            {
                if (arr[i] == arr[j])
                {
                    visited[j] = true; //mark the repeated element to visited after counting
                    count++;
                }
            }
            cout << "Freq of " << arr[i] << ": " << count << endl;
        }
    }
    return;
}
