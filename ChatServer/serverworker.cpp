#include "serverworker.h"

ServerWorker::ServerWorker(QObject *parent):QObject{parent}
{
    m_serverSocket=new QTcpSocket(this);
}

bool ServerWorker::setSocketDescriptor(qintptr socketDescriptor)
{
    return m_serverSocket->setSocketDescriptor(socketDescriptor);
}
