
#ifndef GENERICCHATROOMWIDGET_H
#define GENERICCHATROOMWIDGET_H

#include "genericchatitemwidget.h"

class CroppingLabel;
class MaskablePixmapWidget;
class QVBoxLayout;
class QHBoxLayout;
class ContentLayout;
class Friend;
class Group;

class GenericChatroomWidget : public GenericChatItemWidget
{
    Q_OBJECT
public:
    explicit GenericChatroomWidget(bool compact, QWidget* parent = nullptr);

public slots:
    virtual void setAsActiveChatroom() = 0;
    virtual void setAsInactiveChatroom() = 0;
    virtual void updateStatusLight() = 0;
    virtual void resetEventFlags() = 0;
    virtual QString getStatusString() const = 0;
    virtual const Friend* getFriend() const
    {
        return nullptr;
    }
    virtual Group* getGroup() const
    {
        return nullptr;
    }

    virtual bool eventFilter(QObject*, QEvent*) final override;

    bool isActive();

    void setName(const QString& name);
    void setStatusMsg(const QString& status);
    QString getStatusMsg() const;
    QString getTitle() const;

    void reloadTheme();

    void activate();
    void compactChange(bool compact);

signals:
    void chatroomWidgetClicked(GenericChatroomWidget* widget);
    void newWindowOpened(GenericChatroomWidget* widget);
    void middleMouseClicked();

protected:
    void mouseReleaseEvent(QMouseEvent* event) override;
    void enterEvent(QEvent* e) override;
    void leaveEvent(QEvent* e) override;
    void setActive(bool active);

protected:
    QPoint dragStartPos;
    QColor lastColor;
    QHBoxLayout* mainLayout = nullptr;
    QVBoxLayout* textLayout = nullptr;
    MaskablePixmapWidget* avatar;
    CroppingLabel* statusMessageLabel;
    bool active;
};

#endif // GENERICCHATROOMWIDGET_H
