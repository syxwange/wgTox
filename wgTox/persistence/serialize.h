

#ifndef SERIALIZE_H
#define SERIALIZE_H

#include <QByteArray>
#include <QString>
#include <cstdint>

QString dataToString(QByteArray data);
uint64_t dataToUint64(const QByteArray& data);
int dataToVInt(const QByteArray& data);
size_t dataToVUint(const QByteArray& data);
unsigned getVUint32Size(QByteArray data);
QByteArray vintToData(int num);
QByteArray vuintToData(size_t num);

#endif // SERIALIZE_H
