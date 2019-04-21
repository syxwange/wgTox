

#ifndef PROFILELOCKER_H
#define PROFILELOCKER_H

#include <QLockFile>
#include <memory>

class ProfileLocker
{
private:
    ProfileLocker() = delete;

public:
    static bool isLockable(QString profile);
    static bool lock(QString profile);
    static void unlock();
    static bool hasLock();
    static QString getCurLockName();
    static void assertLock();

private:
    static QString lockPathFromName(const QString& name);
    static void deathByBrokenLock();

private:
    static std::unique_ptr<QLockFile> lockfile;
    static QString curLockName;
};

#endif // PROFILELOCKER_H
