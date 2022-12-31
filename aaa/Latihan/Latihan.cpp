#include "Latihan.h"
/*
//SLL
void createList(List &L){
    first(L) = NULL;
};
adr newElement(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = NULL;
    return P;
};
void insertFirst(List &L, adr P){
    next(P) = first(L);
    first(L) = P;
};
void insertAfter(List &L, adr P, adr Prec){
    next(P) = next(Prec);
    next(Prec) = P;
};
void insertLast(List &L, adr P){
    adr last;
    last = first(L);
    while(next(last) != NULL){
        last = next(last);
    }
    next(last) = P;
    next(P) = NULL;
};
void deleteFirst(List &L){
    adr P = first(L);
    first(L) = next(P);
    next(P) = NULL;
};
void deleteAfter(List &L, adr P){
    adr Q;
    Q = next(P);
    next(P) = next(next(P));
    next(Q) = NULL;
    //next(next(P)) = NULL;
};
void deleteLast(List &L){
    adr last;
    adr prec;
    last = first(L);
    while (next(last)!= NULL){
        prec = last;
        last = next(last);
    }
    next(prec) = NULL;
};
void showAllData(List L){
    adr P = first(L);
    while (P!= NULL){
        cout<<info(P).nama<<endl;
        cout<<info(P).hasil<<endl;
        P = next(P);
    }
};
*/



/*
//DLL
void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
};
adr createNewElement(infotype x){
    adr P = new elmList;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
};
void insertFirst(List &L, adr P){
    if (first(L) == NULL){
        first(L)=P;
        last(L)=P;
    }else{
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
};
void insertLast(List &L, adr P){
    if (first(L) == NULL){
        first(L) = P;
        last(L) = P;
    }else{
        prev(P) = last(L);
        next(last(L)) = P;
        last(L) = P;
    }
};
void insertAfter(List &L, adr prec, adr P){
    if (first(L) == NULL){
        insertFirst(L,P);
    }else{
        next(P) = next(prec);
        prev(P) = prec;
        prev(next(prec)) = P;
        next(prec) = P;
    }
};
void deleteFirst(List &L, adr &P){
    P = first(L);
    if (first(L) == last(L)){
        first(L) = NULL;
        last(L) = NULL;
    }else{
        first(L) = next(first(L));
        next(P) = NULL;
        prev(first(L)) = NULL;
    }
};
void deleteLast(List &L, adr &P){
    P = last(L);
    if (first(L) == last(L)){
        first(L) = NULL;
        last(L) = NULL;
    }else{
        last(L) = prev(P);
        prev(P) = NULL;
        next(last(L)) = NULL;
    }
};
void deleteAfter(List &L, adr prec, adr &P){
    P = next(prec);
    next(prec) = next(P);
    prev(next(P)) = prec;
    next(P) = NULL;
    prev(P) = NULL;
};
void deleteBefore(List &L, adr prec, adr &P){
    P = prev(prec);
    prev(prec) = prev(P);
    next(prev(P)) = prec;
    next(P) = NULL;
    prev(P) = NULL;
};
void showAllData(List L){
    adr P = first(L);
    if (first(L) == NULL){
        cout<<"List Kosong"<<endl;
    }else{
        while (P!= NULL){
            cout<<info(P).nama<<endl;
            cout<<info(P).hasil<<endl;
            P = next(P);
        }
    }

};
*/

