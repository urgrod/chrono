#ifndef MODEL_H
#define MODEL_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDebug>

class Model
{
public:
    Model();
    QStringList parseTableur(QString fileName);
};

#endif // MODEL_H
