#include <iostream>

using namespace std;

//-FUNCTIONS---------------------
void startMenu();
void quitMenu();
void programPath();
void fileOptions();
void framesOptions();
void engineOptions();
//-------------------------------

//-VARIABLES---------------------
string blenderPath;
string inputPath;
string outputPath;
string fileName;
int startFrame = 1;
int endFrame = 250;
bool singleFrame = true;
//-------------------------------

int main(){

    startMenu();

    return 0;
}

void startMenu(){
    int menuOption;

    system("CLS");
    cout << "WELCOME TO THE BLENDER RENDERER SCRIPT GENERATOR!" << endl
    << "-------------------------------------------------"
    << endl << endl
    << "1.\tBlender Program Path" << endl
    << "2.\tFile Options" << endl
    << "3.\tFrames Options" << endl
    << "4.\tRender Engine" << endl
    << "5.\tSpecify CPU Threads To Use" << endl
    << "6.\tBuild And Run" << endl
    << endl
    << "0.\tQuit Program" << endl
    << endl;

    cin >> menuOption;

    if(menuOption == 1){
        programPath();
    }else if(menuOption == 2){
        fileOptions();
    }else if(menuOption == 3){
        framesOptions();
    }else if(menuOption == 4){
        
    }else if(menuOption == 5){
        
    }else if(menuOption == 6){

    }else if(menuOption == 0){
        quitMenu();
    }else{
        cout << "Number not valid, retry" << endl;
        startMenu();
    }
    
}

void quitMenu(){
    system("CLS");
    exit(0);
}

void programPath(){
    system("CLS");
    cout << "Set the path of Blender (remember blender.exe at the end)" << endl << endl
    << "Current path: " << blenderPath << endl
    << "Blender Path: ";
    blenderPath.clear();
    cin >> blenderPath;
    blenderPath.insert(0, "\"") += "\"";
    startMenu();
}

void fileOptions(){
    int menuOption;

    system("CLS");
    cout << "WELCOME TO THE BLENDER RENDERER SCRIPT GENERATOR!" << endl
    << "-------------------------------------------------"
    << endl
    << "File Options:"
    << endl
    << "1.\tInput Path" << endl
    << "2.\tOutput Path" << endl
    << "3.\tOutput File Name (no extension)" << endl
    << endl
    << "0.\tBack" << endl
    << endl
    << endl
    << "Input Path: " << inputPath << endl
    << "Output Path: " << outputPath << endl
    << "Output File Name: " << fileName << endl << endl;
    cin >> menuOption;

    if(menuOption == 1){
        system("CLS");
        cout << "This is the path of the .blend file (remember .blend extension!)" << endl
        << "File Path: ";
        inputPath.clear();
        cin >> inputPath;
        inputPath.insert(0, "\"") += "\"";
        fileOptions();
    }else if(menuOption == 2){
        
        system("CLS");
        cout << "This is the path were the file will be saved." << endl
        << "File Path: ";
        outputPath.clear();
        cin >> outputPath;
        outputPath.insert(0, "\"") += "\"";
        fileOptions();
        
    }else if(menuOption == 3){
        system("CLS");
        cout << "Set the name of the output file (if you want the frame(s) number(s) use as many # as many digits you want)" << endl
        << "File Name: ";
        fileName.clear();
        cin >> fileName;
        fileOptions();
    }else if(menuOption == 0){
        system("CLS");
        startMenu();
    }else{
        cout << "ERROR: Number not valid. Retry";
        fileOptions();
    }

}

void framesOptions(){
    int menuOption;

    system("CLS");
    cout << "WELCOME TO THE BLENDER RENDERER SCRIPT GENERATOR!" << endl
    << "-------------------------------------------------"
    << endl
    << "Frames Options:"
    << endl
    << endl
    << "Single Frame Mode: " << boolalpha << singleFrame << noboolalpha << endl
    << "1.\tChange Mode" << endl;
    if(singleFrame){
        cout << "2.\tSet Frame";
    }else{
        cout << "2.\tSet Starting Frame" << endl
        << "3.\tSet Ending Frame";
    }
    cout << endl << endl << "0.\tBack" 
    << endl
    << endl;
    if(singleFrame){
        cout << "Frame: " << startFrame;
    }else{
        cout << "Starting Frame: " << startFrame << endl
        << "Ending Frame: " << endFrame;
    }
    cout << endl << endl;

    cin >> menuOption;

    if(menuOption == 1){
        singleFrame = !singleFrame;
        framesOptions();
    }else if(menuOption == 2){
        system("CLS");
        cout << "Set Frame: ";
        cin >> startFrame;
        framesOptions();
    }else if(menuOption == 3 && !singleFrame){
        system("CLS");
        cout << "Set End Frame: ";
        cin >> endFrame;
        framesOptions();
    }else if(menuOption == 0){
        system("CLS");
        startMenu();
    }else{
        cout << "ERROR: Number not valid. Retry";
        framesOptions();
    }
}

void engineOptions(){

}