//CSLL
/*
void createList(List &L){
    first(L) = NULL;
};
void createNewElemen(infotype x, adr &P){
    P = new element;
    info(P) = x;
    next(P) = NULL;
};
void insertFirst(List &L, adr P){
    if (first(L)==NULL){
        first(L) = P;
        next(P) = first(L);
    }else{
        adr last;
        last = first(L);
        while (next(last)!= first(L)){
            last = next(last);
        }
        next(last) = P;
        next(P) = first(L);
        first(L) = P;
    }
};
void insertLast(List &L, adr P){
    if (first(L)==NULL){
        first(L) = P;
        next(first(L)) = first(L);
    }else{
        next(P) = first(L);
        adr last = first(L);
        while (next(last)!= first(L)){
            last = next(last);
        }
        next(last) = P;
    }
};
void insertAfter(List &L, adr prec, adr P){
    if (first(L)==NULL){
        insertFirst(L,P);
    }else if (next(prec) == first(L)){
        insertLast(L,P);
    }else{
        next(P) = next(prec);
        next(prec) = P;
    }
};
void deleteFirst(List &L, adr &P){
    P = first(L);
    if (first(L) == NULL){
        cout<<"List Kosong"<<endl;
    }else if (next(first(L)) == NULL){
        first(L) = NULL;
    }else{
        first(L) = next(first(L));
        adr last = first(L);
        while (next(last)!= first(L)){
            last = next(last);
        }
        next(last) = first(L);
        next(P) = NULL;
    }
};
void deleteLast(List &L, adr &P){
    P = first(L);
    if (first(L) == NULL){
        cout<<"List Kosong"<<endl;
    }else if (next(P) == first(L)){
        next(P) = NULL;
        first(L) = NULL;
    }else{
        //last = first(L);
        adr prevLast = first(L);
        while (next(next(prevLast))!= first(L)){
            prevLast = next(prevLast);
        }
        P = next(prevLast);
        next(prevLast) = first(L);
        next(P) = NULL;
    }
};
void deleteAfter(List &L, adr prec, adr &P){
    if (first(L)==NULL){
        cout<<"List Kosong"<<endl;
    }else if (next(prec) == first(L)){
        deleteFirst(L,P);
    }else{
        P = next(prec);
        next(prec) = next(P);
        next(P) = NULL;
    }
};
void showAllData(List L){
    adr P = first(L);
    if (first(L)==NULL){
        cout<<"List Kosong"<<endl;
    }else{
        while (next(P)!= first(L)){
            cout<<info(P).nama<<endl;
            cout<<info(P).nilai<<endl;
            cout<<endl;
            P = next(P);
        }
        cout<<info(P).nama<<endl;
        cout<<info(P).nilai<<endl;
        cout<<endl;
    }
};
*/
//CDLL
void createList(List &L){
    first(L) = NULL;
    last(L) = NULL;
};
void createNewElemen(infotype x, adr &P){
    P = new element;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
};
void insertFirst(List &L, adr P){
    if (first(L)==NULL){
        first(L) = P;
        last(L) = P;
        next(P) = P;
        prev(P) = P;
    }else{
        next(P) = first(L);
        prev(P) = last(L);
        next(last(L)) = P;
        prev(first(L)) = P;
        first(L) = P;
    }
};
void insertLast(List &L, adr P){
    if (first(L)==NULL){
        first(L) = P;
        last(L) = P;
        next(P) = P;
        prev(P) = P;
    }else{
        next(last(L)) = P;
        prev(P) = last(L);
        prev(first(L)) = P;
        next(P) = first(L);
    }
};
void insertAfter(List &L, adr prec, adr P){
    next(P) = next(prec);
    prev(next(prec)) = P;
    prev(P)= prec;
    next(prec) = P;
};
void deleteFirst(List &L, adr &P){
    if (first(L)==NULL){
        cout<<"List Kosong"<<endl;
    }else if (next(first(L))==first(L)){
        P = first(L);
        next(P) = NULL;
        prev(P) = NULL;
        first(L) = NULL;
        last(L) = NULL;
    }else{
        P = first(L);
        first(L) = next(first(L));
        prev(first(L)) = last(L);
        next(last(L)) = first(L);
        next(P) = NULL;
        prev(P) = NULL;
    }
};
void deleteLast(List &L, adr &P){
    if (first(L)==NULL){
        cout<<"List Kosong"<<endl;
    }else if (next(first(L))==first(L)){
        P = first(L);
        next(P) = NULL;
        prev(P) = NULL;
        first(L) = NULL;
        last(L) = NULL;
    }else{
        P = last(L);
        next(prev(prev(first(L)))) = first(L);
        prev(first(L)) = prev(prev(first(L)));
        next(P) = NULL;
        prev(P) = NULL;
    }
};
void deleteAfter(List &L, adr prec, adr &P){
    P = next(prec);
    next(prec) = next(P);
    prev(next(P)) = prec;
    next(P) = NULL;
    prev(P) = NULL;
};
void showAllData(List L){
    adr P = first(L);
    if (first(L)== NULL){
        cout<<"List Kosong"<<endl;
    }else{
        while (next(P)!= first(L)){
            cout<<info(P).nama<<endl;
            cout<<info(P).nilai<<endl;
            cout<<endl;
            P = next(P);
        }
        cout<<info(P).nama<<endl;
        cout<<info(P).nilai<<endl;
        cout<<endl;
        P = next(P);
    }
};
