﻿#include <iostream>
#include <Windows.h>
//---------------------------------------------------------------------------------
#include "Header_functions.h"
#include "Structs.h"
#include "Initialization.h"
//---------------------------------------------------------------------------------
int main() {
    //---------------------------------------------------------------------------------
    setlocale(LC_ALL, "Russian");
    //---------------------------------------------------------------------------------    
    DISPLAY::displayTextColor((int)D_init::Color::Yellow);
    DISPLAY::displaySize(D_init::Width, D_init::height);
    //---------------------------------------------------------------------------------
    void (*func_void_1[2])(int array[], int size);
    func_void_1[0] = Task::foo_1;
    func_void_1[1] = Task::foo_2;

    bool (*func_bool)(int array[], int size);
    func_bool = Task::foo_3;

    void (*func_void_2)(int array[], int size, int n);
    func_void_2 = Task::foo_4;
    //---------------------------------------------------------------------------------
    
    
    while (!Event::exit) {
        std::cout << " 1 2 3 4 5 6 0-выход " << std::endl;
        std::cin >> Event::event;
        switch (Event::event)
        {
        case 0:
            Event::exit = 1;
        break;
        case 1:        
        system("cls");
        PRINT::print_Messenger(1);

        PRINT::print_Array(Init::arr_1, Init::SIZE_1);
        //Task::foo_1(Init::arr_1, Init::SIZE_1);
        func_void_1[0](Init::arr_1, Init::SIZE_1);
        PRINT::print_Array(Init::arr_1, Init::SIZE_1);

        PRINT::print_End_Messeng();
        //system("pause");
        break;
        case 2:
        system("cls");
        PRINT::print_Messenger(2);

        PRINT::print_Array(Init::arr_2, Init::SIZE_2);
        //Task::foo_2(Init::arr_2, Init::SIZE_2);
        func_void_1[1](Init::arr_2, Init::SIZE_2);
        PRINT::print_Array(Init::arr_2, Init::SIZE_2);

        PRINT::print_End_Messeng();
        //system("pause");
        break;
        case 3:
        system("cls");
        PRINT::print_Messenger(3);

        PRINT::print_Array(Init::arr_3, Init::SIZE_3);
        //PRINT::print_bool(Task::foo_3(Init::arr_3, Init::SIZE_3));
        PRINT::print_bool(func_bool(Init::arr_3, Init::SIZE_3));

        PRINT::print_Array(Init::arr_4, Init::SIZE_3);
        //PRINT::print_bool(Task::foo_3(Init::arr_4, Init::SIZE_3));
        PRINT::print_bool(func_bool(Init::arr_4, Init::SIZE_3));

        PRINT::print_Array(Init::arr_5, Init::SIZE_3);
        //PRINT::print_bool(Task::foo_3(Init::arr_5, Init::SIZE_3));
        PRINT::print_bool(func_bool(Init::arr_5, Init::SIZE_3));

        PRINT::print_Array(Init::arr_6, Init::SIZE_3);
        //PRINT::print_bool(Task::foo_3(Init::arr_6, Init::SIZE_3));
        PRINT::print_bool(func_bool(Init::arr_6, Init::SIZE_3));

        PRINT::print_Array(Init::arr_7, Init::SIZE_3);
        //PRINT::print_bool(Task::foo_3(Init::arr_7, Init::SIZE_3));
        PRINT::print_bool(func_bool(Init::arr_7, Init::SIZE_3));

        PRINT::print_Array(Init::arr_8, Init::SIZE_3);
        //PRINT::print_bool(Task::foo_3(Init::arr_8, Init::SIZE_3));
        PRINT::print_bool(func_bool(Init::arr_8, Init::SIZE_3));

        PRINT::print_Array(Init::arr_9, Init::SIZE_3);
        //PRINT::print_bool(Task::foo_3(Init::arr_9, Init::SIZE_3));
        PRINT::print_bool(func_bool(Init::arr_9, Init::SIZE_3));

        PRINT::print_End_Messeng();
        //system("pause");
        break;
        case 4:
        system("cls");
        PRINT::print_Messenger(4);

        PRINT::print_Array(Init::arr_10, Init::SIZE_4);
        //Task::foo_4(Init::arr_2, Init::SIZE_2, Init::N);
        func_void_2(Init::arr_10, Init::SIZE_4, Init::N);
        PRINT::print_Array(Init::arr_10, Init::SIZE_4);

        PRINT::print_End_Messeng();
        //system("pause");
        break;
        case 5:
        system("cls");
        PRINT::print_Messenger(5);

        Init::arr_X.create_Not_Bool_Arrey(1, 1, 0, 0, 1, 0, 1, 1, 0, 0, Init::nightmare);

        PRINT::print_Array(Init::arr_X.arr, Init::arr_X.size);

        PRINT::print_End_Messeng();
        //system("pause"); 
        break;        
        case 6:
        system("cls");
        PRINT::print_Messenger(6);

        std::cout 
        << "\n        ТАК И ЕСТЬ\n"
        << "\n        КОНЕЦ\n"
        << 
        std::endl;

        PRINT::print_End_Messeng();
        //system("pause");  
        default:
            break;
        }
    }
    //---------------------------------------------------------------------------------
    return 0;
}


