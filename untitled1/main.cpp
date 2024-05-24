#include <QCoreApplication>
#include <QtNetwork>
#include <QtSql>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QNetworkAccessManager networkManager;

    QSqlDatabase database = QSqlDatabase::addDatabase("QMYSQL");


    return a.exec();
}
