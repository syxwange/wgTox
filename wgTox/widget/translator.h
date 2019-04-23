
#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QMutex>
#include <QPair>
#include <QVector>
#include <functional>

class QTranslator;

class Translator
{
public:
    static void translate(const QString& localeName);
    static void registerHandler(const std::function<void()>&, void* owner);
    static void unregister(void* owner);

private:
    using Callback = QPair<void*, std::function<void()>>;
    static QVector<Callback> callbacks;
    static QMutex lock;
    static QTranslator* translator;
};

#endif // TRANSLATOR_H
