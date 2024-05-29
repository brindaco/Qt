#include <QtWidgets>
#include "Counter.h"

int main (int argc, char** argv)
{
    QApplication app(argc, argv);

    QLabel      lbl("0");
    QPushButton cmd("ADD");
    Counter     counter;

    lbl.setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    lbl.setMinimumSize(100, 100);

    // const QSize BUTTON_SIZE = QSize(22, 22);
    // button->setMinimumSize(BUTTON_SIZE);
    // cmd.setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    cmd.setMinimumSize(150, 100);
    
    lbl.show();
    cmd.show();

    QObject::connect(&cmd, SIGNAL(clicked()), 
                     &counter, SLOT(slotInc())
                    );

    QObject::connect(&counter, SIGNAL(counterChanged(int)),
                     &lbl, SLOT(setNum(int))
                    );

    QObject::connect(&counter, SIGNAL(goodbye()), 
                     &app, SLOT(quit())
                    );

    return app.exec();
}
