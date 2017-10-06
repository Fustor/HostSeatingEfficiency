#include <iostream>
#include "restaurant.h"
#include "section.h"
#include <vector>
using namespace std;
int main() {
    section *a = new section(2,4,6);
    a->printTables();
    a->seatTable(*(a->getTwoTops()),4);
    a->printTables();
    return 0;
}