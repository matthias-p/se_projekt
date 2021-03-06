#ifndef DATENDAO_H
#define DATENDAO_H

#include "daten.h"
#include <list>

class DatenDAO
{
public:
    virtual bool insert(Daten &daten) = 0;
    virtual bool update(Daten &daten) = 0;
    virtual bool updateHauptkontakt(Daten &daten) = 0;
    virtual bool search(Daten &daten, std::list<Daten*> &datenList) = 0;
    virtual bool searchEmail(Daten &daten) = 0;
    virtual bool select_newest(Daten &daten) = 0;
    virtual bool select(Daten &daten, std::list<Daten*> *datenList) = 0;
};

#endif // DATENDAO_H
