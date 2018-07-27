#include "mainwindow.h"

MainWindow::MainWindow() : QMainWindow()
{

    this->setWindowTitle("TECH SOLUTIONS");
    this->resize(QApplication::desktop()->width() - 50 , QApplication::desktop()->height() - 50);

    widgetGeneral = new QWidget;
    QHBoxLayout *qblGeneral = new QHBoxLayout;

    widgetGeneral->setLayout(qblGeneral);
    this->setCentralWidget(widgetGeneral);

    onglets = new QTabWidget(this);
    onglets->setGeometry(0,0,QApplication::desktop()->width() -50 , QApplication::desktop()->height() -50 );

    tabFP1 = new QWidget;
    tabFP1->setLayout(createViewFP1());

    tabFP2 = new QWidget;
    tabFP2->setLayout(createViewFP2());

    tabQ1 = new QWidget;
    tabQ1->setLayout(createViewQ1());

    tabQ2 = new QWidget;
    tabQ2->setLayout(createViewQ2());

    tabRACE1 = new QWidget;
    tabRACE1->setLayout(createViewRACE1());

    tabRACE2 = new QWidget;
    tabRACE2->setLayout(createViewRACE2());

    tabParametre = new QWidget;
    tabParametre->setLayout(createViewParametre());

    //    onglets->addTab(tabFP1, "FP1");
    //    onglets->addTab(tabFP2, "FP2");
    //    onglets->addTab(tabQ1, "Q1");
    //    onglets->addTab(tabQ2, "Q2");
    //    onglets->addTab(tabRACE1, "RACE1");
    onglets->addTab(tabRACE2, "RACE2");
    onglets->addTab(tabParametre, "SETTINGS");

    connect(importPDFRACE2, SIGNAL(clicked(bool)), this, SLOT(showDirectoryMenu()));
    connect(importPDFRACE2, SIGNAL(clicked(bool)), this, SLOT(populateArray()));

}

MainWindow::~MainWindow()
{

}

QLayout *MainWindow::createViewFP1()
{
    QHBoxLayout *qboxLayout1 = new QHBoxLayout;
    QHBoxLayout *qboxLayout2 = new QHBoxLayout;
    QVBoxLayout *qboxLayout3 = new QVBoxLayout;
    QVBoxLayout *qboxLayout4 = new QVBoxLayout;


    QVBoxLayout *qboxLayout10 = new QVBoxLayout;



    tableFP1 = new QTableWidget(this);
    tableFP1->setEditTriggers(QAbstractItemView::NoEditTriggers);

    generatePDFFP1 = new QPushButton("Generate File");
    importPDFFP1 = new QPushButton("Import file");
    populateTableFP1 = new QPushButton("Populate array");

    checkBox31 = new QCheckBox("#31");
    checkBox67 = new QCheckBox("#67");
    checkBox111 = new QCheckBox("#111");

    qboxLayout1->addWidget(tableFP1);

    qboxLayout3->addWidget(checkBox31);
    qboxLayout3->addWidget(checkBox67);
    qboxLayout3->addWidget(checkBox111);


    qboxLayout4->addWidget(importPDFFP1);
    qboxLayout4->addWidget(populateTableFP1);
    qboxLayout4->addWidget(generatePDFFP1);



    qboxLayout2->addLayout(qboxLayout3);
    qboxLayout2->addLayout(qboxLayout4);

    qboxLayout10->addLayout(qboxLayout1);
    qboxLayout10->addLayout(qboxLayout2);



    //test
    //    QFile file("SBK - Libre 1 - Tours.pdf");
    //    file.open(QIODevice::ReadOnly);
    //    QTextStream flux(&file);

    //    QStringList line;

    //    while(!flux.atEnd())
    //    {
    //        line << flux.readLine();
    //        qDebug() << "line" << line;
    //    }

    return qboxLayout10;


}

