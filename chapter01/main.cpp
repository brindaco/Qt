#include <QtWidgets>

int main(int argc, char** argv){
    QApplication hello(argc, argv);

    QLabel lbl("Hello, World!");
    lbl.setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    lbl.setMinimumSize(300, 300);
    lbl.show();
    
    return hello.exec();
}