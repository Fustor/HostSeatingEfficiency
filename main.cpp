#include <iostream>
#include "restaurant.h"
#include "section.h"
#include <vector>
using namespace std;
int main() {
    cout << "How many sections in this restaurant?"<< endl;
    int sects;
    cin >> sects;
    restaurant a(sects);
    /*creates sects # of sections inside a, asks # of tables for each section
     * and fills them with unseated tables.
     * restaurant constructor -> sets total sections, calls setSectionInfo() ->
     * asks for tables #'s, calls setSection() -> calls section constructor(a,b,c)
     * and adds section to end of a.sections
     */
    /*
     while(a.contProgram()) {
        a.getCommand();
     }
    */
    return 0;
}