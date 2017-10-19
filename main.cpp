#include <iostream>
#include "restaurant.h"
#include "section.h"
#include <vector>
using namespace std;
int main() {
   /* section *a = new section(2,4,6);
    a->printTables();
    a->seatTable(*(a->getTwoTops()),4);
    a->seatTable(*(a->getFourTops()),4);
    a->seatTable(*(a->getFourTops()),2);
    a->seatTable(*(a->getFourTops()),3);
    a->seatTable(*(a->getFourTops()),3);
    a->seatTable(*(a->getFourTops()),3);
    a->unseatTable(*(a->getFourTops()),2);
    a->printTables(); */
    restaurant *a = new restaurant();
    a->seatTable(1,3,4);
    a->unseatTable(1,3,4);
    a->getSection(1)->printTables();




    return 0;
}