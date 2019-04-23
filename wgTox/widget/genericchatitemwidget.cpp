

#include "genericchatitemwidget.h"
#include "persistence/settings.h"
#include "widget/style.h"
#include "widget/tool/croppinglabel.h"
#include <QVariant>

GenericChatItemWidget::GenericChatItemWidget(bool compact, QWidget* parent)
    : QFrame(parent)
    , compact(false)
{
    setProperty("compact", compact);

    nameLabel = new CroppingLabel(this);
    nameLabel->setObjectName("name");
    nameLabel->setTextFormat(Qt::PlainText);
}

bool GenericChatItemWidget::isCompact() const
{
    return compact;
}

void GenericChatItemWidget::setCompact(bool compact)
{
    this->compact = compact;
}

QString GenericChatItemWidget::getName() const
{
    return nameLabel->fullText();
}

void GenericChatItemWidget::searchName(const QString& searchString, bool hide)
{
    setVisible(!hide && getName().contains(searchString, Qt::CaseInsensitive));
}