QLayout *MainWindow::createViewFP2()
{
    QHBoxLayout *qboxLayout1 = new QHBoxLayout;
    QHBoxLayout *qboxLayout2 = new QHBoxLayout;
    QVBoxLayout *qboxLayout3 = new QVBoxLayout;
    QVBoxLayout *qboxLayout4 = new QVBoxLayout;


    QVBoxLayout *qboxLayout10 = new QVBoxLayout;



    tableFP2 = new QTableWidget(this);
    tableFP2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    generatePDFFP2 = new QPushButton("Generate File");
    importPDFFP2 = new QPushButton("Import file");
    populateTableFP2 = new QPushButton("Populate array");

    checkBox31 = new QCheckBox("#31");
    checkBox67 = new QCheckBox("#67");
    checkBox111 = new QCheckBox("#111");

    qboxLayout1->addWidget(tableFP2);

    qboxLayout3->addWidget(checkBox31);
    qboxLayout3->addWidget(checkBox67);
    qboxLayout3->addWidget(checkBox111);


    qboxLayout4->addWidget(importPDFFP2);
    qboxLayout4->addWidget(populateTableFP2);
    qboxLayout4->addWidget(generatePDFFP2);



    qboxLayout2->addLayout(qboxLayout3);
    qboxLayout2->addLayout(qboxLayout4);

    qboxLayout10->addLayout(qboxLayout1);
    qboxLayout10->addLayout(qboxLayout2);


    return qboxLayout10;

}

QLayout *MainWindow::createViewQ1()
{
    QHBoxLayout *qboxLayout1 = new QHBoxLayout;
    QHBoxLayout *qboxLayout2 = new QHBoxLayout;
    QVBoxLayout *qboxLayout3 = new QVBoxLayout;
    QVBoxLayout *qboxLayout4 = new QVBoxLayout;


    QVBoxLayout *qboxLayout10 = new QVBoxLayout;



    tableQ1 = new QTableWidget(this);
    tableQ1->setEditTriggers(QAbstractItemView::NoEditTriggers);

    generatePDFQ1 = new QPushButton("Generate File");
    importPDFQ1 = new QPushButton("Import file");
    populateTableQ1 = new QPushButton("Populate array");

    checkBox31 = new QCheckBox("#31");
    checkBox67 = new QCheckBox("#67");
    checkBox111 = new QCheckBox("#111");

    qboxLayout1->addWidget(tableQ1);

    qboxLayout3->addWidget(checkBox31);
    qboxLayout3->addWidget(checkBox67);
    qboxLayout3->addWidget(checkBox111);


    qboxLayout4->addWidget(importPDFQ1);
    qboxLayout4->addWidget(populateTableQ1);
    qboxLayout4->addWidget(generatePDFQ1);



    qboxLayout2->addLayout(qboxLayout3);
    qboxLayout2->addLayout(qboxLayout4);

    qboxLayout10->addLayout(qboxLayout1);
    qboxLayout10->addLayout(qboxLayout2);


    return qboxLayout10;

}

QLayout *MainWindow::createViewQ2()
{
    QHBoxLayout *qboxLayout1 = new QHBoxLayout;
    QHBoxLayout *qboxLayout2 = new QHBoxLayout;
    QVBoxLayout *qboxLayout3 = new QVBoxLayout;
    QVBoxLayout *qboxLayout4 = new QVBoxLayout;


    QVBoxLayout *qboxLayout10 = new QVBoxLayout;



    tableQ2 = new QTableWidget(this);
    tableQ2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    generatePDFQ2 = new QPushButton("Generate File");
    importPDFQ2 = new QPushButton("Import file");
    populateTableQ2 = new QPushButton("Populate array");

    checkBox31 = new QCheckBox("#31");
    checkBox67 = new QCheckBox("#67");
    checkBox111 = new QCheckBox("#111");

    qboxLayout1->addWidget(tableQ2);

    qboxLayout3->addWidget(checkBox31);
    qboxLayout3->addWidget(checkBox67);
    qboxLayout3->addWidget(checkBox111);


    qboxLayout4->addWidget(importPDFQ2);
    qboxLayout4->addWidget(populateTableQ2);
    qboxLayout4->addWidget(generatePDFQ2);



    qboxLayout2->addLayout(qboxLayout3);
    qboxLayout2->addLayout(qboxLayout4);

    qboxLayout10->addLayout(qboxLayout1);
    qboxLayout10->addLayout(qboxLayout2);


    return qboxLayout10;

}

