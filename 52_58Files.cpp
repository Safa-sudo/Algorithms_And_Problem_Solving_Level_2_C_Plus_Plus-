#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void PrintFileContent(string fileName)
{
    fstream MyFile;

    MyFile.open(fileName, ios::in); // read mode
    if (MyFile.is_open())
    {
        string Line = " ";

        while (getline(MyFile, Line))
        {
            cout << Line << endl;
        }

        MyFile.close();
    }
}

void SaveVectorToFile(string FileName, vector<string> vFile)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    if (MyFile.is_open())
    {
        for (string &Line : vFile)
        {
            if (Line != "")
                MyFile << Line + "\n";
        }

        MyFile.close();
    }
}

void LoadFileContentToVector(string fileName, vector<string> &vFileContent)
{
    fstream MyFile;

    MyFile.open(fileName, ios::in);
    if (MyFile.is_open())
    {
        string Line = " ";

        while (getline(MyFile, Line))
        {
            vFileContent.push_back(Line);
        }

        MyFile.close();
    }
}
void DeleteRecordFromFile(string FileName, string Record)
{
    vector<string> vFile;
    LoadFileContentToVector(FileName, vFile);

    for (string &Line : vFile)
    {

        if (Line == Record)
        {
            Line = "";
        }
    }

    SaveVectorToFile(FileName, vFile);
}

void UpdateRecordInFile(string FileName, string Record, string UpdateTo)
{
    vector<string> vFile;
    LoadFileContentToVector(FileName, vFile);

    for (string &Line : vFile)
    {

        if (Line == Record)
        {
            Line = UpdateTo;
        }
    }

    SaveVectorToFile(FileName, vFile);
}
int main()
{
    // cout << "Lesson #52 - Write Mode: Write Data To File\n";
    // fstream MyFile;

    // // open file with write mode (create it if it is not exist otherwise override on it)
    // MyFile.open("File.txt", ios::out);

    // if (MyFile.is_open())
    // {
    //     MyFile << "this is the frist line\n";
    //     MyFile << "this is the 2end line\n";
    //     MyFile << "this is the 3ed line\n";

    //     MyFile.close();
    // }

    //  // #############################
    // cout << "Lesson #53 - Append Mode: Append Data to File\n";
    // fstream MyFile;
    // MyFile.open("tt.txt", ios ::out | ios::app); // append mode

    // if (MyFile.is_open())
    // {
    //     MyFile << "this is the frist line\nthis is the 2end line\nthis is the 3ed line";
    //     MyFile.close();
    // }

    // // ##########################
    // cout << "Lesson #54 - Read Mode: Print File Content\n";
    // PrintFileContent("tt.txt");

    // // ##########################
    // cout << "Lesson #55 - Load Data From File to Vector\n";
    // vector<string> vFile;

    // LoadFileContentToVector("tt.txt", vFile);
    // for (string i : vFile)
    // {
    //     cout << i << endl;
    // }

    // // ######################
    // cout << "Lesson #56 - Save Vector to File\n";
    // vector<string> vFile;

    // LoadFileContentToVector("tt.txt", vFile);
    // SaveVectorToFile("file.txt", vFile);

    // // ####################
    // cout << " Lesson #57 - Delete Record From File\n";

    // cout << "File Content Before Delete.\n";
    // PrintFileContent("MyFile.txt");
    // DeleteRecordFromFile("MyFile.txt", "Ali");
    // cout << "\n\nFile Content After Delete.\n";
    // PrintFileContent("MyFile.txt");

    // ####################
    cout << "Lesson #58 - Update Record In File\n";

    cout << "File Content Before Delete.\n";
    PrintFileContent("MyFile.txt");
    UpdateRecordInFile("MyFile.txt", "Ali", "Omar");
    cout << "\n\nFile Content After Delete.\n";
    PrintFileContent("MyFile.txt");

    return 0;
}