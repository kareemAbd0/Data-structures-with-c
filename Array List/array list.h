//
// Created by kareem on 8/21/22.
//

#ifndef ARRAY_LIST_ARRAY_LIST_H
#define ARRAY_LIST_ARRAY_LIST_H
#define LISTENTRY int
#define MAXELEMNT 50



typedef struct list
{
    LISTENTRY entry;
    int size;
    LISTENTRY ArrayList [MAXELEMNT];

}List;


void CreateList (List *);

void Insert (int , LISTENTRY,List *);

void Delete (int,LISTENTRY *,List *);

void SetAt (int,LISTENTRY *,List *);

void GetAt (int , LISTENTRY,List *);










#endif //ARRAY_LIST_ARRAY_LIST_H
