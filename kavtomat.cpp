#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cout << "Не удалось открыть файл." << std::endl;
        return 0;
    }

    int linesToRead;
    inputFile >> linesToRead;

    vector<std::pair<int, int>> numbers;

    for (int i = 0; i < linesToRead; ++i) {
        int n, m;
        inputFile >> n >> m;
        numbers.push_back(std::make_pair(n, m));
    }
    inputFile.close();
    vector<int> res;
    // Выводим считанные числа
    for (const auto& pair : numbers) {
        int result = (239 + pair.first)*(366+pair.first)/2+19*pair.second;
        res.push_back(result);
    }
    for(int i = 0; i <linesToRead; ++i){
        cout << res[i] << endl;
    }

    ofstream outputFile("output.txt");
    if(!outputFile.is_open()){
        cout << "Не удалось открыть файл" << endl;
    }
    for(int i=0; i < linesToRead; ++i){
        outputFile << res[i] << endl; 
    }
    outputFile.close();
    return 0;
}