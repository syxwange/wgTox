
#ifndef TOXSTRING_H
#define TOXSTRING_H

#include <QByteArray>
#include <QString>

#include <cstdint>

class ToxString
{
public:
    explicit ToxString(const QString& text);
    explicit ToxString(const QByteArray& text);
    ToxString(const uint8_t* text, size_t length);

    const uint8_t* data() const;
    size_t size() const;
    QString getQString() const;
    QByteArray getBytes() const;

private:
    QByteArray string;
};
#endif // TOXSTRING_H
