#include <vector>
#include <iostream>

using namespace std;

int countChargeToGoodArray(vector<int> &nums)
{
    int countEvenErrors = 0;
    int numberEvenMoreThanOdd = 0;
    for (size_t i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            numberEvenMoreThanOdd++;
            if (i % 2 != 0)
                countEvenErrors++;
        }
        else
        {
            numberEvenMoreThanOdd--;
        }
    }
    if (numberEvenMoreThanOdd == (nums.size() % 2))
        return countEvenErrors;
    else
        return -1;
}

int main()
{
    cout << "Input number of tests: ";
    int numberTestcase;
    cin >> numberTestcase;

    vector<int> numbers;
    size_t arraySize;
    for (int i = 0; i < numberTestcase; i++)
    {
        cout << "Testcase " << i + 1 << ":\n";
        cout << "Input array size: ";
        cin >> arraySize;
        numbers.resize(arraySize);
        for (size_t index = 0; index < arraySize; index++)
        {
            cout << "arr[" << index << "] = ";
            cin >> numbers[index];
        }
        cout << "Result for this test case: " << countChargeToGoodArray(numbers) << endl;
        cout << "--------------------------------";
    }
    return 0;
}