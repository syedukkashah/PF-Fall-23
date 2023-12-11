#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct island{ //normally typedef rules the naming of a struct void, but since we are storing the pointer of the same struct type inside the struct, we need to name the struct
    char* name;
    char* opens;
    char* closes;
    struct island* next;
}island;
island* create(char* name){
    island* i = malloc(sizeof(island));
    i->name = strdup(name);
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;
    return i;
}
void display(island* start){ //function takes a pointer to the island struct
        printf("\nName:%s\nOpen: %s-%s\n", start->name, start->opens, start->closes);
}
void clear_memory(island* end){
    island* i = start;
    island *next = NULL;
    for(;i!= NULL; i++){
        next = i->next;
        free(i->next);
        free(i);
    }
}
int main(void){ 
//     island amity = {"Amity", "09:00", "17:00", NULL};
// island craggy = {"Craggy", "09:00", "17:00", NULL};
// island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
// island shutter = {"Shutter", "09:00", "17:00", NULL};
// amity.next = &craggy;
// craggy.next = &isla_nublar;
// isla_nublar.next = &shutter;
// island skull = {"Skull", "09:00", "17:00", NULL};
// isla_nublar.next = &skull;
// skull.next = &shutter;
// display(&amity);
char name[80];
printf("Enter name of 1st island: ");
fgets(name, sizeof(name), stdin);
island* p = (create(name));  /*The program asks the user for the name of each island, but both times
                                       it uses the name local char array to store the name. That means that 
                                       the two islands share the same name string. As soon as the local 
                                       name variable gets updated with the name of the second island, the 
                                       name of the first island changes as well*/
printf("Enter name of 2nd island: ");
fgets(name, sizeof(name), stdin);
island* p2 =(create(name));
p->next = p2;
display(p);
display(p2);
}
