#ifndef QTKONTAKTDAO_H
#define QTKONTAKTDAO_H

#include <QtSql>

#include "kontaktdao.h"

class QtKontaktDAO : public KontaktDAO
{
private:
     QSqlQuery insert_query, update_query, search_query, select_query;
public:
    QtKontaktDAO();
    bool insert(Kontakt &kontakt) override;
    bool update(Kontakt &kontakt) override;
    bool search(Kontakt &kontakt) override;
    bool select(Kontakt &kontakt, std::list<Kontakt*> &kontaktList) override;
};

#endif // QTKONTAKTDAO_H