QLayout *MainWindow::createViewRACE1()
{
    QHBoxLayout *qboxLayout1 = new QHBoxLayout;
    QHBoxLayout *qboxLayout2 = new QHBoxLayout;
    QVBoxLayout *qboxLayout3 = new QVBoxLayout;
    QVBoxLayout *qboxLayout4 = new QVBoxLayout;


    QVBoxLayout *qboxLayout10 = new QVBoxLayout;



    tableRACE1 = new QTableWidget(this);
    tableRACE1->setEditTriggers(QAbstractItemView::NoEditTriggers);

    generatePDFRACE1 = new QPushButton("Generate File");
    importPDFRACE1 = new QPushButton("Import file");
    populateTableRACE1 = new QPushButton("Populate array");

    checkBox31 = new QCheckBox("#31");
    checkBox67 = new QCheckBox("#67");
    checkBox111 = new QCheckBox("#111");

    qboxLayout1->addWidget(tableRACE1);

    qboxLayout3->addWidget(checkBox31);
    qboxLayout3->addWidget(checkBox67);
    qboxLayout3->addWidget(checkBox111);


    qboxLayout4->addWidget(importPDFRACE1);
    qboxLayout4->addWidget(populateTableRACE1);
    qboxLayout4->addWidget(generatePDFRACE1);



    qboxLayout2->addLayout(qboxLayout3);
    qboxLayout2->addLayout(qboxLayout4);

    qboxLayout10->addLayout(qboxLayout1);
    qboxLayout10->addLayout(qboxLayout2);


    return qboxLayout10;

}

QLayout *MainWindow::createViewRACE2()
{
    QHBoxLayout *qboxLayout1 = new QHBoxLayout;
    QHBoxLayout *qboxLayout2 = new QHBoxLayout;
    QVBoxLayout *qboxLayout3 = new QVBoxLayout;
    QVBoxLayout *qboxLayout4 = new QVBoxLayout;


    QVBoxLayout *qboxLayout10 = new QVBoxLayout;



    tableRACE2 = new QTableWidget(this);
    tableRACE2->setEditTriggers(QAbstractItemView::NoEditTriggers);

    generatePDFRACE2 = new QPushButton("Generate File");
    importPDFRACE2 = new QPushButton("Import file");
    populateTableRACE2 = new QPushButton("Populate array");

    checkBox31 = new QCheckBox("#31");
    checkBox67 = new QCheckBox("#67");
    checkBox111 = new QCheckBox("#111");

    qboxLayout1->addWidget(tableRACE2);

    //    qboxLayout3->addWidget(checkBox31);
    //    qboxLayout3->addWidget(checkBox67);
    //    qboxLayout3->addWidget(checkBox111);


    qboxLayout4->addWidget(importPDFRACE2);
    qboxLayout4->addWidget(populateTableRACE2);
    qboxLayout4->addWidget(generatePDFRACE2);



    qboxLayout2->addLayout(qboxLayout3);
    qboxLayout2->addLayout(qboxLayout4);

    qboxLayout10->addLayout(qboxLayout1);
    qboxLayout10->addLayout(qboxLayout2);


    return qboxLayout10;

}

