#ifndef LIBRARYVIEW_H
#define LIBRARYVIEW_H

#include <QTableView>

class LibraryView : public QTableView
{
public:
    LibraryView(QWidget *parent = nullptr);
    ~LibraryView();
};

#endif // LIBRARYVIEW_H
