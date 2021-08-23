#include "Boombox.h"
#include "ui_Boombox.h"

#include <QFileDialog>
#include <QFileSystemModel>

Boombox::Boombox(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Boombox)
{
    ui->setupUi(this);
}

Boombox::~Boombox()
{
    delete ui;
}

void Boombox::addFiles(QStringList files)
{

}

void Boombox::addFolder(QString folder)
{
    model = new QFileSystemModel();
    model->setRootPath(folder);
    model->setFilter(QDir::Files);
    ui->tableView->setModel(model);
    ui->tableView->setRootIndex(model->index(folder));
}

void Boombox::on_actionAdd_File_s_triggered()
{
    addFiles(QFileDialog::getOpenFileNames());
}

void Boombox::on_actionAdd_Folder_s_triggered()
{
    addFolder(QFileDialog::getExistingDirectory());
}

void Boombox::on_actionExit_triggered()
{
    close();
    QApplication::quit();
}
