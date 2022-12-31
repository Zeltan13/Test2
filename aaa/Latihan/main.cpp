#include "Latihan.h"

int main()
{
    /*
    SLL
    List L;
    adr P;
    infotype x;
    x.nama = "Fathan";
    x.hasil = 70;
    createList(L);
    P = newElement(x);
    insertFirst(L,P);

    x.nama = "Askar";
    x.hasil = 90;
    P = newElement(x);
    insertFirst(L,P);

    x.nama = "Yahoo";
    x.hasil = 60;
    P = newElement(x);
    adr prec = first(L);
    insertAfter(L,P,prec);

    x.nama = "Yolo";
    x.hasil = 70;
    P = newElement(x);
    insertLast(L,P);

    showAllData(L);


    //Del First
    cout<<endl;
    cout<<endl;
    x.nama = "Fathan";
    x.hasil = 70;
    createList(L);
    P = newElement(x);
    insertFirst(L,P);

    x.nama = "Askar";
    x.hasil = 90;
    P = newElement(x);
    insertFirst(L,P);

    x.nama = "Yahoo";
    x.hasil = 60;
    P = newElement(x);
    prec = first(L);
    insertAfter(L,P,prec);

    x.nama = "Yolo";
    x.hasil = 70;
    P = newElement(x);
    insertLast(L,P);
    deleteFirst(L);

    showAllData(L);

    cout<<endl;
    cout<<endl;
    //Del After
    x.nama = "Fathan";
    x.hasil = 70;
    createList(L);
    P = newElement(x);
    insertFirst(L,P);

    x.nama = "Askar";
    x.hasil = 90;
    P = newElement(x);
    insertFirst(L,P);

    x.nama = "Yahoo";
    x.hasil = 60;
    P = newElement(x);
    prec = first(L);
    insertAfter(L,P,prec);

    x.nama = "Yolo";
    x.hasil = 70;
    P = newElement(x);
    insertLast(L,P);
    P = first(L);

    deleteAfter(L,P);

    cout<<endl;
    cout<<endl;
    //Del Last
    x.nama = "Fathan";
    x.hasil = 70;
    createList(L);
    P = newElement(x);
    insertFirst(L,P);

    x.nama = "Askar";
    x.hasil = 90;
    P = newElement(x);
    insertFirst(L,P);

    x.nama = "Yahoo";
    x.hasil = 60;
    P = newElement(x);
    prec = first(L);
    insertAfter(L,P,prec);

    x.nama = "Yolo";
    x.hasil = 70;
    P = newElement(x);
    insertLast(L,P);
    P = first(L);

    deleteLast(L);

    showAllData(L);
    */


    //DLL
    /*List L;
    adr P;
    infotype x;
    createList(L);
    if (first(L) == NULL){
        cout<<"empty"<<endl;
    }
    x.nama = "Fathan";
    x.hasil = 80;
    P = createNewElement(x);
    insertFirst(L,P);

    x.nama = "Askar";
    x.hasil = 70;
    P = createNewElement(x);
    insertFirst(L,P);

    x.nama = "Yahoo";
    x.hasil = 60;
    P = createNewElement(x);
    insertLast(L,P);

    x.nama = "Fathan2";
    x.hasil = 500;
    P = createNewElement(x);
    insertLast(L,P);

    x.nama = "Yolo";
    x.hasil = 800;
    P = createNewElement(x);
    adr prec = first(L);
    insertAfter(L,prec,P);

    x.nama = "Yani";
    x.hasil = 21;
    P = createNewElement(x);
    prec = next(first(L));
    insertAfter(L,prec,P);

    showAllData(L);
    cout<<endl;
    prec = prev(last(L));
    deleteBefore(L,prec,P);
    showAllData(L);
    prec = next(next(next(first(L))));
    deleteAfter(L,prec,P);
    showAllData(L);

    //deleteFirst(L,P);

    deleteLast(L,P);
    deleteLast(L,P);
    deleteLast(L,P);
    deleteLast(L,P);
    deleteLast(L,P);
    deleteLast(L,P);
    showAllData(L);

    cout<<endl;

    deleteFirst(L,P);
    deleteFirst(L,P);
    deleteFirst(L,P);
    deleteFirst(L,P);
    showAllData(L);
    deleteFirst(L,P);
    showAllData(L);

    cout<<endl;
    cout<<endl;

    createList(L);
    if (first(L) == NULL){
        cout<<"empty"<<endl;
    }
    x.nama = "Fathan";
    x.hasil = 80;
    P = createNewElement(x);
    insertFirst(L,P);

    x.nama = "Askar";
    x.hasil = 70;
    P = createNewElement(x);
    insertFirst(L,P);

    x.nama = "Yahoo";
    x.hasil = 60;
    P = createNewElement(x);
    insertLast(L,P);

    x.nama = "Fathan2";
    x.hasil = 500;
    P = createNewElement(x);
    insertLast(L,P);

    x.nama = "Yolo";
    x.hasil = 800;
    P = createNewElement(x);
    adr prec = first(L);
    insertAfter(L,prec,P);

    x.nama = "Yani";
    x.hasil = 21;
    P = createNewElement(x);
    prec = next(first(L));
    insertAfter(L,prec,P);

    deleteFirst(L,P);
    showAllData(L);*/

    //CSLL
    List L;
    createList(L);

    infotype x;
    adr P;
    x.nama = "Fathan Askar";
    x.nilai = 100;
    createNewElemen(x, P);
    insertLast(L,P);

    x.nama = "Yolo Raider";
    x.nilai = 50;
    createNewElemen(x, P);
    insertLast(L,P);

    x.nama = "Ssundee";
    x.nilai = 60;
    createNewElemen(x, P);
    insertFirst(L,P);

    x.nama = "Crainer";
    x.nilai = 70;
    createNewElemen(x, P);
    insertFirst(L,P);

    x.nama = "PMMOS";
    x.nilai = 80;
    createNewElemen(x, P);
    adr prec = first(L);
    insertAfter(L,prec,P);

    x.nama = "Jen";
    x.nilai = 50;
    createNewElemen(x, P);
    prec = next(first(L));
    insertAfter(L,prec,P);

    prec = first(L);
    //deleteLast(L,P);
    //deleteFirst(L,P);
    //deleteAfter(L,prec, P);
    showAllData(L);


    cout << "Hello world!" << endl;
    return 0;
}
