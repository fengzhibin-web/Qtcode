#ifndef CHATSERVER_H
#define CHATSERVER_H
#include <QtNetwork/QtNetwork>
#include <QTcpServer>
#include <QTcpSocket>
#include <QObject>
#include "serverworker.h"

class ChatServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit ChatServer(QObject*parent = nullptr);

protected:
    void incomingConnegtion(qintptr socketDescriptor);
    QVector<ServerWorker *>m_clients;

signals:
    void logMessage(const QString &msg);

public slots:
    void stopServer();

};

#endif // CHATSERVER_H
