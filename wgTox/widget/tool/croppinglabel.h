

#ifndef CROPPINGLABEL_H
#define CROPPINGLABEL_H

#include <QLabel>

class QLineEdit;

class CroppingLabel : public QLabel
{
    Q_OBJECT
public:
    explicit CroppingLabel(QWidget* parent = nullptr);

public slots:
    void editBegin();
    void setEditable(bool editable);
    void setElideMode(Qt::TextElideMode elide);

    QString fullText();

public slots:
    void setText(const QString& text);
    void minimizeMaximumWidth();

signals:
    void editFinished(const QString& newText);
    void editRemoved();
    void clicked();

protected:
    void paintEvent(QPaintEvent* paintEvent) override;
    void setElidedText();
    void hideTextEdit();
    void showTextEdit();
    virtual void resizeEvent(QResizeEvent* ev) final override;
    virtual QSize sizeHint() const final override;
    virtual QSize minimumSizeHint() const final override;
    virtual void mouseReleaseEvent(QMouseEvent* e) final override;

private slots:
    void editingFinished();

private:
    QString origText;
    QLineEdit* textEdit;
    bool blockPaintEvents;
    bool editable;
    Qt::TextElideMode elideMode;
};

#endif // CROPPINGLABEL_H
