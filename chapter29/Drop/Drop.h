#pragma once

#include <QtWidgets>

class Drop : public QLabel {
Q_OBJECT

protected:
    virtual void dragEnterEvent(QDragEnterEvent* pe)
    {
        if (pe->mimeData()->hasFormat("text/uri-list")) {
            pe->acceptProposedAction();
        }
    }

    virtual void dropEvent(QDropEvent* pe)
    {
        QList<QUrl> urlList = pe->mimeData()->urls();
        QString     str;
        foreach(QUrl url, urlList) {
            str += url.toString() + "\n";
        }
        setText("Dropped:\n" + str);
    }

public:
    Drop(QWidget* pwgt = 0) : QLabel("Drop Area", pwgt)
    {
        setAcceptDrops(true);
    }

};