QLayout *MainWindow::createViewParametre()
{
    QHBoxLayout *qboxLayout1 = new QHBoxLayout;
    QHBoxLayout *qboxLayout2 = new QHBoxLayout;
    QVBoxLayout *qboxLayout3 = new QVBoxLayout;
    QVBoxLayout *qboxLayout4 = new QVBoxLayout;


    QVBoxLayout *qboxLayout10 = new QVBoxLayout;

    nbTourMinLabel = new QLabel("nb tour mini");
    nbTourMinSpin = new QSpinBox;
    nbTourMinSpin->setRange(1,40);
    nbTourMinSpin->setSingleStep(1);
    nbTourMinSpin->setValue(5);
    nbTourMinSpin->setSuffix("Lap(s)");

    qboxLayout1->addWidget(nbTourMinLabel);
    qboxLayout1->addWidget(nbTourMinSpin);

    nbTourMaxLabel = new QLabel("nb tour max");
    nbTourMaxSpin = new QSpinBox;
    nbTourMaxSpin->setRange(1,40);
    nbTourMaxSpin->setSingleStep(1);
    nbTourMaxSpin->setValue(10);
    nbTourMaxSpin->setSuffix("Lap(s)");

    qboxLayout1->addWidget(nbTourMaxLabel);
    qboxLayout1->addWidget(nbTourMaxSpin);

    pourcentTourLabel = new QLabel("Marge");
    pourcentTourSpin = new QSpinBox;
    pourcentTourSpin->setRange(0,100);
    pourcentTourSpin->setSingleStep(1);
    pourcentTourSpin->setValue(5);
    pourcentTourSpin->setSuffix("%");

    qboxLayout2->addWidget(pourcentTourLabel);
    qboxLayout2->addWidget(pourcentTourSpin);

    ficTypeLabel = new QLabel("Championship");
    fsbkRadio = new QRadioButton("FSBK");
    //    fsbkRadio->setChecked(1);
    civRadio = new QRadioButton("CIV");
    wsbkRadio = new QRadioButton("WSBK");
    ewcRadio = new QRadioButton("EWC");
    ddRadio = new QRadioButton("2D");
    ddRadio->setChecked(1);
    manRadio = new QRadioButton("manual input");

    qboxLayout2->addWidget(ficTypeLabel);
    qboxLayout2->addWidget(fsbkRadio);
    qboxLayout2->addWidget(civRadio);
    qboxLayout2->addWidget(wsbkRadio);
    qboxLayout2->addWidget(ewcRadio);
    qboxLayout2->addWidget(ddRadio);
    qboxLayout2->addWidget(manRadio);

    qboxLayout3->addLayout(qboxLayout1);
    qboxLayout4->addLayout(qboxLayout2);

    //    qboxLayout10->addLayout(qboxLayout3);
    qboxLayout10->addLayout(qboxLayout4);

    return qboxLayout10;

}


void MainWindow::showDirectoryMenu()
{
    fileName = new QString;


    if(manRadio->isChecked())
    {
        msgBox.setText("You are in manual mode input.");
        msgBox.exec();
    }
    else{
        if(fsbkRadio->isChecked() || civRadio->isChecked() || wsbkRadio->isChecked() || ewcRadio->isChecked())
        {
            *fileName = QFileDialog::getOpenFileName(this, tr("Select file"), QDir::currentPath()+"/..", tr("PDF (*.pdf)"));
        }
        if(ddRadio->isChecked())
        {
            *fileName = QFileDialog::getOpenFileName(this, tr("Select file"), QDir::currentPath()+"/..", tr("2D (*.csv);;Tableur (*.ods)"));
        }
    }
}

