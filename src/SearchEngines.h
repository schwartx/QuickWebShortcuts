//
// Created by alex on 18.06.19.
//
#include <QMap>

#ifndef QUICKWEBSHORTCUTS_SEARCHENGINES_H
#define QUICKWEBSHORTCUTS_SEARCHENGINES_H


#include <QtCore/QString>
#include <QtWidgets/QComboBox>

class SearchEngines {

public:
    static QMap<QString, QString> getDefaultSearchEngines(QMap<QString, QString> &engines);

    static QMap<QString, QString> getDefaultSearchEngines();

    static QMap<QString, QString> getCustomSearchEngines();

    static QMap<QString, QString> getCustomSearchEngines(QMap<QString, QString> &engines);

    static QList<QString> getDefaultSearchEngineNames();

};


#endif //QUICKWEBSHORTCUTS_SEARCHENGINES_H
