#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <model.h>

#include <QMainWindow>
#include <QApplication>
#include <QDesktopWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTabWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QDirModel>
#include <QTreeView>
#include <QModelIndex>
#include <QLabel>
#include <QSpinBox>
#include <QRadioButton>
#include <QFileDialog>
#include <QMessageBox>
#include <QVector>
#include <QColorDialog>
#include <QColor>
#include <QSettings>
#include <QInputDialog>
#include <QFlags>
#include <QPrintDialog>
#include <QPrinter>
#include <QPainter>
#include <QTextBrowser>
#include <QTextTableCell>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow();

//    void showDirectoryMenu();

    QLayout *createViewFP1();
    QLayout *createViewFP2();
    QLayout *createViewQ1();
    QLayout *createViewQ2();
    QLayout *createViewRACE1();
    QLayout *createViewRACE2();
    QLayout *createViewParametre();
    void calculMoyenneManualMode();


private:
    QWidget *widgetGeneral;
    QMessageBox msgBox;

    //menu
    QTabWidget *onglets;
    QWidget *tabFP1;
    QWidget *tabFP2;
    QWidget *tabQ1;
    QWidget *tabQ2;
    QWidget *tabRACE1;
    QWidget *tabRACE2;
    QWidget *tabParametre;

    //tab FP1
    QTableWidget *tableFP1;
    QLineEdit *pathFileFP1;
    QPushButton *generatePDFFP1;
    QPushButton *importPDFFP1;
    QPushButton *populateTableFP1;
    QCheckBox *checkBox111;
    QCheckBox *checkBox31;
    QCheckBox *checkBox67;

    //tab FP2
    QTableWidget *tableFP2;
    QLineEdit *pathFileFP2;
    QPushButton *generatePDFFP2;
    QPushButton *importPDFFP2;
    QPushButton *populateTableFP2;

    //tab Q1
    QTableWidget *tableQ1;
    QLineEdit *pathFileQ1;
    QPushButton *generatePDFQ1;
    QPushButton *importPDFQ1;
    QPushButton *populateTableQ1;

    //tab Q2
    QTableWidget *tableQ2;
    QLineEdit *pathFileQ2;
    QPushButton *generatePDFQ2;
    QPushButton *importPDFQ2;
    QPushButton *populateTableQ2;

    //tab RACE1
    QTableWidget *tableRACE1;
    QLineEdit *pathFileRACE1;
    QPushButton *generatePDFRACE1;
    QPushButton *importPDFRACE1;
    QPushButton *populateTableRACE1;

    //tab RACE2
    QTableWidget *tableRACE2;
    QLineEdit *pathFileRACE2;
    QPushButton *generatePDFRACE2;
    QPushButton *importPDFRACE2;
    QPushButton *populateTableRACE2;

    //tab Parametres
    QLabel *pourcentTourLabel;
    QLabel *ficTypeLabel;
    QLabel *nbTourMinLabel;
    QLabel *nbTourMaxLabel;
    QLabel *colorMoyenneLabel;
    QLabel *colorBestTimeLabel;
    QLabel *colorIdealLabel;
    QLabel *colorOutTimeLabel;
    QSpinBox *pourcentTourSpin;
    QSpinBox *nbTourMinSpin;
    QSpinBox *nbTourMaxSpin;
    QRadioButton *fsbkRadio;
    QRadioButton *civRadio;
    QRadioButton *wsbkRadio;
    QRadioButton *ewcRadio;
    QRadioButton *ddRadio;
    QRadioButton *manRadio;
    QColor *colorMoyenne;
    QColor *colorBestTime;
    QColor *colorIdeal;
    QColor *colorOutTime;
    QPushButton *colorMoyenneButton;
    QPushButton *colorBestTimeButton;
    QPushButton *colorIdealButton;
    QPushButton *colorOutTimeButton;
    QPushButton *loadSettingsButton;
    QPushButton *saveSettingsButton;
    QSettings *settings;



    //Directory Menu
    QString *fileName;

    //InputDialog
    int rowTable;
    int columnTable;


public slots:
    void showDirectoryMenu();
    void showManualInputMenu();
    void populateArray();
    void selectColorBestTime();
    void selectColorAverageTime();
    void selectColorIdealTime();
    void selectColorOutTime();
    void saveSettings();
    void loadSettings();
    void openEditWindow(int row, int col);
    void generateFile();

};

#endif // MAINWINDOW_H
