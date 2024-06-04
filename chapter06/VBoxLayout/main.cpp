#include <QtWidgets>

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget      wgt;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");
    QPushButton* pcmdC = new QPushButton("C");

    QVBoxLayout* pvbxLayout = new QVBoxLayout;    
    pvbxLayout->setContentsMargins(10, 10, 10, 10);
    pvbxLayout->setSpacing(20);
    pvbxLayout->addWidget(pcmdA);
    pvbxLayout->addWidget(pcmdB);
    pvbxLayout->addWidget(pcmdC);
    wgt.setLayout(pvbxLayout);

    wgt.show();

    return app.exec();
}
