#include <iostream>
#include <string>
#include "Aggregate.h"
#include "Iterator.h"
#include "TresLeches.h"
#include "Sacher.h"
#include "Imposible.h"
#include "CloneCake.h"
#include "Cake.h"
#include "FactoryConcrete.h"
#include "Factory.h"

using namespace std;

int main()
{
    Aggregate<Cake> p;

    p.add(Cake* a = FactoryConcrete::GetInstance()->create("sacher"));

    Iterator<Cake>* i;
    for(i = p.getIterator(); i->hasNext(); )
    {
        (i->next()).getInfo();
    }
    delete i;
}