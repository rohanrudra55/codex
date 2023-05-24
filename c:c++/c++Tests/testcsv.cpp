#include <iostream>
#include <fstream>
#include <sstream>
#include<vector>
using namespace std;
int main(){
    int rownumber=0;
    string path = "./data.csv";
    ifstream fin;
    string line;
    string word;
    vector<string>row;
    bool coloumname=false;
    fin.open(path, ios::in);
    while (!fin.eof())
    {
        fin >> line;
        stringstream s(line);
        while (getline(s, word, ','))
        {
            row.push_back(word);
        }
        if(!coloumname){
            cout<<row[rownumber]<<endl;
        }
        else{
            cout<<row[rownumber]<<endl;
        }
        row.clear();
    }
    return 0;
}