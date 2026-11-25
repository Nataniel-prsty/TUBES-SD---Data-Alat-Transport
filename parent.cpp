#include "parent.h"

void CreateList (List &L){
    L.First = nul;
}

address alokasi(infotype x){
    address P = new ElmList;
    if (P != nul){
        P->info = x;
        P->next = nul;
    }
    return P;
}

void dealokasi(address &P){
    delete P;
    P = nul;
}

void prinInfo(List L){
    address P = L.First;

    while (P != nul){
        cout << P->info << " ";
        P = P->next;
    }
}

void insertFirst(List &L, address P){
    if (P == nul){
        L.First = P;
    } else{
        P->next = L.First;
        L.First = P;
    }
}
