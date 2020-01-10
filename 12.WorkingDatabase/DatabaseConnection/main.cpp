#include <QCoreApplication>

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("127.0.0.1");
	db.setPort(3306);
        db.setDatabaseName("test_db");
        db.setUserName("test"); //just for test
        db.setPassword("123");  //just for test
        //
	if (db.open())
	{
           qDebug() << "Connected!";
	}
	else
	{
           qDebug() << "Failed to connect.";
           return 0;
	}
        //
        QString command = "SELECT * FROM `User` WHERE status = 0";
	QSqlQuery query(db);
	if (query.exec(command))
	{
           // qDebug() << "Inside if...";
           while(query.next())
           {
              QString username = query.value("username").toString();
              QString name     = query.value("name").toString();
              qDebug() <<"Name:..." << name << " --> Username:..." <<username;
           }

	}
        db.close();
        return 0;
}
