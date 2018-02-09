#include <iostream>
#include <algorithm>

using std::swap;

bool isSwap(char *list, int begin, int end) {
    for (int i = begin; i < end; i++){
        if (list[i] == list[end])
            return false;
    }
    return true;
}

void perm(char *input, int first, int last) {
    // deal with invaild input
    if(input == NULL) {
        return;
    }
    int siz = sizeof(input) / sizeof(char);
    if(first<0 || first>siz || last < first || last > siz){
        return;
    }

    if(first == last) {
        printf("%s\n", input);
    }
    else {
        for(int i=first; i<=last; i++) {
            if(isSwap(input, first, i)) {
                swap(input[i], input[first]);
                perm(input, first + 1, last);
                swap(input[i], input[first]);
            }
        }
    }
}
