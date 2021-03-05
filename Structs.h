#pragma once

struct Pair {

    int size{ 0 };
    int* arr = new int;


    Pair(int n, ...) {

    }

    void create_Not_Bool_Arrey(int n, ...) {
        int* p = &n;
        int count = 0;

        while (*p != 2) {
            count++;
            p++;
        }

        p -= count;

        size = count;
        int* arr_10 = new int[size];
        arr = arr_10;

        for (int i = 0; i < count; ++i) {
            arr[i] = !*p;
            p++;
        }
    }
};