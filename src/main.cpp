#include "1-easy/412-FizzBuzz.cpp"

int main() {
    Solution solution;
    vector<string> arr = solution.fizzBuzz(15);
    for(int i = 0; i < arr.size();i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