void MainWindow::populateArray()
{

    Model *model = new Model();

    if((fsbkRadio->isChecked() || civRadio->isChecked() || wsbkRadio->isChecked() || ewcRadio->isChecked()) && fileName->isEmpty())
    {
        qDebug()<<"pdf";

        if(fsbkRadio->isChecked())
        {
            qDebug() << "fsbk";
        }

        if(civRadio->isChecked())
        {
            qDebug() << "civ";
        }

        if(wsbkRadio->isChecked())
        {
            qDebug() << "wsbk";
        }
    }

    if(ddRadio->isChecked())
    {

        QStringList wordList = model->parseTableur(*fileName);
        QStringList wordListSplit;

        tableRACE2->setRowCount(wordList.count()-1);
        tableRACE2->setColumnCount(wordList[0].count(',')+1);

        for(int i=0; i<wordList.count(); i++)
        {
            QString data = wordList[i];
            wordListSplit << data.split(',');
        }

        for(int i=0; i<wordList[0].count(',')+1; i++)
        {
            tableRACE2->setHorizontalHeaderItem(i, new QTableWidgetItem(wordListSplit[i]));

        }

        int nbSector = wordList[0].count(',')+1;
        QString tabTime [nbSector];
        double tabTimeSecond [nbSector];
        double tabTimeMarge[nbSector];
        double tabTimeMoyenne[nbSector] = {0};
        int tabLapMoyenne[nbSector] = {0};

        for(int i=0; i<wordList.count(); i++)
        {
            QString data = wordList[i];
            QStringList test = data.split(',');

            for(int j=1; j<wordList[0].count(',')+1; j++)
            {
                if(test[j].indexOf('(') != -1)
                {
                    tabTime[j] = test[j];
                }
            }
        }

        for(int i=0; i<(nbSector); i++)
        {
            tabTime[i].remove(tabTime[i].indexOf('('), 3);
            tabTime[i].remove(0,tabTime[i].indexOf(':')+1);

            if(tabTime[i].indexOf('m') != -1) tabTime[i].remove(tabTime[i].indexOf('m'), 3);
            tabTimeSecond[i] = tabTime[i].toDouble();
        }

        for(int i=0; i<nbSector; i++)
        {
            tabTimeMarge[i] = tabTimeSecond[i]+((double)pourcentTourSpin->value()/100)*tabTimeSecond[i];
        }

        for(int i=0; i<wordList.count(); i++)
        {
            QString data = wordList[i];
            QStringList test = data.split(',');

            for(int j=0; j<wordList[0].count(','); j++)
            {

                if(test[j].indexOf(':') != -1)
                {
                    test[j].remove(0, test[j].indexOf(':')+1);
                }

                if(test[j].indexOf('(') != -1)
                {
                    test[j].remove(test[j].indexOf('('), 3);

                }
            }


            for(int i=2; i<wordList.count(); i++)
            {

                for(int j=0; j<wordList[0].count(',')+1; j++)
                {
                    QString data = wordList[i];
                    QStringList test = data.split(',');



                    if(test[j].indexOf('m') != -1)
                    {
                        test[j].remove(test[j].indexOf('m'), 3);
                    }

                    tableRACE2->setItem(i-2, j, new QTableWidgetItem(test[j]));

                    if(test[j].indexOf('(') != -1)
                    {
                        QString ghu = test[j];
                        tableRACE2->setItem(i-2, j, new QTableWidgetItem(ghu.remove(ghu.indexOf('('), 3)));
                    }

                    if(test[j].indexOf('(') != -1)
                    {
                        tableRACE2->item(i-2, j)->setBackground(Qt::green);
                        test[j].remove(test[j].indexOf('('), 3);
                    }

                    if(test[j].indexOf(':') != -1)
                    {
                        test[j].remove(0, test[j].indexOf(':')+1);

                    }

                    if(i == wordList.count()-1)
                    {
                        tableRACE2->item(i-2, j)->setBackground(Qt::magenta);

                    }


                    for(int k=0; k < nbSector; k++)
                    {
                        if(test[j].toDouble() > tabTimeMarge[j] || test[j].toDouble() < tabTimeSecond[j])
                        {

                            if(j != 0 )
                            {
                                if( i != wordList.count()-1)
                                {
                                    tableRACE2->item(i-2, j)->setBackground(Qt::red);

                                }
                                else{
                                    tableRACE2->item(i-2, j)->setBackground(Qt::magenta);
                                }
                            }
                        }
                        else{
                            tabTimeMoyenne[j] += test[j].toDouble();
                            tabLapMoyenne[j]++;

                        }

                    }




                }
            }


        }

        QStringList tabMoyenneString;
        QString ghu = "Average";

        tabMoyenneString << ghu;

        for(int i=1; i<nbSector; i++)
        {
            tabMoyenneString << QString::number(tabTimeMoyenne[i]/tabLapMoyenne[i],'g' ,5);


        }

        for(int j=0; j<wordList[0].count(',')+1; j++)
        {

            tableRACE2->setItem(tableRACE2->rowCount(), j, new QTableWidgetItem(tabMoyenneString[j]));
            tableRACE2->setItem(wordList.count()-2, j, new QTableWidgetItem(tabMoyenneString[j]));
            tableRACE2->item(wordList.count()-2,j)->setBackground(Qt::yellow);

        }


    }

    if(manRadio->isChecked())
    {

    }
}
