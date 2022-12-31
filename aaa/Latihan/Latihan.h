#ifndef LATIHAN_H_INCLUDED
#define LATIHAN_H_INCLUDED
#include <iostream>
using namespace std;

/*
//SLL
#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct data{
    string nama;
    int hasil;
};

typedef data infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};

struct List{
    adr first;
};

void createList(List &L);
adr newElement(infotype x);
void insertFirst(List &L, adr P);
void insertAfter(List &L, adr P, adr Prec);
void insertLast(List &L, adr P);
void deleteFirst(List &L);
void deleteAfter(List &L, adr P);
void deleteLast(List &L);
void showAllData(List L);
*/


/*
//DLL
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

struct data{
    string nama;
    int hasil;
};

typedef data infotype;
typedef struct elmList *adr;

struct elmList{
    adr prev;
    infotype info;
    adr next;
};

struct List{
    adr first;
    adr last;
};

void createList(List &L);
adr createNewElement(infotype x);
void insertFirst(List &L, adr P);
void insertLast(List &L, adr P);
void insertAfter(List &L, adr prec, adr P);
void deleteFirst(List &L, adr &P);
void deleteLast(List &L, adr &P);
void deleteAfter(List &L, adr prec, adr &P);
void deleteBefore(List &L, adr prec, adr &P);
void showAllData(List L);
*/
//CSLL
/*#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

struct data{
    string nama;
    int nilai;
};

typedef data infotype;
typedef struct element *adr;

struct element{
    infotype info;
    adr next;
};
struct List{
    adr first;
};

void createList(List &L);
void createNewElemen(infotype x, adr &P);
void insertFirst(List &L, adr P);
void insertLast(List &L, adr P);
void insertAfter(List &L, adr prec, adr P);
void deleteFirst(List &L, adr &P);
void deleteLast(List &L, adr &P);
void deleteAfter(List &L, adr prec, adr &P);
void showAllData(List L);
*/
//CDLL
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

struct infotype{
    string nama;
    int nilai;
};
typedef struct element *adr;
struct element{
    adr prev;
    infotype info;
    adr next;
};
struct List{
    adr first;
    adr last;
};

void createList(List &L);
void createNewElemen(infotype x, adr &P);
void insertFirst(List &L, adr P);
void insertLast(List &L, adr P);
void insertAfter(List &L, adr prec, adr P);
void deleteFirst(List &L, adr &P);
void deleteLast(List &L, adr &P);
void deleteAfter(List &L, adr prec, adr &P);
void showAllData(List L);
#endif // LATIHAN_H_INCLUDED






