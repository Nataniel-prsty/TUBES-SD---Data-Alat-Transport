#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED

#include <iostream>
#define nul NULL

using namespace std;

typedef int infotype;
typedef struct ElmList *address;
struct ElmList{
    infotype info;
    address next;
};
 struct List{
    address First;
 };

 void CreateList (List &L);
 address alokasi(infotype x);
 void dealokasi(address &P);
 void prinInfo(List L);
 void insertFirst(List &L, address P);


#endif // PARENT_H_INCLUDED
