#include "model.h"

Model::Model()
{

}

QStringList Model::parseTableur(QString fileName)
{
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QTextStream flux(&file);

        QStringList line;
        QStringList wordList;

        int i=0;

        while(!flux.atEnd())
        {
            line << flux.readLine();
        }

//        for(i=0; i<line.count();i++)
//        {
//            QString data = line[i];
//            wordList << data.split(',');
//        }

        return line;

}
