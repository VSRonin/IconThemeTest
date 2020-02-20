#include "mainwindow.h"
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QIcon>
#include <QMenuBar>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QAction* openAction = new QAction(QIcon::fromTheme("document-open"), tr("Open"), this);
    QAction* closeAction = new QAction(QIcon::fromTheme("document-close"), tr("Close"), this);
    QAction* newAction = new QAction(QIcon::fromTheme("document-new"), tr("New"), this);

    QMenu* fileMenu= new QMenu(tr("File"),this);
    fileMenu->addAction(openAction);
    fileMenu->addAction(closeAction);
    fileMenu->addAction(newAction);
    QMenuBar* mainMenuBar = new QMenuBar(this);
    mainMenuBar->addMenu(fileMenu);
    setMenuBar(mainMenuBar);
    QToolBar* fileToolBar=new QToolBar(this);
    fileToolBar->addAction(openAction);
    fileToolBar->addAction(closeAction);
    fileToolBar->addAction(newAction);
    addToolBar(Qt::TopToolBarArea,fileToolBar);
}

