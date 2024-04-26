// decoder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <fstream>

#include <vector>
#include<sstream>

using namespace std;
string decode(string message_file)
{
  
    int x = 0;
    string asn;
    string word;
    vector<string> arr;
    vector<string> nums; 
     ifstream MyReadFile(message_file);
          while (getline(MyReadFile, asn)) {
        stringstream ss(asn);
       while (getline(ss, asn, ' ')) {
           if (x == 0) {
                nums.push_back(asn);
                x = 1;
           }
           else {
                arr.push_back(asn);
                x = 0;
           }                   
       }
            }
    for (int i = 1;  i <= nums.size()-1; i = i + (i + 1)) {
                        x = stoi(nums[i ]);
    
        asn = asn +" " + arr[x];
            }

    MyReadFile.close();
    return asn;
}
int main()
{
    string message_file;
    message_file = "coding_qual_input.txt";
    message_file= decode(message_file);
    cout << message_file;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
