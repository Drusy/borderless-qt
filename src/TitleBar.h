#include <QtWidgets/QtWidgets>
#include <QMouseEvent>

class TitleBar : public QWidget
{
Q_OBJECT
public:
    TitleBar(QWidget *parent);
    void titleChanged();

public slots:
    void showSmall() { parentWidget()->showMinimized(); }
    void showMaxRestore();

protected:
    void mousePressEvent(QMouseEvent *me);
    void mouseMoveEvent(QMouseEvent *me);
	void mouseDoubleClickEvent(QMouseEvent *event);

    QLabel *mLabel;
    QToolButton *mMinimizeButton;
    QToolButton *mMaximizeButton;
    QToolButton *mCloseButton;
    QPixmap mRestorePix;
    QPixmap mMaxPix;
    bool mMaxNormal;
    QPoint mStartPos;
    QPoint mClickPos;
};
