//
// Created by Brian Zapata Resendiz on 2/14/23.
//
#include <iostream>
#include <string>
//#include <json/json.h> later for reading/write files also not downloaded

using std::cout;
using std::cin;


void write_file(std:: string filename);//string and void for placeholders
void read_file(std :: string filename);//string and void for placeholders
void make_file ();//void is a placeholder
void main_menu ();
bool done_menu();



void make_file (){
    cout << "make file function reached. its in construction.\n";
}

void write_file(int filename){
    cout << "You have entered write file function. In construction\n" << filename;
}


void read_file (int filename){
    cout << "You have entered the read file func. Too bad its in construction\n";
    cout << filename;
}


void main_menu (){
    int choice;
    bool pass_loop = false;


    cout <<"******************************************************************\n"
           "*                          Welcome                               *\n"
           "******************************************************************\n";

    cout <<"Please select an option.\n";

    cout <<"******************************************************************\n";
    cout << "[0] - Quit\n";
    cout << "[1] - Read file\n";
    cout << "[2] - Write file\n";
    cout << "[3] - Make new file\n";
    cout <<"*****************************************************************\n";


    do {
        cin >> choice;
        int filename=0;


        switch (choice){
            case 0:
                cout << "exiting code, goodbye.";
                std::exit(0);
            case 1:
                cout << "please enter a filename\n";
                cin >> filename;
                read_file(filename);
                pass_loop=false;
                break;
            case 2:
                cout << "please enter a filename\n";
                cin >> filename;
                write_file(filename);
                pass_loop=false;
                break;
            case 3:
                make_file();
                pass_loop=false;
                break;
            default:
                cout << "please enter a valid option\n";
                pass_loop = true;
        }
    }
    while (pass_loop);
}

bool done_menu(){
    int choice;


    bool pass_loop = false;
    cout <<"*****************************************************************\n";
    cout <<"*                      Are you done?                            *\n";
    cout <<"*****************************************************************\n";
    cout << "[0] - Quit(exit the program\n";
    cout << "[1] - No (continue the program)\n";
    cout <<"*****************************************************************\n";


    do {
        cin >> choice;
        switch (choice){
            case 0:
                cout << "exiting code, goodbye.";
                std::exit(0);
            case 1:
                pass_loop=false;
                return pass_loop;
            default:
                cout << "please enter a valid option\n";
                pass_loop = true;
        }
    }
    while (pass_loop);
}


int main() {
    bool user_done=false;


    while (!user_done) {
        main_menu();
        user_done = done_menu();
    }
}