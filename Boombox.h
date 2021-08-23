#ifndef BOOMBOX_H
#define BOOMBOX_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Boombox; }
QT_END_NAMESPACE
class QFileSystemModel;

class Boombox : public QMainWindow
{
    Q_OBJECT

public:
    Boombox(QWidget *parent = nullptr);
    ~Boombox();

public slots:
    void addFiles(QStringList files);
    void addFolder(QString folder);

private slots:
    void on_actionAdd_File_s_triggered();
    void on_actionAdd_Folder_s_triggered();
    void on_actionExit_triggered();

private:
    Ui::Boombox *ui;
    QFileSystemModel *model;
};
#endif // BOOMBOX_H
